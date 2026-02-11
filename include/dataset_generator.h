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
