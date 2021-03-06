/*
Dummy operation that uses a lot of CPU, but very little memory.

Used as a control for the parallel version, which should me scalably faster.
*/

#include "common.hpp"
#include "cpu_bound.hpp"

int main() {
    unsigned int i;
    unsigned int nThreads = std::thread::hardware_concurrency();
    std::vector<uint64_t> ios(nThreads);
    for (i = 0; i < nThreads; ++i)
        ios[i] = i;
    for (i = 0; i < nThreads; ++i)
        cpu_bound(&ios[i], nIters);
    for (i = 0; i < nThreads; ++i)
        std::cout << ios[i] << '\n';
}
