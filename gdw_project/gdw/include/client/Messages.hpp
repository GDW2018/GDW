#pragma once
#include <consensus/block/Block.hpp>
#include <client/Client.hpp>

namespace gdwcore {
    namespace client {

        enum MessageTypeEnum
        {
            trx_message_type = 1000,
            block_message_type = 1001,
            batch_trx_message_type = 1002
        };

        struct TrxMessage
        {
            static const MessageTypeEnum type;

            gdwcore::consensus::SignedTransaction trx;
            TrxMessage() {}
            TrxMessage(gdwcore::consensus::SignedTransaction transaction) :
                trx(std::move(transaction))
            {}
        };

        struct BatchTrxMessage
        {
            static const MessageTypeEnum type;
            std::vector<gdwcore::consensus::SignedTransaction> trx_vec;
            BatchTrxMessage() {}
            BatchTrxMessage(std::vector<gdwcore::consensus::SignedTransaction> transactions) :
                trx_vec(std::move(transactions))
            {}
        };

        struct BlockMessage
        {
            static const MessageTypeEnum type;

            BlockMessage(){}
            BlockMessage(const gdwcore::consensus::FullBlock& blk)
                :block(blk), block_id(blk.id()){}

            gdwcore::consensus::FullBlock    block;
            gdwcore::consensus::BlockIdType block_id;

        };

    }
} // gdwcore::client

FC_REFLECT_ENUM(gdwcore::client::MessageTypeEnum, (trx_message_type)(block_message_type)(batch_trx_message_type))
FC_REFLECT(gdwcore::client::TrxMessage, (trx))
FC_REFLECT(gdwcore::client::BatchTrxMessage, (trx_vec))
FC_REFLECT(gdwcore::client::BlockMessage, (block)(block_id))
