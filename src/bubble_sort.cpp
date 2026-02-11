#include "sorting_algorithms.h"

using namespace std;

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
