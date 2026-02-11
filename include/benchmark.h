#ifndef BENCHMARK_H
#define BENCHMARK_H

#include <vector>
#include <functional>

double benchmark(std::function<void(std::vector<int>&)> sortFunc, const std::vector<int>& dataset, int runs = 5);

#endif