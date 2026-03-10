/*
* @file quick_sort.cpp
* @brief Implementation of Quick Sort algorithm
*
* Sorts a vector of integers in ascending order using the Quick Sort
* algorithm with a last element pivot strategy.
*
*/
#include "sorting_algorithms.h"

using namespace std;

/**
 * @brief Partitions a subarray around a pivot element.
 *
 * Rearranges elements in @p data between indices @p low and @p high such that
 * all elements less than the pivot appear before it and all
 * elements greater appear after it.
 *
 * @param data Reference to the vector being sorted.
 * @param low  Starting index of the subarray to partition.
 * @param high Ending index of the subarray to partition.
 * @return The final index of the pivot element after partitioning.
 */

static int partition(vector<int>& data, int low, int high) {
    int pivot = data[high];
    int i = low - 1;

    for(int j = low; j <high; ++j){
        if(data[j] < pivot){
            ++i;
            swap(data[i], data[j]);
        }
    }
    swap(data[i+1], data[high]);
    return i + 1;
}
/**
 * @brief Recursively sorts a subarray using Quick Sort.
 *
 * Selects a pivot via partition(), then recursively sorts the left and
 * right subarrays on either side of the pivot.
 *
 * @param data Reference to the vector being sorted.
 * @param low  Starting index of the subarray to sort.
 * @param high Ending index of the subarray to sort.
 */
static void quick_sort_helper(vector<int>& data, int low, int high) {
    if(low < high){
        int pi = partition(data, low, high);
        quick_sort_helper(data, low, pi - 1);
        quick_sort_helper(data, pi + 1, high);
    }
}
/**
 * @brief Sorts a vector of integers in ascending order using Quick Sort.
 *
 * Entry point for the Quick Sort algorithm. Has average case time complexity
 * of O(n log n) and worst-case O(n²). Sorts in place with O(log n) stack
 * space on average.
 *
 * @param data Reference to the vector to be sorted. Modified in place.
 */
void quick_sort(vector<int>& data) {
    if(!data.empty()){
        quick_sort_helper(data, 0, static_cast<int>(data.size()-1));
    }
}