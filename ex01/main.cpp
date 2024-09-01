#include "iter.hpp"

void incrementInt(int& x) {
    x += 1;
}

int main() {
    
    int intArray[5] = {1, 2, 3, 4, 5};

    ::iter(intArray, 5, incrementInt);
    std::cout << std::endl;

	for (int i = 0; i < 5; i++)
		std::cout << intArray[i] << std::endl;

	return 0;
}









