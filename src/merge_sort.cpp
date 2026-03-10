/**
 * @file merge_sort.cpp
 * @brief Implementation of the Merge Sort algorithm.
 *
 * Sorts a vector of integers in ascending order using the Merge Sort
 * algorithm, a stable, divide and conquer sorting method.
 */
#include "sorting_algorithms.h"

using namespace std;

/**
 * @brief Merges two adjacent sorted subarrays into a single sorted subarray.
 *
 * Combines the sorted subarray @p data[left..mid] and the sorted subarray
 * @p data[mid+1..right] into a single sorted sequence, writing the result
 * back into @p data[left..right].
 *
 * @param data  Reference to the vector containing the subarrays to merge.
 * @param left  Starting index of the left subarray.
 * @param mid   Ending index of the left subarray.
 * @param right Ending index of the right subarray.
 */
static void merge(vector<int>& data, int left, int mid, int right){
    vector<int> tmp;
    int i = left, j = mid +1;

    while (i <= mid && j <= right) {
        if (data[i] <= data[j]) tmp.push_back(data[i++]);
        else tmp.push_back(data[j++]);
    }

    while ( i <= mid) tmp.push_back(data[i++]);
    while (j <= right) tmp.push_back(data[j++]);

    for( int k = 0; k < tmp.size(); ++k){
        data[left + k] = tmp[k];
    }
}

/**
 * @brief Recursively divides and sorts a subarray using Merge Sort.
 *
 * Splits the subarray @p data[left..right] at its midpoint, recursively
 * sorts each half, then merges the two sorted halves via merge().
 *
 * @param data  Reference to the vector being sorted.
 * @param left  Starting index of the subarray to sort.
 * @param right Ending index of the subarray to sort.
 */

static void merge_sort_helper(vector<int>& data, int left, int right) {
    if(left >= right) return;
    int mid = left + (right - left) / 2;
    merge_sort_helper(data, left, mid);
    merge_sort_helper(data, mid+1, right);
    merge(data, left, mid, right);
}

/**
 * @brief Sorts a vector of integers in ascending order using Merge Sort.
 *
 * Entry point for the Merge Sort algorithm. Guarantees O(n log n) time
 * complexity in all cases. This is a stable sort,
 * preserving the relative order of equal elements. Requires O(n) auxiliary
 * space for the temporary merge buffer.
 *
 * @param data Reference to the vector to be sorted. Modified in place.
 */
void merge_sort(vector<int>& data){
    if(!data.empty()){
        merge_sort_helper(data, 0, static_cast<int>(data.size() - 1));
    }
}