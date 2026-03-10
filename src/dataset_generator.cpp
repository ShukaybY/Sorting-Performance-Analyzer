#include "dataset_generator.h"
#include <random>
#include <algorithm>

using namespace std;

/**
 * @brief Generates a dataset of random integers with a specified ordering.
 *
 * Produces a vector of @p size integers drawn uniformly from [1, 1,000,000]
 * using a Mersenne Twister RNG seeded with a fixed value (49) for
 * reproducibility. The resulting data is then arranged according to
 * @p type:
 *
 * - **Dataset_type::Random**      — Values left in their generated order.
 * - **Dataset_type::Sorted**      — Values sorted in ascending order.
 * - **Dataset_type::Reverse**     — Values sorted in descending order.
 * - **Dataset_type::NearlySorted**— Ascending order with ~5% of elements
 *                                   swapped to introduce controlled disorder.
 *
 * @param size Number of integers to generate.
 * @param type Ordering characteristic of the returned dataset.
 *             Defaults to random if an unrecognised value is passed.
 * @return A vector<int> of length @p size with the requested ordering.
 */

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



