# Sorting & Performance Analyzer

A C++ project that benchmarks common sorting algorithms, measures their performance, and exports datasets and results for analysis. Perfect for showcasing skills in C++ programming, algorithms, file I/O, and performance measurement.

[![C++](https://img.shields.io/badge/C++17-blue?logo=c%2B%2B)](https://isocpp.org/) 
[![Build](https://img.shields.io/badge/build-passing-brightgreen)]()
[![License](https://img.shields.io/badge/license-MIT-green)]()

## Table of Contents

- [Overview](#overview)  
- [Features](#features)  
- [Project Structure](#project-structure)  
- [Getting Started](#getting-started)  
- [Usage](#usage)  
- [Example Output](#example-output)    
- [Skills Demonstrated](#skills-demonstrated)  
- [License](#license) 


## Overview

The **Sorting & Performance Analyzer** allows users to:

- Compare multiple sorting algorithms on the same dataset.  
- Measure execution time in milliseconds for each algorithm.  
- Inspect the original and sorted datasets.  
- Export datasets and benchmark results to CSV.  


## Features

- Implements **Bubble Sort, Insertion Sort, Merge Sort, and Quick Sort**  
- **Dataset generator** with Random, Nearly Sorted, and Reversed options  
- **Benchmarking utility** using `std::chrono`  
- **CSV export** of datasets and benchmark results  
- Clean **project structure** with `src/` and `include/`  
- Easy to extend with additional algorithms or dataset types  


## Project Structure

```bash
Sorting-Performance-Analyzer/
├── CMakeLists.txt
├── main.cpp
├── include/
│   ├── benchmark.h
│   ├── sorting_algorithms.h
│   └── dataset_generator.h
├── src/
│   ├── benchmark.cpp
│   ├── bubble_sort.cpp
│   ├── insertion_sort.cpp
│   ├── merge_sort.cpp
│   ├── quick_sort.cpp
│   └── dataset_generator.cpp
└── build/
```

## Getting Started

### Prerequisites

- **C++ compiler** (supports C++17)  
- **CMake**  

### Build instructions

```bash
git clone <your-repo-url>
cd SrtAlg
mkdir build
cd build
cmake ..
make
./benchmark
```

## Usage

- Generates a dataset (default: 2000 random numbers)
- Prints a sample of the original dataset
- Runs each sorting algorithm on a copy of the dataset
- Prints execution time
- Exports the full dataset to dataset.csv

## Example output

Dataset written to dataset.csv
Bubble sort: 3.12864ms 
Insertion sort: 0.786625ms 
Merge sort: 0.511158ms 
Quick sort: 0.113533ms 

## Skills Demonstrated

- C++17 programming (std::function, lambdas, chrono)
- Sorting algorithm implementation
- File I/O and CSV export
- Modular project structure (include/ and src/)
- Benchmarking and performance measurement
- CMake build system usage

## License

- This project is licensed under the MIT License — free to use, modify, and share.