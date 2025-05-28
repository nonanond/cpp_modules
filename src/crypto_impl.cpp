module crypto;

#include <string>
#include <numeric>

std::string simple_hash(const std::string& input) {
    int sum = std::accumulate(input.begin(), input.end(), 0);
    return "hash" + std::to_string(sum % 97);
}

