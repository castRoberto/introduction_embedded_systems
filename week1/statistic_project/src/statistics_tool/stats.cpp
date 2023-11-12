/********************************************************************************
 * @file stats.cpp
 * @brief Implementation of statistical operations
 *
 * Implementation of statistical functions on a matrix.
 *
 * @author Roberto Castro Beltran
 * @date 08 november 2023
 *
 *******************************************************************************/

#include "stats.h"


int find_median (unsigned char* ptr, int len) {

    return NULL;
}


int find_mean (unsigned char* ptr, int len) {

    int i;
    int average = 0;

    if (ptr == NULL) { return 0; }

    if (len <= 0) { len = 1; }

    for (i = 0; i < len; i++) {

        average += *ptr;
        ptr++;

    }

    return (average / len);

}


int find_maximum (unsigned char* ptr, int len) {

    return NULL;
}


int find_minimum (unsigned char* ptr, int len) {

    return NULL;
}


void sort_array (unsigned char* ptr, int len) {

}


void print_array (unsigned char* ptr, int len) {

}

void print_statistics (unsigned char* ptr, int len) {
    
    std::string out_str;

    int median  = find_median (ptr, len);
    int mean    = find_mean (ptr, len);
    int max     = find_maximum (ptr, len);
    int min     = find_minimum (ptr, len);

    out_str.append ("[stats.print_statistics]: median {");
    out_str.append (std::to_string (median));
    out_str.append ("}, mean {");
    out_str.append (std::to_string (mean));
    out_str.append ("}, max {");
    out_str.append (std::to_string (max));
    out_str.append ("}, min {");
    out_str.append (std::to_string (min));
    out_str.append ("}.");

    LOG(out_str);
}