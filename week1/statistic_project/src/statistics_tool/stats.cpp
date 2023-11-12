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
    
}