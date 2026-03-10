/**
 * @file dataset_generator.h
 * @brief Declaration of the test dataset generation utility.
 *
 * Defines the Dataset_type enumeration and the generate_dataset() factory
 * function used to produce reproducible integer vectors with varying
 * ordering characteristics for sorting benchmarks.
 */

#ifndef DATASET_GENERATOR_H
#define DATASET_GENERATOR_H

#include <cstddef>
#include <vector>

enum class Dataset_type {
    Random,
    Sorted,
    Reverse,
    NearlySorted
};

std::vector<int> generate_dataset(size_t size, Dataset_type type);

#endif 
