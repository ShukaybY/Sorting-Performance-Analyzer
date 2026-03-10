/**
 * @file benchmark.cpp
 * @brief Implementation of the sorting algorithm benchmarking utility.
 *
 * Provides a generic timing harness that measures the average execution time
 * of a sorting function over multiple runs using a fixed input dataset.
 */

#include "sorting_algorithms.h"
#include "benchmark.h"
#include <numeric>
#include <functional>
#include <chrono>

using namespace std;

/**
 * @brief Measures the average execution time of a sorting function.
 *
 * Runs the provided sorting function @p sortFunc a total of @p runs times,
 * each time on a fresh copy of @p dataset. Execution time is measured with
 * high resolution wall clock timing. Returns the mean elapsed time in
 * milliseconds across all runs.
 *
 * @param sortFunc The sorting function to benchmark, accepting a
 *                 non-const reference to a vector<int>.
 * @param dataset  The input data to sort. A copy is made before each run
 *                 so the original is never modified.
 * @param runs     Number of timed repetitions to average over.
 * @return Average execution time of @p sortFunc in milliseconds.
 */

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