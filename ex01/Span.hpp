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
# include <limits>
# include <list>
# include <algorithm>

class Span {
    private:
        std::vector<int> _span;
        Span();
    
    public:
        Span(unsigned int N);
        Span& operator=(const Span& span);
        ~Span();

        void    addNumber(int n);
        void    addRange(unsigned int pos, const std::list<int> lst);
        int     shortestSpan();
        int     longestSpan();

        void    printSpan() const;
          
};

#endif