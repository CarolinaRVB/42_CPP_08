#include "easyfind.hpp"
#include <algorithm>
#include <vector>
#include <deque>
#include <list>
/*
    Containers:
        1) std::vector is a sequence container that encapsulates dynamic size arrays.


    Note:
    iterating associative containers require handling key-value pairs.

    it is not directly possible to iterate through container adapters 
    (like std::stack, std::queue, and std::priority_queue) because 
    these containers are specifically designed to provide restricted interfaces 
    that enforce specific behaviors (e.g., LIFO for std::stack or FIFO for std::queue).
    They do not expose iterators or allow direct access to their elements.
*/
template <typename T>
void    show_results(T &container) {
    typename T::iterator iter;
    try {
        iter = easyfind(container, 3);
        int index = std::distance(container.begin(), iter);
        std::cout << "Found value at: " << index << "\n";
    }
    catch (std::exception &e) {
        std::cout << "Error: value does not exist\n";
    }

    try {
        iter = easyfind(container, -5); 
        int index = std::distance(container.begin(), iter);
        std::cout << "Found value at: " << index << "\n";
    }
    catch (std::exception &e) {
        std::cout << "Error: value does not exist\n";
    }
    std::cout << "\n";
}


int main() {
    std::cout << "Testing Vector container: \n";
    std::vector<int> intVector;
    intVector.push_back(3);
    intVector.push_back(2);
    intVector.push_back(3);
    show_results(intVector);

    std::cout << "Testing Deque container: \n";
    std::deque<int> intDeque;
    intDeque.push_back(3);
    intDeque.push_back(2);
    intDeque.push_back(3);
    show_results(intDeque);

    std::cout << "Testing List container: \n";
    std::list<int> intList;
    intList.push_front(3);
    intList.push_front(2);
    intList.push_front(3);
    show_results(intList);



}
