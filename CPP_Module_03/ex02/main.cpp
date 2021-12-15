/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:50:59 by adelille          #+#    #+#             */
/*   Updated: 2021/12/14 18:11:50 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int	main(void)
{
	ClapTrap	alex("alex");
	ScavTrap	scav("scav");
	FlagTrap	flag("flag");

	std::cout << alex.getName() << std::endl;
	alex.attack("bob");
	alex.takeDamage(4);
	alex.beRepaired(6);
	alex.setAttackDamage(21);
	alex.attack("bob");
	alex.takeDamage(42);
	
	std::cout << scav.getName() << std::endl;
	scav.attack("bob");
	scav.takeDamage(4);
	scav.beRepaired(6);
	scav.setAttackDamage(21);
	scav.attack("bob");
	scav.takeDamage(42);
	scav.guardGate();
	
	std::cout << flag.getName() << std::endl;
	flag.attack("bob");
	flag.takeDamage(4);
	flag.beRepaired(6);
	flag.setAttackDamage(21);
	flag.attack("bob");
	flag.takeDamage(42);
	flag.highFivesGuys();
	return (0);
}
