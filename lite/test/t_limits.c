
#include "testing.h"


void nest_try_block(int keep_nesting){

    if(keep_nesting){

        E4C_TRY{

            nest_try_block(--keep_nesting);
        }
    }
}

TEST_CASE(test_limits){

    nest_try_block(E4C_MAX_FRAMES /* will not overflow */);
}
