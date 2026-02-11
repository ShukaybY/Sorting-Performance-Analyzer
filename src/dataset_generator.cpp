#include "dataset_generator.h"
#include <random>
#include <algorithm>

using namespace std;

vector<int> generate_dataset(size_t size, Dataset_type type){
    vector<int> data(size);
    mt19937 rng(49);
    uniform_int_distribution<int> dist(1,1'000'000);


    for( auto& x : data) x = dist(rng);

    switch (type) {
        case Dataset_type::Sorted:
            sort(data.begin(), data.end());
            break;

        case Dataset_type::Reverse:
            sort(data.begin(), data.end(), greater<>());
            break;

        case Dataset_type::NearlySorted:
            sort(data.begin(), data.end());
            for( size_t i = 0; i < size / 20; ++i){
                swap(data[i], data[size -i -1]);
            }
            break;

        default:
            break;
    }

    return data;
    
}



