/**
 * @file sorting_algorithms.h
 * @brief Declarations of all sorting algorithm implementations.
 *
 * Provides a unified include for the four sorting algorithms in this project.
 * All functions sort a vector<int> in ascending order and operate in place.
 */

#ifndef SORTING_ALGORITHMS_H
#define SORTING_ALGORITHMS_H

#include <vector>

void bubble_sort(std::vector<int>& data);
void insertion_sort(std::vector<int>& data);
void merge_sort(std::vector<int>& data);
void quick_sort(std::vector<int>& data);

#endif