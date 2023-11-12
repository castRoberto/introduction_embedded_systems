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
        /* Print array test */
        print_array (numbers, SIZE);

        /* Median test */
        if (find_median (numbers, SIZE) != result_tests::median) {

            throw "[find_median]: Error calculating the median of the data";

        } else {
            LOG_LN("[find_median]: Successful test!");
        }


        /* Mean test */
        if (find_mean (numbers, SIZE) != result_tests::mean) {

            throw "[find_mean]: Error calculating the mean of the data";

        } else {
            LOG_LN("[find_mean]: Successful test!");
        }


        /* Get maximun test */
        if (find_maximum (numbers, SIZE) != result_tests::max) {

            throw "[find_maximum]: Error calculating the maximun value of the data";

        } else {
            LOG_LN("[find_maximum]: Successful test!");
        }


        /* Get minimun test */
        if (find_minimum (numbers, SIZE) != result_tests::min) {

            throw "[find_minimum]: Error calculating the minimun value of the data";

        } else {
            LOG_LN("[find_minimum]: Successful test!");
        }


        /* Sort test */
        sort_array (numbers, SIZE);

        for (int i = SIZE - 1; i >= 0; i--) {

            if (numbers[i] != SIZE - i) {
                throw "[sort_array]: Error sorting the data array";
            }

        }

        LOG_LN("[sort_array]: Successful test!");


         /* Print statistics test */
        print_statistics (numbers, SIZE);

    } catch(const char* error) {
        LOG_ERR(error);
    }

    return 0;
}