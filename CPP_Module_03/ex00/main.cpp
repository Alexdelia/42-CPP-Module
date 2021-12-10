/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:50:59 by adelille          #+#    #+#             */
/*   Updated: 2021/12/10 15:53:58 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	alex("alex");

	std::cout << alex.getName() << std::endl;
	alex.attack("bob");
	alex.takeDamage(4);
	alex.beRepaired(6);
	alex.setAttackDamage(21);
	alex.attack("bob");
	alex.takeDamage(42);
	return (0);
}
