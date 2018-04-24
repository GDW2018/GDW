#pragma once

namespace gdwcore {
    namespace client {

#ifndef GDW_TEST_NETWORK
        static const std::vector<std::string> SeedNodes
        {
			"47.106.123.74:51888",
			"47.106.115.96:51888",
			"47.98.151.70:51888",
			"47.100.40.87:51888",
			"47.75.171.21:51888",
			"47.75.171.148:51888",
			"47.75.171.32:51888",
			"47.75.66.190:51888",
			"39.107.240.49:51888",
			"59.110.214.6:51888"
        };
#else
        static const std::vector<std::string> SeedNodes
        {
        };
#endif

    }
} // gdwcore::client
