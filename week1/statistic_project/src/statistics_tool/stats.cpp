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


void merge (unsigned char* ptr, int p, int q, int r) {

    // Create L ← A[p..q] and R ← A[q+1..r]
    int n1 = q - p + 1;
    int n2 = r - q;

    unsigned char L[n1], R[n2];

    for (int i = 0; i < n1; i++) {

        L[i] = ptr[p + i];

    }

    for (int j = 0; j < n2; j++) {

        R[j] = ptr[q + 1 + j];

    }

    // Maintain current index of sub-arrays and main array
    int i = 0;
    int j = 0;
    int k = p;

    // Until we reach either end of either L or M, pick larger among
    // elements L and M and place them in the correct position at A[p..r]
    while (i < n1 && j < n2) {

        if (L[i] <= R[j]) {

            ptr[k] = L[i];
            i++;

        } else {

            ptr[k] = R[j];
            j++;

        }

        k++;

    }

    // When we run out of elements in either L or M,
    // pick up the remaining elements and put in A[p..r]
    while (i < n1) {

        ptr[k] = L[i];
        i++;
        k++;

    }

    while (j < n2) {

        ptr[k] = R[j];
        j++;
        k++;

    }

}


void merge_sort (unsigned char* ptr, int p, int r) {

    if (p < r) {

        int q = (p + r) / 2;

        merge_sort (ptr, p, q);
        merge_sort (ptr, q + 1, r);
        merge (ptr, p, q, r);

    }

}


void reverse_array (unsigned char* ptr, int len) {

    int i, j;
    unsigned char tmp;

    for (i = 0, j = len -1; i < (len / 2); i++, j--) {

        tmp = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = tmp;
    }

}


void sort_array (unsigned char* ptr, int len) {

    int p = 0;
    int r = len - 1;

    merge_sort (ptr, p, r);

    reverse_array (ptr, len);

}


void print_array (unsigned char* ptr, int len) {
    
}

void print_statistics (unsigned char* ptr, int len) {
    
}