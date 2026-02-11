#include "sorting_algorithms.h"
#include "dataset_generator.h"
#include "benchmark.h"
#include <iostream>
#include <functional>
#include <fstream>

using namespace std;

void write_dataset_csv(const vector<int>& data, const string& filename){
    ofstream file(filename);

    if (!file.is_open()) {
        cerr << "Error: File could not open" << filename << endl;
    }
    for (size_t i = 0; i < data.size(); ++i){
        file << data[i];
        if (i != data.size() -1){
                file << ",";
        }
    }
    file << "\n";
    file.close();
}

int main() {
    vector<int> dataset = generate_dataset(2000, Dataset_type::Random);

    write_dataset_csv(dataset, "dataset.csv");
    cout << "Dataset written to dataset.csv\n";

    cout << "Bubble sort: " << benchmark(bubble_sort, dataset) << "ms \n";

    cout << "Insertion sort: " << benchmark(insertion_sort, dataset) << "ms \n";

    cout << "Merge sort: " << benchmark(merge_sort, dataset) << "ms \n";

    cout << "Quick sort: " << benchmark(quick_sort, dataset) << "ms \n";

    return 0;

}
