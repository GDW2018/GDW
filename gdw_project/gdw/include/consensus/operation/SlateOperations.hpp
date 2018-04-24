#pragma once

#include <consensus/operation/Operations.hpp>

namespace gdwcore {
    namespace consensus {

        struct DefineSlateOperation
        {
            static const OperationTypeEnum type;

            vector<signed_int> slate;

            void evaluate(TransactionEvaluationState& eval_state)const;
        };

    }
} // gdwcore::consensus

FC_REFLECT(gdwcore::consensus::DefineSlateOperation, (slate))
