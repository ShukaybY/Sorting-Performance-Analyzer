/**
 * @file benchmark.h
 * @brief Declaration of the sorting algorithm benchmarking utility.
 *
 * Provides a generic timing harness for measuring the average execution
 * time of any sorting function that operates on a vector<int>.
 */

#ifndef BENCHMARK_H
#define BENCHMARK_H

#include <vector>
#include <functional>

double benchmark(std::function<void(std::vector<int>&)> sortFunc, const std::vector<int>& dataset, int runs = 5);

#endif