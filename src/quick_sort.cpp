#include "sorting_algorithms.h"

using namespace std;

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

static void quick_sort_helper(vector<int>& data, int low, int high) {
    if(low < high){
        int pi = partition(data, low, high);
        quick_sort_helper(data, low, pi - 1);
        quick_sort_helper(data, pi + 1, high);
    }
}

void quick_sort(vector<int>& data) {
    if(!data.empty()){
        quick_sort_helper(data, 0, static_cast<int>(data.size()-1));
    }
}