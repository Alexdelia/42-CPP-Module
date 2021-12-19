/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:06:19 by adelille          #+#    #+#             */
/*   Updated: 2021/12/16 21:23:27 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define SIZE	10

int	main(void)
{
	{
		std::cout << "copy test" << std::endl;

		Cat	a;
		Cat	b;
		Cat	c(a);

		b = a;

		std::cout << std::endl
			<< a.getBrain() << std::endl
			<< b.getBrain() << std::endl
			<< c.getBrain() << std::endl
			<< std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "loop test" << std::endl;
		Animal	*a[SIZE];
		int		i;

		i = -1;
		while (++i < SIZE / 2)
			a[i] = new Dog();
		i--;
		while (++i < SIZE)
			a[i] = new Cat();
		std::cout << std::endl;

		while (--i >= 0)
			a[i]->makeSound();
		std::cout << std::endl;

		while (++i < SIZE)
			delete a[i];
	}
	return (0);
}
