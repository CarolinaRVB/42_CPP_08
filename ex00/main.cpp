#include "easyfind.hpp"
#include <algorithm>
#include <vector>
#include <string>

/*
    Conntainers:
        1) std::vector is a sequence container that encapsulates dynamic size arrays.

*/
int main() {
    std::vector<int> stringVector;

    stringVector.push_back(3);
    stringVector.push_back(2);
    stringVector.push_back(3);

    std::vector<int>::iterator iter;
    try {
        iter = easyfind(stringVector, 3); 
        int index = std::distance(stringVector.begin(), iter);
        std::cout << "Found value at: " << index << "\n";
    }
    catch (std::exception &e) {
        std::cout << "Error: value does not exist\n";
    }

    try {
        iter = easyfind(stringVector, -5); 
        int index = std::distance(stringVector.begin(), iter);
        std::cout << "Found value at: " << index << "\n";
    }
    catch (std::exception &e) {
        std::cout << "Error: value does not exist\n";
    }

}
