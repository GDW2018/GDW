#pragma once
#include <fc/exception/exception.hpp>

namespace gdwcore {
    namespace network {
        // registered in node.cpp 

        FC_DECLARE_EXCEPTION(net_exception, 90000, "P2P Networking Exception");
        FC_DECLARE_DERIVED_EXCEPTION(send_queue_overflow, gdwcore::network::net_exception, 90001, "send queue for this peer exceeded maximum size");
        FC_DECLARE_DERIVED_EXCEPTION(insufficient_relay_fee, gdwcore::network::net_exception, 90002, "insufficient relay fee");
        FC_DECLARE_DERIVED_EXCEPTION(already_connected_to_requested_peer, gdwcore::network::net_exception, 90003, "already connected to requested peer");
        FC_DECLARE_DERIVED_EXCEPTION(block_older_than_undo_history, gdwcore::network::net_exception, 90004, "block is older than our undo history allows us to process");
        FC_DECLARE_DERIVED_EXCEPTION(endpoint_in_blacklist, gdwcore::network::net_exception, 90005, "node want to add is in the blacklist");
        FC_DECLARE_DERIVED_EXCEPTION(no_active_endpoint, gdwcore::network::net_exception, 90006, "disconnect endpoint is not in the active connection list");
    }
}
