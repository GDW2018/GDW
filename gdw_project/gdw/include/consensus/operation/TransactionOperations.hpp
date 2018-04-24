#pragma once

#include <consensus/transaction/TransactionEntry.hpp>
#include <consensus/operation/Operations.hpp>

namespace gdwcore {
    namespace consensus {

        struct TransactionOperation
        {
            static const OperationTypeEnum type;

            TransactionOperation(){}

            TransactionOperation(const SignedTransaction& signed_trx)
                :trx(signed_trx){}

            TransactionOperation(const TransactionOperation& trx_op)
                :trx(trx_op.trx){}

            SignedTransaction trx;

            void evaluate(TransactionEvaluationState& eval_state)const;
        };

    }
} // gdwcore::consensus


FC_REFLECT(gdwcore::consensus::TransactionOperation, (trx))
