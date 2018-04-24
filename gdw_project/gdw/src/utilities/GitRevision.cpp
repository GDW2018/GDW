#include <stdint.h>
#include <utilities/GitRevision.hpp>

#define GDWCORE_GIT_REVISION_SHA "7e7f255f185ffaf53397084f6ca747674088f176"
#define GDWCORE_GIT_REVISION_UNIX_TIMESTAMP 1488663957
#define GDWCORE_GIT_REVISION_DESCRIPTION "GDW"

namespace gdwcore {
    namespace utilities {

        const char* const git_revision_sha = GDWCORE_GIT_REVISION_SHA;
        const uint32_t git_revision_unix_timestamp = GDWCORE_GIT_REVISION_UNIX_TIMESTAMP;
        const char* const git_revision_description = GDWCORE_GIT_REVISION_DESCRIPTION;

    }
} // end namespace gdwcore::utilities
