#include "sorting_algorithms.h"
#include "benchmark.h"
#include <numeric>
#include <functional>
#include <chrono>

using namespace std;

double benchmark(function<void(vector<int>&)> sortFunc, const vector<int>& dataset, int runs){
    vector<double> count;

    for(int i = 0; i < runs; ++i){
        vector<int> copy = dataset;

        auto start = chrono::high_resolution_clock::now();
        sortFunc(copy);
        auto end = chrono::high_resolution_clock::now();


        chrono::duration<double, milli> elapsed = end - start;
        count.push_back(elapsed.count());
    }

    return accumulate(count.begin(), count.end(), 0.0) / runs;
}