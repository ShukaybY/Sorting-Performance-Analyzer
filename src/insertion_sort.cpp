/**
 * @file insertion_sort.cpp
 * @brief Implementation of the Insertion Sort algorithm.
 *
 * Sorts a vector of integers in ascending order using the Insertion Sort
 * algorithm, which builds the sorted result one element at a time.
 */

#include "sorting_algorithms.h"

using namespace std;

/**
 * @brief Sorts a vector of integers in ascending order using Insertion Sort.
 *
 * Iterates through the vector from left to right. For each element, shifts
 * all larger preceding elements one position to the right to make room, then
 * inserts the current element into its correct position.
 *
 * Time complexity: O(n²) average and worst case, O(n) best case. 
 * Sorts in-place with O(1) auxiliary space. Stable sort
 * preserves the relative order of equal elements. Well suited for small or
 * nearly sorted datasets.
 *
 * @param data Reference to the vector to be sorted. Modified in place.
 */
void insertion_sort(vector<int>& data) {
    for(size_t i =1; i < data.size(); ++i){
        int key = data[i];
        int j = static_cast<int>(i) - 1;

        while (j >= 0 && data[j] > key) {
            data[j+1] = data[j];
            --j;
        }
        data[j+1] = key;
    }
}
