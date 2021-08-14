//
//  main.cpp
//  7.16(Dice_Rolling)
//
//  Created by Sabuhi Ibrahimov on 08.03.21.
//

#include <iostream>
#include <array>
#include <ctime>
#include <random>

int main() {
    std::default_random_engine engine(static_cast<int>(time(0)));
    std::uniform_int_distribution<int> randomDice(1, 6);
    const size_t size = 11;
    size_t currentIndex = 0;
    int sum = 0;
    std::array<int, size> sums{};
    for(unsigned int i = 1; i <= 36000; ++i){
        sum = randomDice(engine) + randomDice(engine);
        currentIndex = sum - 2;
        ++sums[currentIndex];
    }
    for(size_t i = 0; i < sums.size(); ++i){
        std::cout << "Possible sum " << i+2 << " - " << sums[i] << std::endl;
    }
}
