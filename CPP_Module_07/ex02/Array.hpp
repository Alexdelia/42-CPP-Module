/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:16:47 by adelille          #+#    #+#             */
/*   Updated: 2022/01/15 14:32:44 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <iostream>

template <typename T>
class Array
{
	public:
		Array(void);
		Array(const Array &src);
		Array(unsigned int n);
		virtual	~Array();

		Array	&operator=(const Array &src);
		T		&operator[](const unsigned int &i);
		const T	&operator[](const unsigned int &i) const;

		unsigned int	size(void) const;
		T				*getArray(void) const;

	private:
		T				*_arr;
		unsigned int	_size;
};

	template <typename T>
Array<T>::Array(void) : _arr(NULL), _size(0)
{

}

	template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n)
{

}

	template <typename T>
Array<T>::Array(const Array &src) : _arr(NULL), _size(0)
{
	*this = src;
}

	template <typename T>
Array<T>::~Array()
{
	if (this->_arr)
		delete [] this->_arr;
}

	template <typename T>
Array<T>	&Array<T>::operator=(const Array &rhs)
{	
	if (this->_arr)
		delete [] this->_arr;
	this->_arr = new T[rhs.size()];
	this->_size = rhs.size();
	for (unsigned int i = 0; i < this->_size; i++)
		this->_arr[i] = rhs.getArray()[i];

	return (*this);
}

	template <typename T>
T	&Array<T>::operator[](const unsigned int &i)
{
	if (i >= this->_size)
		throw std::exception();
	return (this->_arr[i]);
}

	template <typename T>
const T	&Array<T>::operator[](const unsigned int &i) const
{
	if (i >= this->_size)
		throw std::exception();
	return (this->_arr[i]);
}

	template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_size);
}

	template <typename T>
T	*Array<T>::getArray(void) const
{
	return (this->_arr);
}

#endif
