/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 23:34:23 by crebelo-          #+#    #+#             */
/*   Updated: 2024/12/04 23:44:52 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

template <typename T>
class Span {
    private:
        T *_N;
    
    public:
        Span();
        Span(unsigned int N);
        ~Span();

        void    addÑumber(int n);
        int     shortestSpan();
        int     longestSpan();
          
};

#endif