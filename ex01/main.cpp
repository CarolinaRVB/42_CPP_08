/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 23:38:35 by crebelo-          #+#    #+#             */
/*   Updated: 2024/12/05 12:08:24 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


void    testSpan(Span& sp, bool test_bounds) {
    if (test_bounds) {
        try {
            sp.addNumber(10);
        }
        catch (std::exception &e) {
            std::cout << "Exception caught: " << e.what() << "\n";
        }
    }
    
    try {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << "\n";
    }
    try {
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << "\n";
    }
}

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    testSpan(sp, true);


    Span sp2 = Span(5);
    sp2.addNumber(6);
    testSpan(sp2, false);

    
    std::cout << "\nTesting addRange function: \n";
    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    sp2.addRange(1, lst);
    sp2.printSpan();
    return 0 ;
}