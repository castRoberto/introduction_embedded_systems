/********************************************************************************
 * @file stats.h
 * @brief Unit tests
 *
 * In this package all the unit tests of the system are implemented.
 *
 * @author Roberto Castro Beltran
 * @date 08 november 2023
 *
 *******************************************************************************/

#include <iostream>

#include "../util/common.h"
#include "../data/data_array.h"
#include "../src/statistics_tool/stats.h"

int main (int argc, char* argv[]) {

    try {

        if (find_mean (numbers, SIZE) != 93) {

            throw "[find_mean]: Error calculating the mean of the data";

        } else {
            LOG("[find_mean]: Successful test!");
        }

        /* Print statistics test */
        print_statistics (numbers, SIZE);

    } catch(const char* error) {
        LOG_ERR(error);
    }

    return 0;
}