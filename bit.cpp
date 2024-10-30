#include <bitset>
#include <iostream>

int main()
{
    std::bitset<8> bits{ 0b0000'0101 };
    bits.flip(); //dao bit
    std::cout << "All the bits: " << bits << '\n';


    std::bitset<4> x { 0b1100 };
    std::cout << x << '\n';
    std::cout << (x >> 1) << '\n'; // shift right by 1, yielding 0110
    std::cout << (x << 1) << '\n'; // shift left by 1, yielding 1000


    std::cout << ~std::bitset<4>{ 0b0100 } << '\n'; //bitwise NOT //1011
    std::cout << (std::bitset<4>{ 0b0101 } | std::bitset<4>{ 0b0110 }) << '\n'; //bitwise OR //0111
    std::cout << (std::bitset<4>{ 0b0101 } & std::bitset<4>{ 0b0110 }) << '\n'; //bitwise AND //0100
    std::cout << (std::bitset<4>{ 0b0101 } ^ std::bitset<4>{ 0b0110 }) << '\n'; //bitwise XOR //0011

}
