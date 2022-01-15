/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:14:18 by adelille          #+#    #+#             */
/*   Updated: 2022/01/15 12:44:15 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstring>
# include <iostream>

template <typename T>
void	iter(T *arr, size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
		f(arr[i]);
}

template <typename T>
void	iter(T *arr, size_t size, void (*f)(const T &))
{
	for (size_t i = 0; i < size; i++)
		f(arr[i]);
}

template <typename T>
void	print(T *arr, size_t size)
{
	for (size_t i = 0; i < size - 1; i++)
		std::cout << arr[i] << " ";
	std::cout << arr[size - 1] << std::endl;
}

#endif
