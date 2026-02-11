cmake_minimum_required(VERSION 3.15)
project(SortingPerformanceAnalyzer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-O2")

include_directories(include)

add_executable(benchmark
    main.cpp
    src/bubble_sort.cpp
    src/insertion_sort.cpp
    src/merge_sort.cpp
    src/quick_sort.cpp
    src/dataset_generator.cpp
    src/benchmark.cpp
)
