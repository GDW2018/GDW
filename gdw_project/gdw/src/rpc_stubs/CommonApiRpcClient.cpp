//                                   _           _    __ _ _      
//                                  | |         | |  / _(_) |     
//    __ _  ___ _ __   ___ _ __ __ _| |_ ___  __| | | |_ _| | ___ 
//   / _` |/ _ \ '_ \ / _ \ '__/ _` | __/ _ \/ _` | |  _| | |/ _ \`
//  | (_| |  __/ | | |  __/ | | (_| | ||  __/ (_| | | | | | |  __/
//   \__, |\___|_| |_|\___|_|  \__,_|\__\___|\__,_| |_| |_|_|\___|
//    __/ |                                                       
//   |___/                                                        
//
//
// Warning: this is a generated file, any changes made here will be
//          overwritten by the build process.  If you need to change what is
//          generated here, you should either modify the input json files
//          (network_api.json, wallet_api.json, etc) or modify the code
//          generator (gdwcore_api_generator.cpp) itself
//
#define DEFAULT_LOGGER "rpc"
#include <rpc_stubs/CommonApiRpcClient.hpp>
#include <api/ConversionFunctions.hpp>

namespace gdwcore {
    namespace rpc_stubs {

        fc::variant_object CommonApiRpcClient::blockchain_get_info() const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_info", std::vector<fc::variant>{}).wait();
            return result.as<fc::variant_object>();
        }
        void CommonApiRpcClient::blockchain_generate_snapshot(const std::string& filename) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_generate_snapshot", std::vector<fc::variant>{fc::variant(filename)}).wait();
        }
        std::vector<gdwcore::consensus::GdwTrxidBalance> CommonApiRpcClient::blockchain_get_gdw_account_balance_entry(uint32_t block_num)
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_ub_account_balance_entry", std::vector<fc::variant>{fc::variant(block_num)}).wait();
            return result.as<std::vector<gdwcore::consensus::GdwTrxidBalance>>();
        }
        void CommonApiRpcClient::blockchain_generate_issuance_map(const std::string& symbol, const std::string& filename) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_generate_issuance_map", std::vector<fc::variant>{fc::variant(symbol), fc::variant(filename)}).wait();
        }
        gdwcore::consensus::Asset CommonApiRpcClient::blockchain_calculate_supply(const std::string& asset) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_calculate_supply", std::vector<fc::variant>{fc::variant(asset)}).wait();
            return result.as<gdwcore::consensus::Asset>();
        }
        bool CommonApiRpcClient::blockchain_is_synced() const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_is_synced", std::vector<fc::variant>{}).wait();
            return result.as<bool>();
        }
        uint32_t CommonApiRpcClient::blockchain_get_block_count() const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_block_count", std::vector<fc::variant>{}).wait();
            return result.as<uint32_t>();
        }
        gdwcore::consensus::BlockchainSecurityState CommonApiRpcClient::blockchain_get_security_state() const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_security_state", std::vector<fc::variant>{}).wait();
            return result.as<gdwcore::consensus::BlockchainSecurityState>();
        }
        std::vector<gdwcore::consensus::AccountEntry> CommonApiRpcClient::blockchain_list_accounts(const std::string& first_account_name /* = fc::json::from_string("\"\"").as<std::string>() */, uint32_t limit /* = fc::json::from_string("20").as<uint32_t>() */) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_list_accounts", std::vector<fc::variant>{fc::variant(first_account_name), fc::variant(limit)}).wait();
            return result.as<std::vector<gdwcore::consensus::AccountEntry>>();
        }
        std::vector<gdwcore::consensus::AccountEntry> CommonApiRpcClient::blockchain_list_recently_updated_accounts() const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_list_recently_updated_accounts", std::vector<fc::variant>{}).wait();
            return result.as<std::vector<gdwcore::consensus::AccountEntry>>();
        }
        std::vector<gdwcore::consensus::AccountEntry> CommonApiRpcClient::blockchain_list_recently_registered_accounts() const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_list_recently_registered_accounts", std::vector<fc::variant>{}).wait();
            return result.as<std::vector<gdwcore::consensus::AccountEntry>>();
        }
        std::vector<gdwcore::consensus::AssetEntry> CommonApiRpcClient::blockchain_list_assets(const std::string& first_symbol /* = fc::json::from_string("\"\"").as<std::string>() */, uint32_t limit /* = fc::json::from_string("20").as<uint32_t>() */) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_list_assets", std::vector<fc::variant>{fc::variant(first_symbol), fc::variant(limit)}).wait();
            return result.as<std::vector<gdwcore::consensus::AssetEntry>>();
        }
        std::vector<std::pair<gdwcore::consensus::TransactionIdType, gdwcore::consensus::SignedTransaction>> CommonApiRpcClient::blockchain_list_pending_transactions() const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_list_pending_transactions", std::vector<fc::variant>{}).wait();
            return result.as<std::vector<std::pair<gdwcore::consensus::TransactionIdType, gdwcore::consensus::SignedTransaction>>>();
        }
        std::pair<gdwcore::consensus::TransactionIdType, gdwcore::consensus::TransactionEntry> CommonApiRpcClient::blockchain_get_transaction(const std::string& transaction_id_prefix, bool exact /* = fc::json::from_string("false").as<bool>() */) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_transaction", std::vector<fc::variant>{fc::variant(transaction_id_prefix), fc::variant(exact)}).wait();
            return result.as<std::pair<gdwcore::consensus::TransactionIdType, gdwcore::consensus::TransactionEntry>>();
        }
        gdwcore::wallet::PrettyTransaction CommonApiRpcClient::blockchain_get_pretty_transaction(const std::string& transaction_id_prefix, bool exact /* = fc::json::from_string("false").as<bool>() */) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_pretty_transaction", std::vector<fc::variant>{fc::variant(transaction_id_prefix), fc::variant(exact)}).wait();
            return result.as<gdwcore::wallet::PrettyTransaction>();
        }
        gdwcore::wallet::PrettyContractTransaction CommonApiRpcClient::blockchain_get_pretty_contract_transaction(const std::string& transaction_id_prefix, bool exact /* = fc::json::from_string("false").as<bool>() */) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_pretty_contract_transaction", std::vector<fc::variant>{fc::variant(transaction_id_prefix), fc::variant(exact)}).wait();
            return result.as<gdwcore::wallet::PrettyContractTransaction>();
        }
        fc::optional<gdwcore::consensus::BlockEntry> CommonApiRpcClient::blockchain_get_block(const std::string& block) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_block", std::vector<fc::variant>{fc::variant(block)}).wait();
            return result.as<fc::optional<gdwcore::consensus::BlockEntry>>();
        }
        std::map<gdwcore::consensus::TransactionIdType, gdwcore::consensus::TransactionEntry> CommonApiRpcClient::blockchain_get_block_transactions(const std::string& block) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_block_transactions", std::vector<fc::variant>{fc::variant(block)}).wait();
            return result.as<std::map<gdwcore::consensus::TransactionIdType, gdwcore::consensus::TransactionEntry>>();
        }
        fc::optional<gdwcore::consensus::AccountEntry> CommonApiRpcClient::blockchain_get_account(const std::string& account) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_account", std::vector<fc::variant>{fc::variant(account)}).wait();
            return result.as<fc::optional<gdwcore::consensus::AccountEntry>>();
        }
        std::map<gdwcore::consensus::AccountIdType, std::string> CommonApiRpcClient::blockchain_get_slate(const std::string& slate) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_slate", std::vector<fc::variant>{fc::variant(slate)}).wait();
            return result.as<std::map<gdwcore::consensus::AccountIdType, std::string>>();
        }
        gdwcore::consensus::BalanceEntry CommonApiRpcClient::blockchain_get_balance(const gdwcore::consensus::Address& balance_id) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_balance", std::vector<fc::variant>{fc::variant(balance_id)}).wait();
            return result.as<gdwcore::consensus::BalanceEntry>();
        }
        std::unordered_map<gdwcore::consensus::BalanceIdType, gdwcore::consensus::BalanceEntry> CommonApiRpcClient::blockchain_list_balances(const std::string& first_balance_id /* = fc::json::from_string("\"\"").as<std::string>() */, uint32_t limit /* = fc::json::from_string("20").as<uint32_t>() */) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_list_balances", std::vector<fc::variant>{fc::variant(first_balance_id), fc::variant(limit)}).wait();
            return result.as<std::unordered_map<gdwcore::consensus::BalanceIdType, gdwcore::consensus::BalanceEntry>>();
        }
        std::unordered_map<gdwcore::consensus::BalanceIdType, gdwcore::consensus::BalanceEntry> CommonApiRpcClient::blockchain_list_address_balances(const std::string& addr, const fc::time_point& chanced_since /* = fc::json::from_string("\"1970-1-1T00:00:01\"").as<fc::time_point>() */) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_list_address_balances", std::vector<fc::variant>{fc::variant(addr), fc::variant(chanced_since)}).wait();
            return result.as<std::unordered_map<gdwcore::consensus::BalanceIdType, gdwcore::consensus::BalanceEntry>>();
        }
        fc::variant_object CommonApiRpcClient::blockchain_list_address_transactions(const std::string& addr, uint32_t filter_before /* = fc::json::from_string("\"0\"").as<uint32_t>() */) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_list_address_transactions", std::vector<fc::variant>{fc::variant(addr), fc::variant(filter_before)}).wait();
            return result.as<fc::variant_object>();
        }
        gdwcore::wallet::AccountBalanceSummaryType CommonApiRpcClient::blockchain_get_account_public_balance(const std::string& account_name) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_account_public_balance", std::vector<fc::variant>{fc::variant(account_name)}).wait();
            return result.as<gdwcore::wallet::AccountBalanceSummaryType>();
        }
        std::unordered_map<gdwcore::consensus::BalanceIdType, gdwcore::consensus::BalanceEntry> CommonApiRpcClient::blockchain_list_key_balances(const gdwcore::consensus::PublicKeyType& key) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_list_key_balances", std::vector<fc::variant>{fc::variant(key)}).wait();
            return result.as<std::unordered_map<gdwcore::consensus::BalanceIdType, gdwcore::consensus::BalanceEntry>>();
        }
        fc::optional<gdwcore::consensus::AssetEntry> CommonApiRpcClient::blockchain_get_asset(const std::string& asset) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_asset", std::vector<fc::variant>{fc::variant(asset)}).wait();
            return result.as<fc::optional<gdwcore::consensus::AssetEntry>>();
        }
        std::vector<gdwcore::consensus::AccountEntry> CommonApiRpcClient::blockchain_list_active_delegates(uint32_t first /* = fc::json::from_string("0").as<uint32_t>() */, uint32_t count /* = fc::json::from_string("9").as<uint32_t>() */) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_list_active_delegates", std::vector<fc::variant>{fc::variant(first), fc::variant(count)}).wait();
            return result.as<std::vector<gdwcore::consensus::AccountEntry>>();
        }
        std::vector<gdwcore::consensus::AccountEntry> CommonApiRpcClient::blockchain_list_delegates(uint32_t first /* = fc::json::from_string("0").as<uint32_t>() */, uint32_t count /* = fc::json::from_string("9").as<uint32_t>() */) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_list_delegates", std::vector<fc::variant>{fc::variant(first), fc::variant(count)}).wait();
            return result.as<std::vector<gdwcore::consensus::AccountEntry>>();
        }
        std::vector<gdwcore::consensus::BlockEntry> CommonApiRpcClient::blockchain_list_blocks(uint32_t max_block_num /* = fc::json::from_string("-1").as<uint32_t>() */, uint32_t limit /* = fc::json::from_string("20").as<uint32_t>() */)
        {
            fc::variant result = get_json_connection()->async_call("blockchain_list_blocks", std::vector<fc::variant>{fc::variant(max_block_num), fc::variant(limit)}).wait();
            return result.as<std::vector<gdwcore::consensus::BlockEntry>>();
        }
        std::vector<std::string> CommonApiRpcClient::blockchain_list_missing_block_delegates(uint32_t block_number)
        {
            fc::variant result = get_json_connection()->async_call("blockchain_list_missing_block_delegates", std::vector<fc::variant>{fc::variant(block_number)}).wait();
            return result.as<std::vector<std::string>>();
        }
        std::string CommonApiRpcClient::blockchain_export_fork_graph(uint32_t start_block /* = fc::json::from_string("1").as<uint32_t>() */, uint32_t end_block /* = fc::json::from_string("-1").as<uint32_t>() */, const gdwcore::consensus::FilePath& filename /* = fc::json::from_string("\"\"").as<gdwcore::consensus::FilePath>() */) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_export_fork_graph", std::vector<fc::variant>{fc::variant(start_block), fc::variant(end_block), fc::variant(filename)}).wait();
            return result.as<std::string>();
        }
        std::map<uint32_t, std::vector<gdwcore::consensus::ForkEntry>> CommonApiRpcClient::blockchain_list_forks() const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_list_forks", std::vector<fc::variant>{}).wait();
            return result.as<std::map<uint32_t, std::vector<gdwcore::consensus::ForkEntry>>>();
        }
        std::vector<gdwcore::consensus::SlotEntry> CommonApiRpcClient::blockchain_get_delegate_slot_entrys(const std::string& delegate_name, uint32_t limit /* = fc::json::from_string("\"10\"").as<uint32_t>() */) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_delegate_slot_entrys", std::vector<fc::variant>{fc::variant(delegate_name), fc::variant(limit)}).wait();
            return result.as<std::vector<gdwcore::consensus::SlotEntry>>();
        }
        std::string CommonApiRpcClient::blockchain_get_block_signee(const std::string& block) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_block_signee", std::vector<fc::variant>{fc::variant(block)}).wait();
            return result.as<std::string>();
        }
        gdwcore::consensus::Asset CommonApiRpcClient::blockchain_unclaimed_genesis() const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_unclaimed_genesis", std::vector<fc::variant>{}).wait();
            return result.as<gdwcore::consensus::Asset>();
        }
        bool CommonApiRpcClient::blockchain_verify_signature(const std::string& signer, const fc::sha256& hash, const fc::ecc::compact_signature& signature) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_verify_signature", std::vector<fc::variant>{fc::variant(signer), fc::variant(hash), fc::variant(signature)}).wait();
            return result.as<bool>();
        }
        void CommonApiRpcClient::blockchain_dump_state(const std::string& path) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_dump_state", std::vector<fc::variant>{fc::variant(path)}).wait();
        }
        void CommonApiRpcClient::blockchain_broadcast_transaction(const gdwcore::consensus::SignedTransaction& trx)
        {
            fc::variant result = get_json_connection()->async_call("blockchain_broadcast_transaction", std::vector<fc::variant>{fc::variant(trx)}).wait();
        }
        void CommonApiRpcClient::blockchain_btc_address_convert(const std::string& path) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_btc_address_convert", std::vector<fc::variant>{fc::variant(path)}).wait();
        }
        std::string CommonApiRpcClient::blockchain_get_transaction_rpc(const std::string& transaction_id_prefix, bool exact /* = fc::json::from_string("false").as<bool>() */) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_transaction_rpc", std::vector<fc::variant>{fc::variant(transaction_id_prefix), fc::variant(exact)}).wait();
            return result.as<std::string>();
        }
        void CommonApiRpcClient::blockchain_set_node_vm_enabled(bool enabled)
        {
            fc::variant result = get_json_connection()->async_call("blockchain_set_node_vm_enabled", std::vector<fc::variant>{fc::variant(enabled)}).wait();
        }
        bool CommonApiRpcClient::blockchain_get_node_vm_enabled() const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_node_vm_enabled", std::vector<fc::variant>{}).wait();
            return result.as<bool>();
        }
        vector<string> CommonApiRpcClient::blockchain_get_all_contracts() const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_all_contracts", std::vector<fc::variant>{}).wait();
            return result.as<vector<string>>();
        }
        unordered_map<string, string> CommonApiRpcClient::blockchain_get_forever_contracts() const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_get_forever_contracts", std::vector<fc::variant>{}).wait();
            return result.as<unordered_map<string, string>>();
        }
		std::vector<std::string> CommonApiRpcClient::blockchain_list_pub_all_address(const std::string& pub_key) const
		{
			fc::variant result = get_json_connection()->async_call("blockchain_list_pub_all_address", std::vector<fc::variant>{fc::variant(pub_key)}).wait();
			return result.as<std::vector<std::string>>();
		}
        std::vector<gdwcore::wallet::ContractTransactionSummary> CommonApiRpcClient::blockchain_list_contract_transaction_history(uint32_t from_block_num, uint32_t block_count, const std::string& contract_id /* = fc::json::from_string("\"\"").as<std::string>() */, uint32_t trx_type /* = fc::json::from_string("\"99\"").as<uint32_t>() */, const std::string& call_method /* = fc::json::from_string("\"\"").as<std::string>() */) const
        {
            fc::variant result = get_json_connection()->async_call("blockchain_list_contract_transaction_history", std::vector<fc::variant>{fc::variant(from_block_num), fc::variant(block_count), fc::variant(contract_id), fc::variant(trx_type), fc::variant(call_method)}).wait();
            return result.as<std::vector<gdwcore::wallet::ContractTransactionSummary>>();
        }
        void CommonApiRpcClient::network_add_node(const std::string& node, const std::string& command /* = fc::json::from_string("\"add\"").as<std::string>() */)
        {
            fc::variant result = get_json_connection()->async_call("network_add_node", std::vector<fc::variant>{fc::variant(node), fc::variant(command)}).wait();
        }
        uint32_t CommonApiRpcClient::network_get_connection_count() const
        {
            fc::variant result = get_json_connection()->async_call("network_get_connection_count", std::vector<fc::variant>{}).wait();
            return result.as<uint32_t>();
        }
        std::vector<fc::variant_object> CommonApiRpcClient::network_get_peer_info(bool not_firewalled /* = fc::json::from_string("false").as<bool>() */) const
        {
            fc::variant result = get_json_connection()->async_call("network_get_peer_info", std::vector<fc::variant>{fc::variant(not_firewalled)}).wait();
            return result.as<std::vector<fc::variant_object>>();
        }
        gdwcore::consensus::TransactionIdType CommonApiRpcClient::network_broadcast_transaction(const gdwcore::consensus::SignedTransaction& transaction_to_broadcast)
        {
            fc::variant result = get_json_connection()->async_call("network_broadcast_transaction", std::vector<fc::variant>{fc::variant(transaction_to_broadcast)}).wait();
            return result.as<gdwcore::consensus::TransactionIdType>();
        }
        void CommonApiRpcClient::network_set_advanced_node_parameters(const fc::variant_object& params)
        {
            fc::variant result = get_json_connection()->async_call("network_set_advanced_node_parameters", std::vector<fc::variant>{fc::variant(params)}).wait();
        }
        fc::variant_object CommonApiRpcClient::network_get_advanced_node_parameters() const
        {
            fc::variant result = get_json_connection()->async_call("network_get_advanced_node_parameters", std::vector<fc::variant>{}).wait();
            return result.as<fc::variant_object>();
        }
        gdwcore::network::MessagePropagationData CommonApiRpcClient::network_get_transaction_propagation_data(const gdwcore::consensus::TransactionIdType& transaction_id)
        {
            fc::variant result = get_json_connection()->async_call("network_get_transaction_propagation_data", std::vector<fc::variant>{fc::variant(transaction_id)}).wait();
            return result.as<gdwcore::network::MessagePropagationData>();
        }
        gdwcore::network::MessagePropagationData CommonApiRpcClient::network_get_block_propagation_data(const gdwcore::consensus::BlockIdType& block_hash)
        {
            fc::variant result = get_json_connection()->async_call("network_get_block_propagation_data", std::vector<fc::variant>{fc::variant(block_hash)}).wait();
            return result.as<gdwcore::network::MessagePropagationData>();
        }
        fc::variant_object CommonApiRpcClient::network_get_info() const
        {
            fc::variant result = get_json_connection()->async_call("network_get_info", std::vector<fc::variant>{}).wait();
            return result.as<fc::variant_object>();
        }
        std::vector<gdwcore::network::PotentialPeerEntry> CommonApiRpcClient::network_list_potential_peers() const
        {
            fc::variant result = get_json_connection()->async_call("network_list_potential_peers", std::vector<fc::variant>{}).wait();
            return result.as<std::vector<gdwcore::network::PotentialPeerEntry>>();
        }
        fc::variant_object CommonApiRpcClient::network_get_upnp_info() const
        {
            fc::variant result = get_json_connection()->async_call("network_get_upnp_info", std::vector<fc::variant>{}).wait();
            return result.as<fc::variant_object>();
        }
        std::vector<std::string> CommonApiRpcClient::network_get_blocked_ips() const
        {
            fc::variant result = get_json_connection()->async_call("network_get_blocked_ips", std::vector<fc::variant>{}).wait();
            return result.as<std::vector<std::string>>();
        }
        std::string CommonApiRpcClient::debug_get_client_name() const
        {
            fc::variant result = get_json_connection()->async_call("debug_get_client_name", std::vector<fc::variant>{}).wait();
            return result.as<std::string>();
        }
        fc::variant CommonApiRpcClient::delegate_get_config() const
        {
            fc::variant result = get_json_connection()->async_call("delegate_get_config", std::vector<fc::variant>{}).wait();
            return result.as<fc::variant>();
        }
        void CommonApiRpcClient::delegate_set_network_min_connection_count(uint32_t count)
        {
            fc::variant result = get_json_connection()->async_call("delegate_set_network_min_connection_count", std::vector<fc::variant>{fc::variant(count)}).wait();
        }
        void CommonApiRpcClient::delegate_set_block_max_transaction_count(uint32_t count)
        {
            fc::variant result = get_json_connection()->async_call("delegate_set_block_max_transaction_count", std::vector<fc::variant>{fc::variant(count)}).wait();
        }
        void CommonApiRpcClient::delegate_set_soft_max_imessage_length(int64_t soft_length)
        {
            fc::variant result = get_json_connection()->async_call("delegate_set_soft_max_imessage_length", std::vector<fc::variant>{fc::variant(soft_length)}).wait();
        }
        void CommonApiRpcClient::delegate_set_imessage_fee_coe(const std::string& fee_coe)
        {
            fc::variant result = get_json_connection()->async_call("delegate_set_imessage_fee_coe", std::vector<fc::variant>{fc::variant(fee_coe)}).wait();
        }
        void CommonApiRpcClient::delegate_set_block_max_size(uint32_t size)
        {
            fc::variant result = get_json_connection()->async_call("delegate_set_block_max_size", std::vector<fc::variant>{fc::variant(size)}).wait();
        }
        void CommonApiRpcClient::delegate_set_transaction_max_size(uint32_t size)
        {
            fc::variant result = get_json_connection()->async_call("delegate_set_transaction_max_size", std::vector<fc::variant>{fc::variant(size)}).wait();
        }
        void CommonApiRpcClient::delegate_set_transaction_canonical_signatures_required(bool required)
        {
            fc::variant result = get_json_connection()->async_call("delegate_set_transaction_canonical_signatures_required", std::vector<fc::variant>{fc::variant(required)}).wait();
        }
        void CommonApiRpcClient::delegate_set_transaction_min_fee(const std::string& fee)
        {
            fc::variant result = get_json_connection()->async_call("delegate_set_transaction_min_fee", std::vector<fc::variant>{fc::variant(fee)}).wait();
        }
        void CommonApiRpcClient::delegate_blacklist_add_transaction(const gdwcore::consensus::TransactionIdType& id)
        {
            fc::variant result = get_json_connection()->async_call("delegate_blacklist_add_transaction", std::vector<fc::variant>{fc::variant(id)}).wait();
        }
        void CommonApiRpcClient::delegate_blacklist_remove_transaction(const gdwcore::consensus::TransactionIdType& id)
        {
            fc::variant result = get_json_connection()->async_call("delegate_blacklist_remove_transaction", std::vector<fc::variant>{fc::variant(id)}).wait();
        }
        void CommonApiRpcClient::delegate_blacklist_add_operation(const gdwcore::consensus::OperationTypeEnum& id)
        {
            fc::variant result = get_json_connection()->async_call("delegate_blacklist_add_operation", std::vector<fc::variant>{fc::variant(id)}).wait();
        }
        void CommonApiRpcClient::delegate_blacklist_remove_operation(const gdwcore::consensus::OperationTypeEnum& id)
        {
            fc::variant result = get_json_connection()->async_call("delegate_blacklist_remove_operation", std::vector<fc::variant>{fc::variant(id)}).wait();
        }

        
        fc::variant_object CommonApiRpcClient::wallet_get_info()
        {
            fc::variant result = get_json_connection()->async_call("wallet_get_info", std::vector<fc::variant>{}).wait();
            return result.as<fc::variant_object>();
        }
        void CommonApiRpcClient::wallet_open(const std::string& wallet_name)
        {
            fc::variant result = get_json_connection()->async_call("wallet_open", std::vector<fc::variant>{fc::variant(wallet_name)}).wait();
        }
        void CommonApiRpcClient::wallet_create(const std::string& wallet_name, const std::string& new_passphrase, const std::string& brain_key /* = fc::json::from_string("\"\"").as<std::string>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_create", std::vector<fc::variant>{fc::variant(wallet_name), fc::variant(new_passphrase), fc::variant(brain_key)}).wait();
        }
        fc::optional<std::string> CommonApiRpcClient::wallet_get_name() const
        {
            fc::variant result = get_json_connection()->async_call("wallet_get_name", std::vector<fc::variant>{}).wait();
            return result.as<fc::optional<std::string>>();
        }
        std::string CommonApiRpcClient::wallet_import_private_key(const std::string& wif_key, const std::string& account_name /* = fc::json::from_string("null").as<std::string>() */, bool create_new_account /* = fc::json::from_string("false").as<bool>() */, bool rescan /* = fc::json::from_string("false").as<bool>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_import_private_key", std::vector<fc::variant>{fc::variant(wif_key), fc::variant(account_name), fc::variant(create_new_account), fc::variant(rescan)}).wait();
            return result.as<std::string>();
        }
        void CommonApiRpcClient::wallet_close()
        {
            fc::variant result = get_json_connection()->async_call("wallet_close", std::vector<fc::variant>{}).wait();
        }
        void CommonApiRpcClient::wallet_backup_create(const fc::path& json_filename) const
        {
            fc::variant result = get_json_connection()->async_call("wallet_backup_create", std::vector<fc::variant>{fc::variant(json_filename)}).wait();
        }
        void CommonApiRpcClient::wallet_backup_restore(const fc::path& json_filename, const std::string& wallet_name, const std::string& imported_wallet_passphrase)
        {
            fc::variant result = get_json_connection()->async_call("wallet_backup_restore", std::vector<fc::variant>{fc::variant(json_filename), fc::variant(wallet_name), fc::variant(imported_wallet_passphrase)}).wait();
        }
        bool CommonApiRpcClient::wallet_set_automatic_backups(bool enabled)
        {
            fc::variant result = get_json_connection()->async_call("wallet_set_automatic_backups", std::vector<fc::variant>{fc::variant(enabled)}).wait();
            return result.as<bool>();
        }
        uint32_t CommonApiRpcClient::wallet_set_transaction_expiration_time(uint32_t seconds)
        {
            fc::variant result = get_json_connection()->async_call("wallet_set_transaction_expiration_time", std::vector<fc::variant>{fc::variant(seconds)}).wait();
            return result.as<uint32_t>();
        }
        std::vector<gdwcore::wallet::PrettyTransaction> CommonApiRpcClient::wallet_account_transaction_history(const std::string& account_name /* = fc::json::from_string("\"\"").as<std::string>() */, const std::string& asset_symbol /* = fc::json::from_string("\"\"").as<std::string>() */, int32_t limit /* = fc::json::from_string("0").as<int32_t>() */, uint32_t start_block_num /* = fc::json::from_string("0").as<uint32_t>() */, uint32_t end_block_num /* = fc::json::from_string("-1").as<uint32_t>() */) const
        {
            fc::variant result = get_json_connection()->async_call("wallet_account_transaction_history", std::vector<fc::variant>{fc::variant(account_name), fc::variant(asset_symbol), fc::variant(limit), fc::variant(start_block_num), fc::variant(end_block_num)}).wait();
            return result.as<std::vector<gdwcore::wallet::PrettyTransaction>>();
        }
        std::vector<gdwcore::wallet::PrettyTransaction> CommonApiRpcClient::wallet_transaction_history_splite(const std::string& account_name /* = fc::json::from_string("\"\"").as<std::string>() */, const std::string& asset_symbol /* = fc::json::from_string("\"\"").as<std::string>() */, int32_t limit /* = fc::json::from_string("0").as<int32_t>() */, int32_t transaction_type /* = fc::json::from_string("\"2\"").as<int32_t>() */) const
        {
            fc::variant result = get_json_connection()->async_call("wallet_transaction_history_splite", std::vector<fc::variant>{fc::variant(account_name), fc::variant(asset_symbol), fc::variant(limit), fc::variant(transaction_type)}).wait();
            return result.as<std::vector<gdwcore::wallet::PrettyTransaction>>();
        }
        gdwcore::wallet::AccountBalanceSummaryType CommonApiRpcClient::wallet_account_historic_balance(const fc::time_point& time, const std::string& account_name /* = fc::json::from_string("\"\"").as<std::string>() */) const
        {
            fc::variant result = get_json_connection()->async_call("wallet_account_historic_balance", std::vector<fc::variant>{fc::variant(time), fc::variant(account_name)}).wait();
            return result.as<gdwcore::wallet::AccountBalanceSummaryType>();
        }
        void CommonApiRpcClient::wallet_remove_transaction(const std::string& transaction_id)
        {
            fc::variant result = get_json_connection()->async_call("wallet_remove_transaction", std::vector<fc::variant>{fc::variant(transaction_id)}).wait();
        }
        std::map<gdwcore::consensus::TransactionIdType, fc::exception> CommonApiRpcClient::wallet_get_pending_transaction_errors(const gdwcore::consensus::FilePath& filename /* = fc::json::from_string("\"\"").as<gdwcore::consensus::FilePath>() */) const
        {
            fc::variant result = get_json_connection()->async_call("wallet_get_pending_transaction_errors", std::vector<fc::variant>{fc::variant(filename)}).wait();
            return result.as<std::map<gdwcore::consensus::TransactionIdType, fc::exception>>();
        }
        void CommonApiRpcClient::wallet_lock()
        {
            fc::variant result = get_json_connection()->async_call("wallet_lock", std::vector<fc::variant>{}).wait();
        }
        void CommonApiRpcClient::wallet_unlock(uint32_t timeout, const std::string& passphrase)
        {
            fc::variant result = get_json_connection()->async_call("wallet_unlock", std::vector<fc::variant>{fc::variant(timeout), fc::variant(passphrase)}).wait();
        }
        void CommonApiRpcClient::wallet_change_passphrase(const std::string& old_passphrase, const std::string& passphrase)
        {
            fc::variant result = get_json_connection()->async_call("wallet_change_passphrase", std::vector<fc::variant>{fc::variant(old_passphrase), fc::variant(passphrase)}).wait();
        }
        bool CommonApiRpcClient::wallet_check_passphrase(const std::string& passphrase)
        {
            fc::variant result = get_json_connection()->async_call("wallet_check_passphrase", std::vector<fc::variant>{fc::variant(passphrase)}).wait();
            return result.as<bool>();
        }
        bool CommonApiRpcClient::wallet_check_address(const std::string& address)
        {
            fc::variant result = get_json_connection()->async_call("wallet_check_address", std::vector<fc::variant>{fc::variant(address)}).wait();
            return result.as<bool>();
        }
        std::vector<std::string> CommonApiRpcClient::wallet_list() const
        {
            fc::variant result = get_json_connection()->async_call("wallet_list", std::vector<fc::variant>{}).wait();
            return result.as<std::vector<std::string>>();
        }
        gdwcore::consensus::Address CommonApiRpcClient::wallet_account_create(const std::string& account_name, const fc::variant& private_data /* = fc::json::from_string("null").as<fc::variant>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_account_create", std::vector<fc::variant>{fc::variant(account_name), fc::variant(private_data)}).wait();
            return result.as<gdwcore::consensus::Address>();
        }
        int8_t CommonApiRpcClient::wallet_account_set_approval(const std::string& account_name, int8_t approval /* = fc::json::from_string("1").as<int8_t>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_account_set_approval", std::vector<fc::variant>{fc::variant(account_name), fc::variant(approval)}).wait();
            return result.as<int8_t>();
        }
        std::vector<gdwcore::consensus::AccountEntry> CommonApiRpcClient::wallet_get_all_approved_accounts(int8_t approval /* = fc::json::from_string("1").as<int8_t>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_get_all_approved_accounts", std::vector<fc::variant>{fc::variant(approval)}).wait();
            return result.as<std::vector<gdwcore::consensus::AccountEntry>>();
        }
        std::string CommonApiRpcClient::wallet_address_create(const std::string& account_name, const std::string& label /* = fc::json::from_string("\"\"").as<std::string>() */, int32_t legacy_network_byte /* = fc::json::from_string("-1").as<int32_t>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_address_create", std::vector<fc::variant>{fc::variant(account_name), fc::variant(label), fc::variant(legacy_network_byte)}).wait();
            return result.as<std::string>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_transfer_to_address(const std::string& amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_name, const std::string& to_address, const gdwcore::consensus::Imessage& memo_message /* = fc::json::from_string("\"\"").as<gdwcore::consensus::Imessage>() */, const gdwcore::wallet::VoteStrategy& strategy /* = fc::json::from_string("\"vote_recommended\"").as<gdwcore::wallet::VoteStrategy>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_transfer_to_address", std::vector<fc::variant>{fc::variant(amount_to_transfer), fc::variant(asset_symbol), fc::variant(from_account_name), fc::variant(to_address), fc::variant(memo_message), fc::variant(strategy)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_transfer_to_public_account(const std::string& amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_name, const std::string& to_account_name, const gdwcore::consensus::Imessage& memo_message /* = fc::json::from_string("\"\"").as<gdwcore::consensus::Imessage>() */, const gdwcore::wallet::VoteStrategy& strategy /* = fc::json::from_string("\"vote_recommended\"").as<gdwcore::wallet::VoteStrategy>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_transfer_to_public_account", std::vector<fc::variant>{fc::variant(amount_to_transfer), fc::variant(asset_symbol), fc::variant(from_account_name), fc::variant(to_account_name), fc::variant(memo_message), fc::variant(strategy)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        gdwcore::wallet::TransactionBuilder CommonApiRpcClient::wallet_withdraw_from_address(const std::string& amount, const std::string& symbol, const gdwcore::consensus::Address& from_address, const std::string& to, const gdwcore::wallet::VoteStrategy& strategy /* = fc::json::from_string("\"vote_none\"").as<gdwcore::wallet::VoteStrategy>() */, bool sign_and_broadcast /* = fc::json::from_string("true").as<bool>() */, const std::string& builder_path /* = fc::json::from_string("\"\"").as<std::string>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_withdraw_from_address", std::vector<fc::variant>{fc::variant(amount), fc::variant(symbol), fc::variant(from_address), fc::variant(to), fc::variant(strategy), fc::variant(sign_and_broadcast), fc::variant(builder_path)}).wait();
            return result.as<gdwcore::wallet::TransactionBuilder>();
        }
        void CommonApiRpcClient::wallet_rescan_blockchain(uint32_t start_block_num /* = fc::json::from_string("0").as<uint32_t>() */, uint32_t limit /* = fc::json::from_string("-1").as<uint32_t>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_rescan_blockchain", std::vector<fc::variant>{fc::variant(start_block_num), fc::variant(limit)}).wait();
        }
        void CommonApiRpcClient::wallet_cancel_scan()
        {
            fc::variant result = get_json_connection()->async_call("wallet_cancel_scan", std::vector<fc::variant>{}).wait();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_get_transaction(const std::string& transaction_id)
        {
            fc::variant result = get_json_connection()->async_call("wallet_get_transaction", std::vector<fc::variant>{fc::variant(transaction_id)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_scan_transaction(const std::string& transaction_id, bool overwrite_existing /* = fc::json::from_string("false").as<bool>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_scan_transaction", std::vector<fc::variant>{fc::variant(transaction_id), fc::variant(overwrite_existing)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        void CommonApiRpcClient::wallet_rebroadcast_transaction(const std::string& transaction_id)
        {
            fc::variant result = get_json_connection()->async_call("wallet_rebroadcast_transaction", std::vector<fc::variant>{fc::variant(transaction_id)}).wait();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_account_register(const std::string& account_name, const std::string& pay_from_account, const fc::variant& public_data /* = fc::json::from_string("null").as<fc::variant>() */, uint8_t delegate_pay_rate /* = fc::json::from_string("-1").as<uint8_t>() */, const std::string& account_type /* = fc::json::from_string("\"titan_account\"").as<std::string>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_account_register", std::vector<fc::variant>{fc::variant(account_name), fc::variant(pay_from_account), fc::variant(public_data), fc::variant(delegate_pay_rate), fc::variant(account_type)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        void CommonApiRpcClient::wallet_account_update_private_data(const std::string& account_name, const fc::variant& private_data /* = fc::json::from_string("null").as<fc::variant>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_account_update_private_data", std::vector<fc::variant>{fc::variant(account_name), fc::variant(private_data)}).wait();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_account_update_registration(const std::string& account_name, const std::string& pay_from_account, const fc::variant& public_data /* = fc::json::from_string("null").as<fc::variant>() */, uint8_t delegate_pay_rate /* = fc::json::from_string("-1").as<uint8_t>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_account_update_registration", std::vector<fc::variant>{fc::variant(account_name), fc::variant(pay_from_account), fc::variant(public_data), fc::variant(delegate_pay_rate)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_account_update_active_key(const std::string& account_to_update, const std::string& pay_from_account, const std::string& new_active_key /* = fc::json::from_string("\"\"").as<std::string>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_account_update_active_key", std::vector<fc::variant>{fc::variant(account_to_update), fc::variant(pay_from_account), fc::variant(new_active_key)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        std::vector<gdwcore::wallet::WalletAccountEntry> CommonApiRpcClient::wallet_list_accounts() const
        {
            fc::variant result = get_json_connection()->async_call("wallet_list_accounts", std::vector<fc::variant>{}).wait();
            return result.as<std::vector<gdwcore::wallet::WalletAccountEntry>>();
        }
        std::vector<gdwcore::wallet::WalletAccountEntry> CommonApiRpcClient::wallet_list_unregistered_accounts() const
        {
            fc::variant result = get_json_connection()->async_call("wallet_list_unregistered_accounts", std::vector<fc::variant>{}).wait();
            return result.as<std::vector<gdwcore::wallet::WalletAccountEntry>>();
        }
        std::vector<gdwcore::wallet::WalletAccountEntry> CommonApiRpcClient::wallet_list_my_accounts() const
        {
            fc::variant result = get_json_connection()->async_call("wallet_list_my_accounts", std::vector<fc::variant>{}).wait();
            return result.as<std::vector<gdwcore::wallet::WalletAccountEntry>>();
        }
        std::vector<gdwcore::wallet::AccountAddressData> CommonApiRpcClient::wallet_list_my_addresses() const
        {
            fc::variant result = get_json_connection()->async_call("wallet_list_my_addresses", std::vector<fc::variant>{}).wait();
            return result.as<std::vector<gdwcore::wallet::AccountAddressData>>();
        }
        gdwcore::wallet::WalletAccountEntry CommonApiRpcClient::wallet_get_account(const std::string& account_name) const
        {
            fc::variant result = get_json_connection()->async_call("wallet_get_account", std::vector<fc::variant>{fc::variant(account_name)}).wait();
            return result.as<gdwcore::wallet::WalletAccountEntry>();
        }
        std::string CommonApiRpcClient::wallet_get_account_public_address(const std::string& account_name) const
        {
            fc::variant result = get_json_connection()->async_call("wallet_get_account_public_address", std::vector<fc::variant>{fc::variant(account_name)}).wait();
            return result.as<std::string>();
        }
        void CommonApiRpcClient::wallet_remove_contact_account(const std::string& account_name)
        {
            fc::variant result = get_json_connection()->async_call("wallet_remove_contact_account", std::vector<fc::variant>{fc::variant(account_name)}).wait();
        }
        void CommonApiRpcClient::wallet_account_rename(const std::string& current_account_name, const std::string& new_account_name)
        {
            fc::variant result = get_json_connection()->async_call("wallet_account_rename", std::vector<fc::variant>{fc::variant(current_account_name), fc::variant(new_account_name)}).wait();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_asset_create(const std::string& symbol, const std::string& asset_name, const std::string& issuer_name, const std::string& description, const std::string& maximum_share_supply, uint64_t precision, const fc::variant& public_data /* = fc::json::from_string("null").as<fc::variant>() */, bool is_market_issued /* = fc::json::from_string("false").as<bool>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_asset_create", std::vector<fc::variant>{fc::variant(symbol), fc::variant(asset_name), fc::variant(issuer_name), fc::variant(description), fc::variant(maximum_share_supply), fc::variant(precision), fc::variant(public_data), fc::variant(is_market_issued)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_asset_issue(const std::string& amount, const std::string& symbol, const std::string& to_account_name, const gdwcore::consensus::Imessage& memo_message /* = fc::json::from_string("\"\"").as<gdwcore::consensus::Imessage>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_asset_issue", std::vector<fc::variant>{fc::variant(amount), fc::variant(symbol), fc::variant(to_account_name), fc::variant(memo_message)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_asset_issue_to_addresses(const std::string& symbol, const std::map<std::string, gdwcore::consensus::ShareType>& addresses)
        {
            fc::variant result = get_json_connection()->async_call("wallet_asset_issue_to_addresses", std::vector<fc::variant>{fc::variant(symbol), fc::variant(addresses)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        gdwcore::wallet::AccountBalanceSummaryType CommonApiRpcClient::wallet_account_balance(const std::string& account_name /* = fc::json::from_string("\"\"").as<std::string>() */) const
        {
            fc::variant result = get_json_connection()->async_call("wallet_account_balance", std::vector<fc::variant>{fc::variant(account_name)}).wait();
            return result.as<gdwcore::wallet::AccountBalanceSummaryType>();
        }
        gdwcore::wallet::AccountBalanceIdSummaryType CommonApiRpcClient::wallet_account_balance_ids(const std::string& account_name /* = fc::json::from_string("\"\"").as<std::string>() */) const
        {
            fc::variant result = get_json_connection()->async_call("wallet_account_balance_ids", std::vector<fc::variant>{fc::variant(account_name)}).wait();
            return result.as<gdwcore::wallet::AccountBalanceIdSummaryType>();
        }
        std::vector<gdwcore::wallet::PublicKeySummary> CommonApiRpcClient::wallet_account_list_public_keys(const std::string& account_name)
        {
            fc::variant result = get_json_connection()->async_call("wallet_account_list_public_keys", std::vector<fc::variant>{fc::variant(account_name)}).wait();
            return result.as<std::vector<gdwcore::wallet::PublicKeySummary>>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_delegate_withdraw_pay(const std::string& delegate_name, const std::string& to_account_name, const std::string& amount_to_withdraw)
        {
            fc::variant result = get_json_connection()->async_call("wallet_delegate_withdraw_pay", std::vector<fc::variant>{fc::variant(delegate_name), fc::variant(to_account_name), fc::variant(amount_to_withdraw)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        gdwcore::consensus::DelegatePaySalary CommonApiRpcClient::wallet_delegate_pay_balance_query(const std::string& delegate_name)
        {
            fc::variant result = get_json_connection()->async_call("wallet_delegate_pay_balance_query", std::vector<fc::variant>{fc::variant(delegate_name)}).wait();
            return result.as<gdwcore::consensus::DelegatePaySalary>();
        }
        std::map<std::string,gdwcore::consensus::DelegatePaySalary> CommonApiRpcClient::wallet_active_delegate_salary()
        {
            fc::variant result = get_json_connection()->async_call("wallet_active_delegate_salary", std::vector<fc::variant>{}).wait();
            return result.as<std::map<std::string,gdwcore::consensus::DelegatePaySalary>>();
        }
        bool CommonApiRpcClient::wallet_get_delegate_statue(const std::string& account_name)
        {
            fc::variant result = get_json_connection()->async_call("wallet_get_delegate_statue", std::vector<fc::variant>{fc::variant(account_name)}).wait();
            return result.as<bool>();
        }
        void CommonApiRpcClient::wallet_set_transaction_imessage_fee_coe(const std::string& fee_coe)
        {
            fc::variant result = get_json_connection()->async_call("wallet_set_transaction_imessage_fee_coe", std::vector<fc::variant>{fc::variant(fee_coe)}).wait();
        }
        double CommonApiRpcClient::wallet_get_transaction_imessage_fee_coe()
        {
            fc::variant result = get_json_connection()->async_call("wallet_get_transaction_imessage_fee_coe", std::vector<fc::variant>{}).wait();
            return result.as<double>();
        }
        void CommonApiRpcClient::wallet_set_transaction_imessage_soft_max_length(int64_t soft_length)
        {
            fc::variant result = get_json_connection()->async_call("wallet_set_transaction_imessage_soft_max_length", std::vector<fc::variant>{fc::variant(soft_length)}).wait();
        }
        int64_t CommonApiRpcClient::wallet_get_transaction_imessage_soft_max_length()
        {
            fc::variant result = get_json_connection()->async_call("wallet_get_transaction_imessage_soft_max_length", std::vector<fc::variant>{}).wait();
            return result.as<int64_t>();
        }
        gdwcore::consensus::Asset CommonApiRpcClient::wallet_set_transaction_fee(const std::string& fee)
        {
            fc::variant result = get_json_connection()->async_call("wallet_set_transaction_fee", std::vector<fc::variant>{fc::variant(fee)}).wait();
            return result.as<gdwcore::consensus::Asset>();
        }
        gdwcore::consensus::Asset CommonApiRpcClient::wallet_get_transaction_fee(const std::string& symbol /* = fc::json::from_string("\"\"").as<std::string>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_get_transaction_fee", std::vector<fc::variant>{fc::variant(symbol)}).wait();
            return result.as<gdwcore::consensus::Asset>();
        }
        fc::optional<std::string> CommonApiRpcClient::wallet_dump_private_key(const std::string& input) const
        {
            fc::variant result = get_json_connection()->async_call("wallet_dump_private_key", std::vector<fc::variant>{fc::variant(input)}).wait();
            return result.as<fc::optional<std::string>>();
        }
        fc::optional<std::string> CommonApiRpcClient::wallet_dump_account_private_key(const std::string& account_name, const gdwcore::wallet::AccountKeyType& key_type) const
        {
            fc::variant result = get_json_connection()->async_call("wallet_dump_account_private_key", std::vector<fc::variant>{fc::variant(account_name), fc::variant(key_type)}).wait();
            return result.as<fc::optional<std::string>>();
        }
        gdwcore::wallet::AccountVoteSummaryType CommonApiRpcClient::wallet_account_vote_summary(const std::string& account_name /* = fc::json::from_string("\"\"").as<std::string>() */) const
        {
            fc::variant result = get_json_connection()->async_call("wallet_account_vote_summary", std::vector<fc::variant>{fc::variant(account_name)}).wait();
            return result.as<gdwcore::wallet::AccountVoteSummaryType>();
        }
        gdwcore::wallet::VoteSummary CommonApiRpcClient::wallet_check_vote_status(const std::string& account)
        {
            fc::variant result = get_json_connection()->async_call("wallet_check_vote_status", std::vector<fc::variant>{fc::variant(account)}).wait();
            return result.as<gdwcore::wallet::VoteSummary>();
        }
        void CommonApiRpcClient::wallet_set_setting(const std::string& name, const fc::variant& value)
        {
            fc::variant result = get_json_connection()->async_call("wallet_set_setting", std::vector<fc::variant>{fc::variant(name), fc::variant(value)}).wait();
        }
        fc::optional<fc::variant> CommonApiRpcClient::wallet_get_setting(const std::string& name)
        {
            fc::variant result = get_json_connection()->async_call("wallet_get_setting", std::vector<fc::variant>{fc::variant(name)}).wait();
            return result.as<fc::optional<fc::variant>>();
        }
        void CommonApiRpcClient::wallet_delegate_set_block_production(const std::string& delegate_name, bool enabled)
        {
            fc::variant result = get_json_connection()->async_call("wallet_delegate_set_block_production", std::vector<fc::variant>{fc::variant(delegate_name), fc::variant(enabled)}).wait();
        }
        bool CommonApiRpcClient::wallet_set_transaction_scanning(bool enabled)
        {
            fc::variant result = get_json_connection()->async_call("wallet_set_transaction_scanning", std::vector<fc::variant>{fc::variant(enabled)}).wait();
            return result.as<bool>();
        }
        fc::ecc::compact_signature CommonApiRpcClient::wallet_sign_hash(const std::string& signer, const fc::sha256& hash)
        {
            fc::variant result = get_json_connection()->async_call("wallet_sign_hash", std::vector<fc::variant>{fc::variant(signer), fc::variant(hash)}).wait();
            return result.as<fc::ecc::compact_signature>();
        }
        std::string CommonApiRpcClient::wallet_login_start(const std::string& server_account)
        {
            fc::variant result = get_json_connection()->async_call("wallet_login_start", std::vector<fc::variant>{fc::variant(server_account)}).wait();
            return result.as<std::string>();
        }
        fc::variant CommonApiRpcClient::wallet_login_finish(const gdwcore::consensus::PublicKeyType& server_key, const gdwcore::consensus::PublicKeyType& client_key, const fc::ecc::compact_signature& client_signature)
        {
            fc::variant result = get_json_connection()->async_call("wallet_login_finish", std::vector<fc::variant>{fc::variant(server_key), fc::variant(client_key), fc::variant(client_signature)}).wait();
            return result.as<fc::variant>();
        }
        gdwcore::wallet::TransactionBuilder CommonApiRpcClient::wallet_balance_set_vote_info(const gdwcore::consensus::Address& balance_id, const std::string& voter_address /* = fc::json::from_string("\"\"").as<std::string>() */, const gdwcore::wallet::VoteStrategy& strategy /* = fc::json::from_string("\"vote_all\"").as<gdwcore::wallet::VoteStrategy>() */, bool sign_and_broadcast /* = fc::json::from_string("\"true\"").as<bool>() */, const std::string& builder_path /* = fc::json::from_string("\"\"").as<std::string>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_balance_set_vote_info", std::vector<fc::variant>{fc::variant(balance_id), fc::variant(voter_address), fc::variant(strategy), fc::variant(sign_and_broadcast), fc::variant(builder_path)}).wait();
            return result.as<gdwcore::wallet::TransactionBuilder>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_publish_slate(const std::string& publishing_account_name, const std::string& paying_account_name /* = fc::json::from_string("\"\"").as<std::string>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_publish_slate", std::vector<fc::variant>{fc::variant(publishing_account_name), fc::variant(paying_account_name)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_publish_version(const std::string& publishing_account_name, const std::string& paying_account_name /* = fc::json::from_string("\"\"").as<std::string>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_publish_version", std::vector<fc::variant>{fc::variant(publishing_account_name), fc::variant(paying_account_name)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_collect_genesis_balances(const std::string& account_name)
        {
            fc::variant result = get_json_connection()->async_call("wallet_collect_genesis_balances", std::vector<fc::variant>{fc::variant(account_name)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        int32_t CommonApiRpcClient::wallet_recover_accounts(int32_t accounts_to_recover, int32_t maximum_number_of_attempts /* = fc::json::from_string("1000").as<int32_t>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_recover_accounts", std::vector<fc::variant>{fc::variant(accounts_to_recover), fc::variant(maximum_number_of_attempts)}).wait();
            return result.as<int32_t>();
        }
        fc::optional<fc::variant_object> CommonApiRpcClient::wallet_verify_titan_deposit(const std::string& transaction_id_prefix)
        {
            fc::variant result = get_json_connection()->async_call("wallet_verify_titan_deposit", std::vector<fc::variant>{fc::variant(transaction_id_prefix)}).wait();
            return result.as<fc::optional<fc::variant_object>>();
        }
        void CommonApiRpcClient::wallet_repair_entrys(const std::string& collecting_account_name /* = fc::json::from_string("\"\"").as<std::string>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_repair_entrys", std::vector<fc::variant>{fc::variant(collecting_account_name)}).wait();
        }
        int32_t CommonApiRpcClient::wallet_regenerate_keys(const std::string& account_name, uint32_t max_key_number)
        {
            fc::variant result = get_json_connection()->async_call("wallet_regenerate_keys", std::vector<fc::variant>{fc::variant(account_name), fc::variant(max_key_number)}).wait();
            return result.as<int32_t>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_account_retract(const std::string& account_to_retract, const std::string& pay_from_account)
        {
            fc::variant result = get_json_connection()->async_call("wallet_account_retract", std::vector<fc::variant>{fc::variant(account_to_retract), fc::variant(pay_from_account)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        bool CommonApiRpcClient::wallet_account_delete(const std::string& account_name)
        {
            fc::variant result = get_json_connection()->async_call("wallet_account_delete", std::vector<fc::variant>{fc::variant(account_name)}).wait();
            return result.as<bool>();
        }
        std::string CommonApiRpcClient::wallet_transfer_to_address_rpc(const std::string& amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_name, const std::string& to_address, const gdwcore::consensus::Imessage& memo_message /* = fc::json::from_string("\"\"").as<gdwcore::consensus::Imessage>() */, const gdwcore::wallet::VoteStrategy& strategy /* = fc::json::from_string("\"vote_recommended\"").as<gdwcore::wallet::VoteStrategy>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_transfer_to_address_rpc", std::vector<fc::variant>{fc::variant(amount_to_transfer), fc::variant(asset_symbol), fc::variant(from_account_name), fc::variant(to_address), fc::variant(memo_message), fc::variant(strategy)}).wait();
            return result.as<std::string>();
        }
        std::string CommonApiRpcClient::wallet_account_balance_rpc(const std::string& account_name /* = fc::json::from_string("\"\"").as<std::string>() */) const
        {
            fc::variant result = get_json_connection()->async_call("wallet_account_balance_rpc", std::vector<fc::variant>{fc::variant(account_name)}).wait();
            return result.as<std::string>();
        }
        std::string CommonApiRpcClient::wallet_transfer_to_public_account_rpc(const std::string& amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_name, const std::string& to_account_name, const gdwcore::consensus::Imessage& memo_message /* = fc::json::from_string("\"\"").as<gdwcore::consensus::Imessage>() */, const gdwcore::wallet::VoteStrategy& strategy /* = fc::json::from_string("\"vote_recommended\"").as<gdwcore::wallet::VoteStrategy>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_transfer_to_public_account_rpc", std::vector<fc::variant>{fc::variant(amount_to_transfer), fc::variant(asset_symbol), fc::variant(from_account_name), fc::variant(to_account_name), fc::variant(memo_message), fc::variant(strategy)}).wait();
            return result.as<std::string>();
        }
        gdwcore::consensus::PublicKeyType CommonApiRpcClient::wallet_get_account_owner_publickey(const std::string& account_name)
        {
            fc::variant result = get_json_connection()->async_call("wallet_get_account_owner_publickey", std::vector<fc::variant>{fc::variant(account_name)}).wait();
            return result.as<gdwcore::consensus::PublicKeyType>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_transfer_to_contract(const std::string& amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_name, const std::string& to_contract, double amount_for_exec)
        {
            fc::variant result = get_json_connection()->async_call("wallet_transfer_to_contract", std::vector<fc::variant>{fc::variant(amount_to_transfer), fc::variant(asset_symbol), fc::variant(from_account_name), fc::variant(to_contract), fc::variant(amount_for_exec)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        std::vector<gdwcore::consensus::Asset> CommonApiRpcClient::wallet_transfer_to_contract_testing(const std::string& amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_name, const std::string& to_contract)
        {
            fc::variant result = get_json_connection()->async_call("wallet_transfer_to_contract_testing", std::vector<fc::variant>{fc::variant(amount_to_transfer), fc::variant(asset_symbol), fc::variant(from_account_name), fc::variant(to_contract)}).wait();
            return result.as<std::vector<gdwcore::consensus::Asset>>();
        }
        vector<string> CommonApiRpcClient::wallet_get_contracts(const std::string& account_name /* = fc::json::from_string("\"\"").as<std::string>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_get_contracts", std::vector<fc::variant>{fc::variant(account_name)}).wait();
            return result.as<vector<string>>();
        }
        void CommonApiRpcClient::wallet_scan_contracts()
        {
            fc::variant result = get_json_connection()->async_call("wallet_scan_contracts", std::vector<fc::variant>{}).wait();
        }
        gdwcore::wallet::TransactionBuilder CommonApiRpcClient::wallet_builder_add_signature(const gdwcore::wallet::TransactionBuilder& builder, bool broadcast /* = fc::json::from_string("false").as<bool>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_builder_add_signature", std::vector<fc::variant>{fc::variant(builder), fc::variant(broadcast)}).wait();
            return result.as<gdwcore::wallet::TransactionBuilder>();
        }
        gdwcore::wallet::TransactionBuilder CommonApiRpcClient::wallet_builder_file_add_signature(const gdwcore::consensus::FilePath& builder_path, bool broadcast /* = fc::json::from_string("false").as<bool>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_builder_file_add_signature", std::vector<fc::variant>{fc::variant(builder_path), fc::variant(broadcast)}).wait();
            return result.as<gdwcore::wallet::TransactionBuilder>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_multisig_deposit(const std::string& amount, const std::string& asset_symbol, const std::string& from_account, const std::string& to_account, const gdwcore::consensus::Imessage& memo_message /* = fc::json::from_string("\"\"").as<gdwcore::consensus::Imessage>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_multisig_deposit", std::vector<fc::variant>{fc::variant(amount), fc::variant(asset_symbol), fc::variant(from_account), fc::variant(to_account), fc::variant(memo_message)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        fc::variant_object CommonApiRpcClient::wallet_import_multisig_account(const gdwcore::consensus::Address& multisig_address)
        {
            fc::variant result = get_json_connection()->async_call("wallet_import_multisig_account", std::vector<fc::variant>{fc::variant(multisig_address)}).wait();
            return result.as<fc::variant_object>();
        }
        gdwcore::consensus::Address CommonApiRpcClient::wallet_import_multisig_account_by_detail(const std::string& asset_symbol, uint32_t m, const std::vector<gdwcore::consensus::Address>& addresses)
        {
            fc::variant result = get_json_connection()->async_call("wallet_import_multisig_account_by_detail", std::vector<fc::variant>{fc::variant(asset_symbol), fc::variant(m), fc::variant(addresses)}).wait();
            return result.as<gdwcore::consensus::Address>();
        }
        gdwcore::wallet::TransactionBuilder CommonApiRpcClient::wallet_multisig_withdraw_start(const std::string& amount, const std::string& asset_symbol, const gdwcore::consensus::Address& from, const gdwcore::consensus::Address& to_address, const gdwcore::consensus::Imessage& memo_message /* = fc::json::from_string("\"\"").as<gdwcore::consensus::Imessage>() */, const gdwcore::consensus::FilePath& builder_path /* = fc::json::from_string("\"\"").as<gdwcore::consensus::FilePath>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_multisig_withdraw_start", std::vector<fc::variant>{fc::variant(amount), fc::variant(asset_symbol), fc::variant(from), fc::variant(to_address), fc::variant(memo_message), fc::variant(builder_path)}).wait();
            return result.as<gdwcore::wallet::TransactionBuilder>();
        }
        std::pair<std::string, gdwcore::wallet::WalletTransactionEntry> CommonApiRpcClient::wallet_create_multisig_account(const std::string& amount, const std::string& asset_symbol, const std::string& from_account, uint32_t m, const std::vector<gdwcore::consensus::Address>& addresses, const gdwcore::consensus::Imessage& memo_message /* = fc::json::from_string("\"\"").as<gdwcore::consensus::Imessage>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_create_multisig_account", std::vector<fc::variant>{fc::variant(amount), fc::variant(asset_symbol), fc::variant(from_account), fc::variant(m), fc::variant(addresses), fc::variant(memo_message)}).wait();
            return result.as<std::pair<std::string, gdwcore::wallet::WalletTransactionEntry>>();
        }
        std::vector<gdwcore::wallet::PrettyTransaction> CommonApiRpcClient::wallet_multisig_account_history(const std::string& account_address, const std::string& asset_symbol /* = fc::json::from_string("\"\"").as<std::string>() */, int32_t limit /* = fc::json::from_string("0").as<int32_t>() */, uint32_t start_block_num /* = fc::json::from_string("0").as<uint32_t>() */, uint32_t end_block_num /* = fc::json::from_string("-1").as<uint32_t>() */) const
        {
            fc::variant result = get_json_connection()->async_call("wallet_multisig_account_history", std::vector<fc::variant>{fc::variant(account_address), fc::variant(asset_symbol), fc::variant(limit), fc::variant(start_block_num), fc::variant(end_block_num)}).wait();
            return result.as<std::vector<gdwcore::wallet::PrettyTransaction>>();
        }
        gdwcore::wallet::AccountBalanceSummaryType CommonApiRpcClient::wallet_multisig_account_balance(const std::string& account_address /* = fc::json::from_string("\"\"").as<std::string>() */) const
        {
            fc::variant result = get_json_connection()->async_call("wallet_multisig_account_balance", std::vector<fc::variant>{fc::variant(account_address)}).wait();
            return result.as<gdwcore::wallet::AccountBalanceSummaryType>();
        }
        fc::variant_object CommonApiRpcClient::wallet_builder_get_multisig_detail(const gdwcore::wallet::TransactionBuilder& transaction_builder) const
        {
            fc::variant result = get_json_connection()->async_call("wallet_builder_get_multisig_detail", std::vector<fc::variant>{fc::variant(transaction_builder)}).wait();
            return result.as<fc::variant_object>();
        }
        fc::variant_object CommonApiRpcClient::wallet_builder_file_get_multisig_detail(const gdwcore::consensus::FilePath& builder_path) const
        {
            fc::variant result = get_json_connection()->async_call("wallet_builder_file_get_multisig_detail", std::vector<fc::variant>{fc::variant(builder_path)}).wait();
            return result.as<fc::variant_object>();
        }
        fc::variant_object CommonApiRpcClient::about() const
        {
            fc::variant result = get_json_connection()->async_call("about", std::vector<fc::variant>{}).wait();
            return result.as<fc::variant_object>();
        }
        fc::variant_object CommonApiRpcClient::get_info() const
        {
            fc::variant result = get_json_connection()->async_call("get_info", std::vector<fc::variant>{}).wait();
            return result.as<fc::variant_object>();
        }
        void CommonApiRpcClient::stop()
        {
            fc::variant result = get_json_connection()->async_call("stop", std::vector<fc::variant>{}).wait();
        }
        std::string CommonApiRpcClient::help(const std::string& command_name /* = fc::json::from_string("\"\"").as<std::string>() */) const
        {
            fc::variant result = get_json_connection()->async_call("help", std::vector<fc::variant>{fc::variant(command_name)}).wait();
            return result.as<std::string>();
        }
        fc::variant_object CommonApiRpcClient::validate_address(const std::string& address) const
        {
            fc::variant result = get_json_connection()->async_call("validate_address", std::vector<fc::variant>{fc::variant(address)}).wait();
            return result.as<fc::variant_object>();
        }
        std::string CommonApiRpcClient::execute_command_line(const std::string& input) const
        {
            fc::variant result = get_json_connection()->async_call("execute_command_line", std::vector<fc::variant>{fc::variant(input)}).wait();
            return result.as<std::string>();
        }
        void CommonApiRpcClient::execute_script(const fc::path& script) const
        {
            fc::variant result = get_json_connection()->async_call("execute_script", std::vector<fc::variant>{fc::variant(script)}).wait();
        }
        fc::variants CommonApiRpcClient::batch(const std::string& method_name, const std::vector<fc::variants>& parameters_list) const
        {
            fc::variant result = get_json_connection()->async_call("batch", std::vector<fc::variant>{fc::variant(method_name), fc::variant(parameters_list)}).wait();
            return result.as<fc::variants>();
        }
        fc::variants CommonApiRpcClient::batch_authenticated(const std::string& method_name, const std::vector<fc::variants>& parameters_list) const
        {
            fc::variant result = get_json_connection()->async_call("batch_authenticated", std::vector<fc::variant>{fc::variant(method_name), fc::variant(parameters_list)}).wait();
            return result.as<fc::variants>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::builder_finalize_and_sign(const gdwcore::wallet::TransactionBuilder& builder) const
        {
            fc::variant result = get_json_connection()->async_call("builder_finalize_and_sign", std::vector<fc::variant>{fc::variant(builder)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        std::map<std::string, gdwcore::api::MethodData> CommonApiRpcClient::meta_help() const
        {
            fc::variant result = get_json_connection()->async_call("meta_help", std::vector<fc::variant>{}).wait();
            return result.as<std::map<std::string, gdwcore::api::MethodData>>();
        }
        void CommonApiRpcClient::rpc_set_username(const std::string& username /* = fc::json::from_string("\"\"").as<std::string>() */)
        {
            fc::variant result = get_json_connection()->async_call("rpc_set_username", std::vector<fc::variant>{fc::variant(username)}).wait();
        }
        void CommonApiRpcClient::rpc_set_password(const std::string& password /* = fc::json::from_string("\"\"").as<std::string>() */)
        {
            fc::variant result = get_json_connection()->async_call("rpc_set_password", std::vector<fc::variant>{fc::variant(password)}).wait();
        }
        void CommonApiRpcClient::rpc_start_server(uint32_t port /* = fc::json::from_string("\"65065\"").as<uint32_t>() */)
        {
            fc::variant result = get_json_connection()->async_call("rpc_start_server", std::vector<fc::variant>{fc::variant(port)}).wait();
        }
        void CommonApiRpcClient::http_start_server(uint32_t port /* = fc::json::from_string("\"65066\"").as<uint32_t>() */)
        {
            fc::variant result = get_json_connection()->async_call("http_start_server", std::vector<fc::variant>{fc::variant(port)}).wait();
        }
        void CommonApiRpcClient::ntp_update_time()
        {
            fc::variant result = get_json_connection()->async_call("ntp_update_time", std::vector<fc::variant>{}).wait();
        }
        fc::variant CommonApiRpcClient::disk_usage() const
        {
            fc::variant result = get_json_connection()->async_call("disk_usage", std::vector<fc::variant>{}).wait();
            return result.as<fc::variant>();
        }
        fc::path CommonApiRpcClient::contract_compile(const fc::path& filename) const
        {
            fc::variant result = get_json_connection()->async_call("contract_compile", std::vector<fc::variant>{fc::variant(filename)}).wait();
            return result.as<fc::path>();
        }
        std::string CommonApiRpcClient::contract_register(const std::string& owner, const fc::path& codefile, const std::string& asset_symbol, const fc::optional<double>& init_limit)
        {
            fc::variant result = get_json_connection()->async_call("contract_register", std::vector<fc::variant>{fc::variant(owner), fc::variant(codefile), fc::variant(asset_symbol), fc::variant(init_limit)}).wait();
            return result.as<std::string>();
        }
        std::vector<gdwcore::consensus::Asset> CommonApiRpcClient::contract_register_testing(const std::string& owner, const fc::path& codefile)
        {
            fc::variant result = get_json_connection()->async_call("contract_register_testing", std::vector<fc::variant>{fc::variant(owner), fc::variant(codefile)}).wait();
            return result.as<std::vector<gdwcore::consensus::Asset>>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::contract_upgrade(const std::string& contract_address, const std::string& upgrader_name, const std::string& new_contract_name, const gdwcore::consensus::Imessage& new_contract_desc, const std::string& asset_symbol, const fc::optional<double>& exec_limit)
        {
            fc::variant result = get_json_connection()->async_call("contract_upgrade", std::vector<fc::variant>{fc::variant(contract_address), fc::variant(upgrader_name), fc::variant(new_contract_name), fc::variant(new_contract_desc), fc::variant(asset_symbol), fc::variant(exec_limit)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        std::vector<gdwcore::consensus::Asset> CommonApiRpcClient::contract_upgrade_testing(const std::string& contract_address, const std::string& upgrader_name, const std::string& new_contract_name, const gdwcore::consensus::Imessage& new_contract_desc)
        {
            fc::variant result = get_json_connection()->async_call("contract_upgrade_testing", std::vector<fc::variant>{fc::variant(contract_address), fc::variant(upgrader_name), fc::variant(new_contract_name), fc::variant(new_contract_desc)}).wait();
            return result.as<std::vector<gdwcore::consensus::Asset>>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::contract_destroy(const std::string& contract_address, const std::string& destroyer_name, const std::string& asset_symbol, const fc::optional<double>& exec_limit)
        {
            fc::variant result = get_json_connection()->async_call("contract_destroy", std::vector<fc::variant>{fc::variant(contract_address), fc::variant(destroyer_name), fc::variant(asset_symbol), fc::variant(exec_limit)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        std::vector<gdwcore::consensus::Asset> CommonApiRpcClient::contract_destroy_testing(const std::string& contract_address, const std::string& destroyer_name)
        {
            fc::variant result = get_json_connection()->async_call("contract_destroy_testing", std::vector<fc::variant>{fc::variant(contract_address), fc::variant(destroyer_name)}).wait();
            return result.as<std::vector<gdwcore::consensus::Asset>>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::contract_call(const std::string& contract, const std::string& caller_name, const std::string& function_name, const std::string& params, const std::string& asset_symbol, const fc::optional<double>& call_limit)
        {
            fc::variant result = get_json_connection()->async_call("contract_call", std::vector<fc::variant>{fc::variant(contract), fc::variant(caller_name), fc::variant(function_name), fc::variant(params), fc::variant(asset_symbol), fc::variant(call_limit)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        gdwcore::consensus::ContractEntryPrintable CommonApiRpcClient::contract_get_info(const std::string& contract)
        {
            fc::variant result = get_json_connection()->async_call("contract_get_info", std::vector<fc::variant>{fc::variant(contract)}).wait();
            return result.as<gdwcore::consensus::ContractEntryPrintable>();
        }
        std::vector<gdwcore::consensus::BalanceEntry> CommonApiRpcClient::contract_get_balance(const std::string& contract)
        {
            fc::variant result = get_json_connection()->async_call("contract_get_balance", std::vector<fc::variant>{fc::variant(contract)}).wait();
            return result.as<std::vector<gdwcore::consensus::BalanceEntry>>();
        }
        std::vector<gdwcore::consensus::Asset> CommonApiRpcClient::contract_call_testing(const std::string& contract, const std::string& caller_name, const std::string& function_name, const std::string& params)
        {
            fc::variant result = get_json_connection()->async_call("contract_call_testing", std::vector<fc::variant>{fc::variant(contract), fc::variant(caller_name), fc::variant(function_name), fc::variant(params)}).wait();
            return result.as<std::vector<gdwcore::consensus::Asset>>();
        }
        std::string CommonApiRpcClient::contract_call_offline(const std::string& contract, const std::string& caller_name, const std::string& function_name, const std::string& params)
        {
            fc::variant result = get_json_connection()->async_call("contract_call_offline", std::vector<fc::variant>{fc::variant(contract), fc::variant(caller_name), fc::variant(function_name), fc::variant(params)}).wait();
            return result.as<std::string>();
        }
        gdwcore::consensus::ContractEntryPrintable CommonApiRpcClient::contract_load_to_file(const std::string& contract, const fc::path& file)
        {
            fc::variant result = get_json_connection()->async_call("contract_load_to_file", std::vector<fc::variant>{fc::variant(contract), fc::variant(file)}).wait();
            return result.as<gdwcore::consensus::ContractEntryPrintable>();
        }
        gdwcore::consensus::TransactionIdType CommonApiRpcClient::get_result_trx_id(const gdwcore::consensus::TransactionIdType& request_id)
        {
            fc::variant result = get_json_connection()->async_call("get_result_trx_id", std::vector<fc::variant>{fc::variant(request_id)}).wait();
            return result.as<gdwcore::consensus::TransactionIdType>();
        }
        gdwcore::consensus::TransactionIdType CommonApiRpcClient::get_request_trx_id(const gdwcore::consensus::TransactionIdType& request_id)
        {
            fc::variant result = get_json_connection()->async_call("get_request_trx_id", std::vector<fc::variant>{fc::variant(request_id)}).wait();
            return result.as<gdwcore::consensus::TransactionIdType>();
        }
        void CommonApiRpcClient::simulator_open() const
        {
            fc::variant result = get_json_connection()->async_call("simulator_open", std::vector<fc::variant>{}).wait();
        }
        void CommonApiRpcClient::simulator_close() const
        {
            fc::variant result = get_json_connection()->async_call("simulator_close", std::vector<fc::variant>{}).wait();
        }
        std::string CommonApiRpcClient::simulator_contract_register(const std::string& owner, const fc::path& codefile, const std::string& asset_symbol, const fc::optional<double>& initLimit)
        {
            fc::variant result = get_json_connection()->async_call("simulator_contract_register", std::vector<fc::variant>{fc::variant(owner), fc::variant(codefile), fc::variant(asset_symbol), fc::variant(initLimit)}).wait();
            return result.as<std::string>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::simulator_contract_call(const std::string& contract, const std::string& caller_name, const std::string& function_name, const std::string& params, const std::string& cost_asset, const fc::optional<double>& callLimit)
        {
            fc::variant result = get_json_connection()->async_call("simulator_contract_call", std::vector<fc::variant>{fc::variant(contract), fc::variant(caller_name), fc::variant(function_name), fc::variant(params), fc::variant(cost_asset), fc::variant(callLimit)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::simulator_contract_upgrade(const std::string& contract_address, const std::string& upgrader_name, const std::string& new_contract_name, const gdwcore::consensus::Imessage& new_contract_desc, const std::string& asset_symbol, const fc::optional<double>& exec_limit)
        {
            fc::variant result = get_json_connection()->async_call("simulator_contract_upgrade", std::vector<fc::variant>{fc::variant(contract_address), fc::variant(upgrader_name), fc::variant(new_contract_name), fc::variant(new_contract_desc), fc::variant(asset_symbol), fc::variant(exec_limit)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        std::vector<gdwcore::consensus::Asset> CommonApiRpcClient::simulator_contract_upgrade_testing(const std::string& contract_address, const std::string& upgrader_name, const std::string& new_contract_name, const gdwcore::consensus::Imessage& new_contract_desc)
        {
            fc::variant result = get_json_connection()->async_call("simulator_contract_upgrade_testing", std::vector<fc::variant>{fc::variant(contract_address), fc::variant(upgrader_name), fc::variant(new_contract_name), fc::variant(new_contract_desc)}).wait();
            return result.as<std::vector<gdwcore::consensus::Asset>>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::simulator_contract_destroy(const std::string& contract_address, const std::string& destroyer_name, const std::string& asset_symbol, const fc::optional<double>& exec_limit)
        {
            fc::variant result = get_json_connection()->async_call("simulator_contract_destroy", std::vector<fc::variant>{fc::variant(contract_address), fc::variant(destroyer_name), fc::variant(asset_symbol), fc::variant(exec_limit)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        std::vector<gdwcore::consensus::Asset> CommonApiRpcClient::simulator_contract_destroy_testing(const std::string& contract_address, const std::string& destroyer_name)
        {
            fc::variant result = get_json_connection()->async_call("simulator_contract_destroy_testing", std::vector<fc::variant>{fc::variant(contract_address), fc::variant(destroyer_name)}).wait();
            return result.as<std::vector<gdwcore::consensus::Asset>>();
        }
        gdwcore::consensus::ContractEntryPrintable CommonApiRpcClient::simulator_contract_get_info(const std::string& contract)
        {
            fc::variant result = get_json_connection()->async_call("simulator_contract_get_info", std::vector<fc::variant>{fc::variant(contract)}).wait();
            return result.as<gdwcore::consensus::ContractEntryPrintable>();
        }
        std::vector<gdwcore::consensus::BalanceEntry> CommonApiRpcClient::simulator_contract_get_balance(const std::string& contract)
        {
            fc::variant result = get_json_connection()->async_call("simulator_contract_get_balance", std::vector<fc::variant>{fc::variant(contract)}).wait();
            return result.as<std::vector<gdwcore::consensus::BalanceEntry>>();
        }
        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::simulator_transfer_to_contract(const std::string& amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_name, const std::string& to_contract, double amount_for_exec)
        {
            fc::variant result = get_json_connection()->async_call("simulator_transfer_to_contract", std::vector<fc::variant>{fc::variant(amount_to_transfer), fc::variant(asset_symbol), fc::variant(from_account_name), fc::variant(to_contract), fc::variant(amount_for_exec)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }
        gdwcore::wallet::AccountBalanceSummaryType CommonApiRpcClient::simulator_account_balance(const std::string& account_name /* = fc::json::from_string("\"\"").as<std::string>() */)
        {
            fc::variant result = get_json_connection()->async_call("simulator_account_balance", std::vector<fc::variant>{fc::variant(account_name)}).wait();
            return result.as<gdwcore::wallet::AccountBalanceSummaryType>();
        }
        fc::path CommonApiRpcClient::simulator_contract_compile(const fc::path& filename) const
        {
            fc::variant result = get_json_connection()->async_call("simulator_contract_compile", std::vector<fc::variant>{fc::variant(filename)}).wait();
            return result.as<fc::path>();
        }
        gdwcore::consensus::ContractEntryPrintable CommonApiRpcClient::simulator_contract_load_to_file(const std::string& contract, const fc::path& file)
        {
            fc::variant result = get_json_connection()->async_call("simulator_contract_load_to_file", std::vector<fc::variant>{fc::variant(contract), fc::variant(file)}).wait();
            return result.as<gdwcore::consensus::ContractEntryPrintable>();
        }
        std::vector<gdwcore::consensus::Asset> CommonApiRpcClient::simulator_contract_register_testing(const std::string& owner, const fc::path& codefile)
        {
            fc::variant result = get_json_connection()->async_call("simulator_contract_register_testing", std::vector<fc::variant>{fc::variant(owner), fc::variant(codefile)}).wait();
            return result.as<std::vector<gdwcore::consensus::Asset>>();
        }
        std::vector<gdwcore::consensus::Asset> CommonApiRpcClient::simulator_contract_call_testing(const std::string& contract, const std::string& caller_name, const std::string& function_name, const std::string& params)
        {
            fc::variant result = get_json_connection()->async_call("simulator_contract_call_testing", std::vector<fc::variant>{fc::variant(contract), fc::variant(caller_name), fc::variant(function_name), fc::variant(params)}).wait();
            return result.as<std::vector<gdwcore::consensus::Asset>>();
        }
        std::vector<gdwcore::consensus::Asset> CommonApiRpcClient::simulator_transfer_to_contract_testing(const std::string& amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_name, const std::string& to_contract)
        {
            fc::variant result = get_json_connection()->async_call("simulator_transfer_to_contract_testing", std::vector<fc::variant>{fc::variant(amount_to_transfer), fc::variant(asset_symbol), fc::variant(from_account_name), fc::variant(to_contract)}).wait();
            return result.as<std::vector<gdwcore::consensus::Asset>>();
        }
        vector<gdwcore::consensus::SimulatorAccountInfo> CommonApiRpcClient::simulator_list_my_addresses(const std::string& account_name /* = fc::json::from_string("\"\"").as<std::string>() */)
        {
            fc::variant result = get_json_connection()->async_call("simulator_list_my_addresses", std::vector<fc::variant>{fc::variant(account_name)}).wait();
            return result.as<vector<gdwcore::consensus::SimulatorAccountInfo>>();
        }
        std::string CommonApiRpcClient::get_contract_registered_in_transaction(const gdwcore::consensus::TransactionIdType& trx_id)
        {
            fc::variant result = get_json_connection()->async_call("get_contract_registered_in_transaction", std::vector<fc::variant>{fc::variant(trx_id)}).wait();
            return result.as<std::string>();
        }
        gdwcore::consensus::TransactionIdType CommonApiRpcClient::get_transaction_id_contract_registered(const std::string& contract_id)
        {
            fc::variant result = get_json_connection()->async_call("get_transaction_id_contract_registered", std::vector<fc::variant>{fc::variant(contract_id)}).wait();
            return result.as<gdwcore::consensus::TransactionIdType>();
        }
        gdwcore::consensus::CodePrintAble CommonApiRpcClient::contract_get_info_from_gpc_file(const fc::path& file)
        {
            fc::variant result = get_json_connection()->async_call("contract_get_info_from_gpc_file", std::vector<fc::variant>{fc::variant(file)}).wait();
            return result.as<gdwcore::consensus::CodePrintAble>();
        }
        fc::path CommonApiRpcClient::script_compile(const fc::path& filename) const
        {
            fc::variant result = get_json_connection()->async_call("script_compile", std::vector<fc::variant>{fc::variant(filename)}).wait();
            return result.as<fc::path>();
        }
        std::string CommonApiRpcClient::script_add(const fc::path& filename, const gdwcore::consensus::Imessage& description)
        {
            fc::variant result = get_json_connection()->async_call("script_add", std::vector<fc::variant>{fc::variant(filename), fc::variant(description)}).wait();
            return result.as<std::string>();
        }
        void CommonApiRpcClient::script_remove(const std::string& scriptid)
        {
            fc::variant result = get_json_connection()->async_call("script_remove", std::vector<fc::variant>{fc::variant(scriptid)}).wait();
        }
        gdwcore::wallet::ScriptEntryPrintable CommonApiRpcClient::script_get_info(const std::string& scriptid)
        {
            fc::variant result = get_json_connection()->async_call("script_get_info", std::vector<fc::variant>{fc::variant(scriptid)}).wait();
            return result.as<gdwcore::wallet::ScriptEntryPrintable>();
        }
        std::vector<gdwcore::wallet::ScriptEntryPrintable> CommonApiRpcClient::scripts_list()
        {
            fc::variant result = get_json_connection()->async_call("scripts_list", std::vector<fc::variant>{}).wait();
            return result.as<std::vector<gdwcore::wallet::ScriptEntryPrintable>>();
        }
        void CommonApiRpcClient::script_disable(const std::string& scriptid)
        {
            fc::variant result = get_json_connection()->async_call("script_disable", std::vector<fc::variant>{fc::variant(scriptid)}).wait();
        }
        void CommonApiRpcClient::script_enable(const std::string& scriptid)
        {
            fc::variant result = get_json_connection()->async_call("script_enable", std::vector<fc::variant>{fc::variant(scriptid)}).wait();
        }
        void CommonApiRpcClient::script_import_to_db(const fc::path& dbfile)
        {
            fc::variant result = get_json_connection()->async_call("script_import_to_db", std::vector<fc::variant>{fc::variant(dbfile)}).wait();
        }
        void CommonApiRpcClient::script_export_from_db(const fc::path& dbfile)
        {
            fc::variant result = get_json_connection()->async_call("script_export_from_db", std::vector<fc::variant>{fc::variant(dbfile)}).wait();
        }
        std::vector<std::string> CommonApiRpcClient::script_get_events_bound(const std::string& script_id)
        {
            fc::variant result = get_json_connection()->async_call("script_get_events_bound", std::vector<fc::variant>{fc::variant(script_id)}).wait();
            return result.as<std::vector<std::string>>();
        }
        std::vector<std::string> CommonApiRpcClient::script_list_event_handler(const std::string& contract_id_str, const std::string& event_type)
        {
            fc::variant result = get_json_connection()->async_call("script_list_event_handler", std::vector<fc::variant>{fc::variant(contract_id_str), fc::variant(event_type)}).wait();
            return result.as<std::vector<std::string>>();
        }
        void CommonApiRpcClient::script_add_event_handler(const std::string& contract_id_str, const std::string& event_type, const std::string& script_id, uint32_t index)
        {
            fc::variant result = get_json_connection()->async_call("script_add_event_handler", std::vector<fc::variant>{fc::variant(contract_id_str), fc::variant(event_type), fc::variant(script_id), fc::variant(index)}).wait();
        }
        void CommonApiRpcClient::script_delete_event_handler(const std::string& contract_id_str, const std::string& event_type, const std::string& script_id)
        {
            fc::variant result = get_json_connection()->async_call("script_delete_event_handler", std::vector<fc::variant>{fc::variant(contract_id_str), fc::variant(event_type), fc::variant(script_id)}).wait();
        }

        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_transfer_to_address_build(const std::string& amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_public_key, const std::string& to_address, const gdwcore::consensus::Imessage& memo_message /* = fc::json::from_string("\"\"").as<gdwcore::consensus::Imessage>() */, const gdwcore::wallet::VoteStrategy& strategy /* = fc::json::from_string("\"vote_none\"").as<gdwcore::wallet::VoteStrategy>() */)
        {
            fc::variant result = get_json_connection()->async_call("wallet_transfer_to_address_build", std::vector<fc::variant>{fc::variant(amount_to_transfer), fc::variant(asset_symbol), fc::variant(from_account_public_key), fc::variant(to_address), fc::variant(memo_message), fc::variant(strategy)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }

        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_call_contract_build(const std::string& contract, const std::string& caller_publickey, const std::string& function_name, const std::string& params, const std::string& asset_symbol, const fc::optional<double>& call_limit)
        {
            fc::variant result = get_json_connection()->async_call("wallet_call_contract_build", std::vector<fc::variant>{fc::variant(contract), fc::variant(caller_publickey), fc::variant(function_name), fc::variant(params), fc::variant(asset_symbol), fc::variant(call_limit)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }

        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::sign_build_transaction(const gdwcore::wallet::WalletTransactionEntry& trasaction_building)
        {
            fc::variant result = get_json_connection()->async_call("sign_build_transaction", std::vector<fc::variant>{fc::variant(trasaction_building)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }

		std::string CommonApiRpcClient::broadcast_building_transaction(const gdwcore::wallet::WalletTransactionEntry& trasaction_building)
        {
            fc::variant result = get_json_connection()->async_call("broadcast_building_transaction", std::vector<fc::variant>{fc::variant(trasaction_building)}).wait();
            return result.as<std::string>();
        }

        gdwcore::wallet::WalletTransactionEntry CommonApiRpcClient::wallet_transfer_to_contract_build(const string& amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_public_key, const std::string& to_contract, double amount_for_exec)
        {
            fc::variant result = get_json_connection()->async_call("wallet_transfer_to_contract_build", std::vector<fc::variant>{fc::variant(amount_to_transfer), fc::variant(asset_symbol), fc::variant(from_account_public_key), fc::variant(to_contract), fc::variant(amount_for_exec)}).wait();
            return result.as<gdwcore::wallet::WalletTransactionEntry>();
        }




    }
} // end namespace gdwcore::rpc_stubs
