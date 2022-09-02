#include <vector>
#include <cstddef>

namespace DENSE_MULTICUT {

    std::vector<size_t> dense_gaec_flat_index(const size_t n, const size_t d, std::vector<float> features);

    std::vector<size_t> dense_gaec_hnsw(const size_t n, const size_t d, std::vector<float> features);

}
