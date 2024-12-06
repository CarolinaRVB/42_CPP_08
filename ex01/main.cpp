/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 23:38:35 by crebelo-          #+#    #+#             */
/*   Updated: 2024/12/06 12:07:33 by crebelo-         ###   ########.fr       */
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

    Span sp2 = Span(3);
    sp2.addNumber(6);
    //testSpan(sp2, false);

    std::cout << "\nTesting addRange function: \n";
    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    try {
        sp2.addRange(1, lst);

    }
    catch (std::exception &e) {
        std::cout << e.what() << "\n";
    }
    sp2.printSpan();

    std::cout << "\nspTest1, Testing copy constructor: \n";
    Span spTest1(sp);
    spTest1.printSpan();

    std::cout << "\nspTest2, Testing copy assignement: \n";
    Span spTest2(5);
    spTest2 = sp;
    spTest2.printSpan();

/*
    std::cout << "\nTesting Span with a large range of number: \n";
    Span sp3(1000000);
    std::list<int> lst2;
    for (int i = 0; i < 999999; i++) {
        lst2.push_back(i);
    }
    sp3.addRange(0, lst2);
    sp3.printSpan();
    return 0 ;
*/
}