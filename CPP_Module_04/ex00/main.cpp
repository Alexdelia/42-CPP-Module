/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:06:19 by adelille          #+#    #+#             */
/*   Updated: 2021/12/16 18:08:07 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int	main(void)
{
	const Animal	*meta = new Animal();
	std::cout << std::endl;

	meta->makeSound();
	std::cout << std::endl;

	delete meta;
	return (0);
}
