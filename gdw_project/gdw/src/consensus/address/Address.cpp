#include <consensus/address/Address.hpp>
#include <consensus/WithdrawTypes.hpp>
#include <consensus/Exceptions.hpp>
#include <fc/crypto/base58.hpp>
#include <algorithm>

namespace gdwcore {
	namespace consensus {


		Address::Address(const AddressType& address_type ){
			fc::ripemd160 temp_ripe;
			auto temp_addr = Address(temp_ripe, address_type);
			this->addr = temp_addr.addr;
		}

		Address::Address(const std::string& base58str, const AddressType& address_type)
		{

			std::vector<char> v = fc::from_base58(::fc::string(base58str));
			if (v.size())
				memcpy(addr.data, v.data(), std::min<size_t>(v.size(), sizeof(addr)));

			if (!Address::is_valid(base58str, GDW_ADDRESS_PREFIX))
			{
				FC_THROW_EXCEPTION(invalid_address, "invalid address ${a}", ("a", base58str));
			}


		}

		Address::Address(const WithdrawCondition& condition, const AddressType& address_type)
		{
			fc::sha256::encoder enc;
			fc::raw::pack(enc, condition);
			auto rep = fc::ripemd160::hash(enc.result());
			if (address_type == AddressType::gdw_address)
				addr.data[0] = 38;
			else if (address_type == AddressType::contract_address)
				addr.data[0] = 88;
			else if (address_type == AddressType::script_id)
				addr.data[0] = 125;
			else if (address_type == AddressType::multisig_address)
				addr.data[0] = 50;
			memcpy(addr.data + 1, (char*)&rep, sizeof(rep));
			auto check = fc::sha256::hash(addr.data, sizeof(rep) + 1);
			check = fc::sha256::hash(check); // double
			memcpy(addr.data + 1 + sizeof(rep), (char*)&check, 4);
		}

		/**
		*  Checks the address to verify it has a
		*  valid checksum
		*/
		bool Address::is_valid(const std::string& base58str, const std::string& prefix)
		{
			const size_t prefix_len = prefix.size();
			if (base58str.size() <= prefix_len)
				return false;
			if (base58str.substr(0, prefix_len) != GDW_ADDRESS_PREFIX && base58str.substr(0, prefix_len) != CONTRACT_ADDRESS_PREFIX && base58str.substr(0, prefix_len) != SCRIPT_ID_PREFIX &&base58str.substr(0, prefix_len) != MULTI_ADDRESS_PREFIX)
				return false;
			vector<char> v = fc::from_base58(base58str);
			auto check = ::fc::sha256::hash(&v[0], sizeof(fc::ripemd160) + 1);
			check = ::fc::sha256::hash(check); // double
			return memcmp(&v[0] + 1 + sizeof(fc::ripemd160), (char*)&check, 4) == 0;
		}

		std::string Address::AddressToString(const AddressType& address_type)const
		{
			return fc::to_base58(addr.data, sizeof(addr));
		}

		int Address::judge_addr_type(const std::string& base58str)
		{
			// ub address
			if (base58str[0] == 'G')
				return AddressType::gdw_address;
			else if (base58str[0] == 'c')
				return AddressType::contract_address;
			else if (base58str[0] == 's')
				return AddressType::script_id;
			else if (base58str[0] == 'M')
				return AddressType::multisig_address;
		}

		void Address::AddressHelper(const ::fc::ecc::public_key& pub, bool compressed, uint8_t version)
		{
			::fc::sha256 sha2;
			if (compressed)
			{
				auto dat = pub.serialize();
				sha2 = ::fc::sha256::hash(dat.data, sizeof(dat));
			}
			else
			{
				auto dat = pub.serialize_ecc_point();
				sha2 = fc::sha256::hash(dat.data, sizeof(dat));
			}
			auto rep = fc::ripemd160::hash((char*)&sha2, sizeof(sha2));
			addr.data[0] = version;
			memcpy(addr.data + 1, (char*)&rep, sizeof(rep));
			auto check = fc::sha256::hash(addr.data, sizeof(rep) + 1);
			check = fc::sha256::hash(check); // double
			memcpy(addr.data + 1 + sizeof(rep), (char*)&check, 4);

		}


		Address::Address(const fc::ecc::public_key& pub, const AddressType& address_type)
		{
			if (address_type == AddressType::gdw_address)
				AddressHelper(pub, true, 38);
			else if (address_type == AddressType::contract_address)
				AddressHelper(pub, true, 88);
			else if (address_type == AddressType::script_id)
				AddressHelper(pub, true, 125);
			else if (address_type == AddressType::multisig_address)
				AddressHelper(pub, true, 50);

		}

		Address::Address(const fc::ripemd160& ripe, const AddressType& address_type)
		{
			auto version = 0;
			if (address_type == AddressType::gdw_address)
				version = 38;
			else if (address_type == AddressType::contract_address)
				version = 88;
			else if (address_type == AddressType::script_id)
				version = 125;
			else if (address_type == AddressType::multisig_address)
				version = 50;

			auto rep = ripe;
			addr.data[0] = version;
			memcpy(addr.data + 1, (char*)&rep, sizeof(rep));
			auto check = fc::sha256::hash(addr.data, sizeof(rep) + 1);
			check = fc::sha256::hash(check); // double
			memcpy(addr.data + 1 + sizeof(rep), (char*)&check, 4);

		}


		Address::Address(const PtsAddress& ptsaddr)
		{
			addr = ptsaddr.addr;
		}

		Address::Address(const fc::ecc::public_key_data& pub, const AddressType& address_type) : Address(fc::ecc::public_key(pub), address_type)
		{

		}

		Address::Address(const gdwcore::consensus::PublicKeyType& pub, const AddressType& address_type) : Address(fc::ecc::public_key(pub.key_data), address_type)
		{
		}


		//   Address::Address(const PublicKeyType& pubkey, const TransactionIdType& trxid)
		//   {
		//       fc::sha512::encoder enc;
		//       fc::raw::pack(enc, pubkey);
		//       fc::raw::pack(trxid);
		//       addr = fc::ripemd160::hash(enc.result());
		//   }




		Address::operator std::string()const
		{
			return fc::to_base58(addr.data, sizeof(addr));
		}



	}
} // namespace gdwcore::consensus

namespace fc
{
	void to_variant(const gdwcore::consensus::Address& var, variant& vo)
	{
		vo = std::string(var);
	}
	void from_variant(const variant& var, gdwcore::consensus::Address& vo)
	{
		vo = gdwcore::consensus::Address(var.as_string());
	}
}
