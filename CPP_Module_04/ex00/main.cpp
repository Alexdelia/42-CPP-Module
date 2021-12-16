/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:06:19 by adelille          #+#    #+#             */
/*   Updated: 2021/12/16 18:17:29 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal	*meta = new Animal();
	const Animal	*c = new Cat();
	std::cout << std::endl;

	c->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	delete c;
	delete meta;
	return (0);
}
