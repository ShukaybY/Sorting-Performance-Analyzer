#include "sorting_algorithms.h"

using namespace std;

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

static void merge_sort_helper(vector<int>& data, int left, int right) {
    if(left >= right) return;
    int mid = left + (right - left) / 2;
    merge_sort_helper(data, left, mid);
    merge_sort_helper(data, mid+1, right);
    merge(data, left, mid, right);
}

void merge_sort(vector<int>& data){
    if(!data.empty()){
        merge_sort_helper(data, 0, static_cast<int>(data.size() - 1));
    }
}