#include <iostream>
#include <random>
#include <chrono> // for std::chrono::system_clock

int findRandomIndex(int startIndex, int endIndex) {
    // Seed the random number generator with the current time
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed);
    
    // Define the distribution for the range [startIndex, endIndex]
    std::uniform_int_distribution<int> distribution(startIndex, endIndex);
    
    // Generate a random index
    return distribution(gen);
}

int main() {
    int startIndex = 1;
    int endIndex = 8;
    
    int randomIndex = findRandomIndex(startIndex, endIndex);
    
    std::cout << "Random index between " << startIndex << " and " << endIndex << ": " << randomIndex << std::endl;
    
    return 0;
}
