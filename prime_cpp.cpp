#include <iostream>
#include <vector>
#include <cmath>
#include <chrono>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= std::sqrt(n); ++i)
        if (n % i == 0) return false;
    return true;
}

int main() {
    using namespace std::chrono;
    auto start = high_resolution_clock::now();

    std::vector<int> primes;
    for (int i = 1; i <= 1000000; ++i)
        if (isPrime(i)) primes.push_back(i);

    auto end = high_resolution_clock::now();
    duration<double> elapsed = end - start;

    std::cout << "Found " << primes.size() << " primes.\n";
    std::cout << "Time taken: " << elapsed.count() << " seconds\n";

    return 0;
}
