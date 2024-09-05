#include <iostream>
#include <vector>
#include <deque>
#include "easyfind.hpp"

int main()
{
    std::vector<int> intVector;
    intVector.push_back(1);
    intVector.push_back(2);
    intVector.push_back(3);
    intVector.push_back(4);
    intVector.push_back(5);

    std::deque<int> intDeque;
    intDeque.push_back(6);
    intDeque.push_back(7);
    intDeque.push_back(8);
    intDeque.push_back(9);
    intDeque.push_back(10);

    try {
        std::cout << *easyfind(intVector, 3) << std::endl; 
        std::cout << *easyfind(intVector, 6) << std::endl;  
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl; 
    }

    try {
        std::cout << *easyfind(intDeque, 8) << std::endl;  
        std::cout << *easyfind(intVector, 11) << std::endl; 
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;  
    }
}
