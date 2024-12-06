/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:29:47 by crebelo-          #+#    #+#             */
/*   Updated: 2024/12/05 12:01:55 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) {
    _span.reserve(N);
}

/*
    Here the program is calling the copy assignement operator of std::vector
    which performs a deep copy.
*/
Span::Span(const Span& obj) {
    _span = obj._span;
}

Span::~Span() {
}

Span& Span::operator=(const Span& span) {
    if (this == &span) return *this;

    _span = span._span;
    return *this;
}

void    Span::addNumber(int n) {
    if (_span.size() >= _span.capacity()) {
        throw std::overflow_error("Span is full.");
    }
    _span.push_back(n);
}

int     Span::shortestSpan() {
    
    if (_span.size() < 2)
        throw std::length_error("Span vector too short.") ;
    
    std::vector<int> copy = _span;
    std::sort(copy.begin(), copy.end());
    
    int shortest = copy[1] - copy[0];
    for (unsigned int i = 2; i < copy.capacity(); i++) {
        if (copy[i] - copy[i - 1] < shortest)
            shortest = copy[i] - copy[i - 1];
    }

    return shortest;
}

int     Span::longestSpan() {
    if (_span.size() < 2)
        throw std::length_error("Span vector too short.") ;
    
    std::vector<int> copy = _span;
    std::sort(copy.begin(), copy.end());
    
    return (copy.back() - copy.front());
}

void    Span::addRange(unsigned int pos, const std::list<int> lst) {
  
    if (pos > _span.size() || pos + lst.size() > _span.capacity())
        throw std::out_of_range("Position for insertion out of bounds.");
    
    std::vector<int>::iterator iter = _span.begin() + pos;
    _span.insert(iter, lst.begin(), lst.end());
}

void    Span::printSpan() const {
    for (unsigned int i = 0; i < _span.size(); i++) {
        std::cout << "Span member: " << _span[i] << "\n";
    }
}
