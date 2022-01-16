/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:37:01 by adelille          #+#    #+#             */
/*   Updated: 2022/01/16 19:21:39 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

char const	*Span::full_exception::what() const throw() 
{
	return ("Span is full");
}

char const	*Span::empty_exception::what() const throw() 
{
	return ("Can't create a Span of size 0");
}

Span::Span(unsigned int N) : _N(N)
{
	if (N == 0)
		throw Span::empty_exception();
	this->_array = std::vector<int>();
}

Span::Span(void) : _N(1)
{
	this->_array = std::vector<int>();
}

Span::Span(const Span &src)
{
	*this = src;
}

Span::~Span(void)
{

}

Span	&Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
		this->_array = rhs._array;
	}
	return (*this);
}

int Span::shortestSpan(void) const
{
	if (this->_array.size() < 2)
		return (0);

	std::vector<int> copy = this->_array;

	std::sort(copy.begin(), copy.end());

	std::vector<int>::const_iterator min =
		std::min_element(copy.begin(), copy.end());

	return (*(min + 1) - *min);
}

int Span::longestSpan(void) const 
{
	if (this->_array.size() < 2)
		return (0);

	std::vector<int> copy = this->_array;
	
	std::sort(copy.begin(), copy.end());

	return (*(copy.end() - 1) - *(copy.begin()));
}

void Span::addNumber(int n)
{
	if (this->_array.size() < this->_N)
		this->_array.push_back(n);
	else
		throw full_exception();
}

void Span::addNumbers(std::vector<int>::const_iterator begin,
		std::vector<int>::const_iterator end)
{
	while (begin < end)
	{
		if (this->_array.size() == this->_N)
			throw full_exception();
		this->_array.push_back(*begin);
		begin++;
	}
}
