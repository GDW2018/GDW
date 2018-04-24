#pragma once
#include <consensus/genesis/GenesisState.hpp>
#include <sstream>

namespace gdwcore {
    namespace consensus {

        GenesisState get_builtin_genesis_block_config();
        fc::sha256 get_builtin_genesis_block_state_hash();

    }
} // gdwcore::consensus
