#include <consensus/operation/AccountOperations.hpp>
#include <consensus/operation/AssetOperations.hpp>
#include <consensus/operation/BalanceOperations.hpp>
#include <consensus/operation/OperationFactory.hpp>
#include <consensus/operation/Operations.hpp>
#include <consensus/operation/SlateOperations.hpp>
#include <consensus/operation/ImessageOperations.hpp>
#include <consensus/operation/ContractOperations.hpp>
#include <consensus/operation/TransactionOperations.hpp>
#include <consensus/operation/StorageOperations.hpp>
#include <consensus/operation/EventOperations.hpp>
#include <fc/io/raw_variant.hpp>
#include <fc/reflect/variant.hpp>

namespace gdwcore {
    namespace consensus {
        const OperationTypeEnum WithdrawOperation::type = withdraw_op_type;
        const OperationTypeEnum DepositOperation::type = deposit_op_type;
        const OperationTypeEnum RegisterAccountOperation::type = register_account_op_type;
        const OperationTypeEnum UpdateAccountOperation::type = update_account_op_type;
        const OperationTypeEnum WithdrawPayOperation::type = withdraw_pay_op_type;
        const OperationTypeEnum CreateAssetOperation::type = create_asset_op_type;
        const OperationTypeEnum UpdateAssetOperation::type = update_asset_op_type;
        const OperationTypeEnum IssueAssetOperation::type = issue_asset_op_type;
        const OperationTypeEnum DefineSlateOperation::type = define_slate_op_type;
        const OperationTypeEnum ReleaseEscrowOperation::type = release_escrow_op_type;
        const OperationTypeEnum UpdateSigningKeyOperation::type = update_signing_key_op_type;
        const OperationTypeEnum UpdateBalanceVoteOperation::type = update_balance_vote_op_type;
        const OperationTypeEnum UpdateAssetExtOperation::type = update_asset_ext_op_type;
        const OperationTypeEnum ImessageMemoOperation::type = imessage_memo_op_type;
        const OperationTypeEnum ContractInfoOperation::type = contract_info_op_type;
        const OperationTypeEnum RegisterContractOperation::type = contract_register_op_type;
        const OperationTypeEnum UpgradeContractOperation::type = contract_upgrade_op_type;
        const OperationTypeEnum DestroyContractOperation::type = contract_destroy_op_type;
        const OperationTypeEnum WithdrawContractOperation::type = withdraw_contract_op_type;
        const OperationTypeEnum TransferContractOperation::type = transfer_contract_op_type;
        const OperationTypeEnum BalancesWithdrawOperation::type = balances_withdraw_op_type;
        const OperationTypeEnum TransactionOperation::type = transaction_op_type;
        const OperationTypeEnum StorageOperation::type = storage_op_type;
        const OperationTypeEnum CallContractOperation::type = contract_call_op_type;
        const OperationTypeEnum EventOperation::type = event_op_type;
        const OperationTypeEnum DepositContractOperation::type = deposit_contract_op_type;
		const OperationTypeEnum OnDestroyOperation::type = on_destroy_op_type;
		const OperationTypeEnum OnUpgradeOperation::type = on_upgrade_op_type;
        const OperationTypeEnum OnCallSuccessOperation::type = on_call_success_op_type;
		
        static bool first_chain = []()->bool{
            gdwcore::consensus::OperationFactory::instance().register_operation<WithdrawOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<DepositOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<RegisterAccountOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<UpdateAccountOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<WithdrawPayOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<CreateAssetOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<UpdateAssetOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<IssueAssetOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<DefineSlateOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<ReleaseEscrowOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<UpdateSigningKeyOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<UpdateBalanceVoteOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<UpdateAssetExtOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<ImessageMemoOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<ContractInfoOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<RegisterContractOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<UpgradeContractOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<DestroyContractOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<WithdrawContractOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<TransferContractOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<BalancesWithdrawOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<TransactionOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<StorageOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<CallContractOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<EventOperation>();
            gdwcore::consensus::OperationFactory::instance().register_operation<DepositContractOperation>();
			gdwcore::consensus::OperationFactory::instance().register_operation<OnDestroyOperation>();
			gdwcore::consensus::OperationFactory::instance().register_operation<OnUpgradeOperation>();
			gdwcore::consensus::OperationFactory::instance().register_operation<OnCallSuccessOperation>();

            return true;
        }();

        OperationFactory& OperationFactory::instance()
        {
            static std::unique_ptr<OperationFactory> inst(new OperationFactory());
            return *inst;
        }

        void OperationFactory::to_variant(const gdwcore::consensus::Operation& in, fc::variant& output)
        {
            try {
                auto converter_itr = _converters.find(in.type.value);
                FC_ASSERT(converter_itr != _converters.end(), "No such converter!");
                converter_itr->second->to_variant(in, output);
            } FC_RETHROW_EXCEPTIONS(warn, "")
        }

        void OperationFactory::from_variant(const fc::variant& in, gdwcore::consensus::Operation& output)
        {
            try {
                auto obj = in.get_object();

                if (obj["type"].as_string() == "define_delegate_slate_op_type")
                {
                    output.type = define_slate_op_type;
                    return;
                }

                output.type = obj["type"].as<OperationTypeEnum>();

                auto converter_itr = _converters.find(output.type.value);
                FC_ASSERT(converter_itr != _converters.end());
                converter_itr->second->from_variant(in, output);
            } FC_RETHROW_EXCEPTIONS(warn, "", ("in", in))
        }

    }
} // gdwcore::consensus

namespace fc {
    void to_variant(const gdwcore::consensus::Operation& var, variant& vo)
    {
        gdwcore::consensus::OperationFactory::instance().to_variant(var, vo);
    }

    void from_variant(const variant& var, gdwcore::consensus::Operation& vo)
    {
        gdwcore::consensus::OperationFactory::instance().from_variant(var, vo);
    }
}
