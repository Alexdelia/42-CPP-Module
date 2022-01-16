/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:32:44 by adelille          #+#    #+#             */
/*   Updated: 2022/01/16 19:09:35 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <cstdlib>
# include <algorithm>

class Span
{
	public:
		class full_exception : public std::exception
		{
			public:
				char const *what() const throw();
		};
		class empty_exception : public std::exception
		{
			public:
				char const *what() const throw();
		};

		Span(unsigned int N);
		Span(const Span &src);
		~Span();

		Span	&operator=(const Span &rhs);
		
		void	addNumber(int n);
		void	addNumbers(std::vector<int>::const_iterator begin,
					std::vector<int>::const_iterator end);

		int		shortestSpan(void) const;
		int		longestSpan(void) const;

	private:
		Span(void);
		unsigned int		_N;
		std::vector<int>	_array;
};

#endif
