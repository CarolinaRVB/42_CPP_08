/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:32:23 by crebelo-          #+#    #+#             */
/*   Updated: 2024/12/05 16:50:14 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

/*
    The objective is to improve the container std::stack which doesn't
    have iterators, since it doesn't allow direct access to it's elements.
    However the std::stack uses an underlying container that has iterators that 
    we can access.
*/
template <typename T>
class MutantStack : public std::stack<T> {
    private:
    
    public:
        MutantStack() : std::stack<T>(){}
        ~MutantStack() {};
        MutantStack(const MutantStack& obj) : std::stack<T>(obj) {}
        MutantStack& operator=(const MutantStack& obj) {
            if (this == &obj) return *this;
            std::stack<T>::operator=(obj);
            return this;
        }
        
        /*
            This is an alias for the type of iterator that the underlying container uses
            We're creating the iterator member

            Compiler doesn't know if 'std::stack<T>::container_type::iterator'
            is a type (what we want) or a value or static member, because it's a dependent type (of T). 
            Hence we have to define it as a typename
        */
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() {
            return std::stack<T>::c.begin();
        }
        iterator end() {
            return std::stack<T>::c.end();
        }
        
};

#endif