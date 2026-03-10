/**
 * @file bubble_sort.cpp
 * @brief Implementation of the Bubble Sort algorithm.
 *
 * Sorts a vector of integers in ascending order using the Bubble Sort
 * algorithm with an early exit optimisation for already sorted input.
 */

#include "sorting_algorithms.h"

using namespace std;

/**
 * @brief Sorts a vector of integers in ascending order using Bubble Sort.
 *
 * Repeatedly steps through the vector, comparing adjacent elements and
 * swapping them if they are in the wrong order. Each full pass bubbles the
 * largest unsorted element to its correct position at the end of the array.
 *
 * An early exit optimisation is applied: if a complete pass produces no
 * swaps, the array is already sorted and iteration stops immediately,
 * giving O(n) best case performance on sorted input.
 *
 * Time complexity: O(n²) average and worst case, O(n) best case.
 * Space complexity: O(1) auxiliary. Stable sort.
 *
 * @param data Reference to the vector to be sorted. Modified in place.
 */
void bubble_sort(vector<int>& data) {
    size_t n = data.size();
    for( size_t i =0; i < n; ++i) {
        bool swapped = false;
        for(size_t j = 0; j<n-i-1; ++j) {
            if (data[j] > data[j+1]) {
                swap(data[j], data[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}
