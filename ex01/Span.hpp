/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 23:34:23 by crebelo-          #+#    #+#             */
/*   Updated: 2024/12/05 12:00:16 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <deque>
# include <limits>
# include <list>
# include <algorithm>

/* 
    Chose std::vector container since it's a dynamic array that provides 
    random access and can reserve blocks of memory.
    Could've used deque as well (efficient for begin and end insertions, but doesn't
    allow reservation of memory blocks)
    List requires iterating to acess element - doesn't provide direct access 
    of elements by index so it wasn't a good choice for this exercise.
*/
class Span {
    private:
        std::vector<int> _span;
        Span();
    
    public:
        Span(unsigned int N);
        Span(const Span& obj);
        Span& operator=(const Span& span);
        ~Span();

        void    addNumber(int n);
        void    addRange(unsigned int pos, const std::list<int> lst);
        int     shortestSpan();
        int     longestSpan();

        void    printSpan() const;
          
};

#endif