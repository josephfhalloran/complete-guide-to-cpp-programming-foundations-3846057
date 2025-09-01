// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Joseph Halloran

#include <iostream>
#include <cstdint>

int main(){
    float target_x;
    int32_t sprite_x;
    u_int32_t player_x;

    target_x = -123.45;
    sprite_x = target_x;
    player_x = static_cast<int32_t>(sprite_x);

    std::cout << "target_x (float): " << target_x << std::endl;
    std::cout << "sprite_x (int32_t): " << sprite_x << std::endl;
    std::cout << "player_x (u_int32_t): " << static_cast<int32_t>(sprite_x) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
