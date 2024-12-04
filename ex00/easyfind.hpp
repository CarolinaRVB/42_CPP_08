#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
/*
    - iterators can be used to access elements and how they allow algorithms to work on 
    containers without needing to know their internal structure.
*/
template <typename T>
typename T::iterator easyfind(T &container, int val) {
    typename T::iterator iter = std::find(container.begin(), container.end(), val);
    if (iter == container.end())
        throw std::exception();

    return iter;
    // int index = std::distance(container.begin(), iter);

    // return index;
}

#endif