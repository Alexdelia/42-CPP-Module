/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:50:59 by adelille          #+#    #+#             */
/*   Updated: 2021/12/15 18:47:06 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	alex("alex");
	ScavTrap	scav("scav");
	FragTrap	frag("frag");
	DiamondTrap	diamond("diamond");

	std::cout << std::endl << alex.getName() << std::endl;
	alex.attack("bob");
	alex.takeDamage(4);
	alex.beRepaired(6);
	alex.setAttackDamage(21);
	alex.attack("bob");
	alex.takeDamage(42);
	
	std::cout << std::endl << scav.getName() << std::endl;
	scav.attack("bob");
	scav.takeDamage(4);
	scav.beRepaired(6);
	scav.setAttackDamage(21);
	scav.attack("bob");
	scav.takeDamage(42);
	scav.guardGate();
	
	std::cout << std::endl << frag.getName() << std::endl;
	frag.attack("bob");
	frag.takeDamage(4);
	frag.beRepaired(6);
	frag.setAttackDamage(21);
	frag.attack("bob");
	frag.takeDamage(42);
	frag.highFivesGuys();

	std::cout << std::endl << diamond.getName() << std::endl;
	diamond.attack("bob");
	diamond.takeDamage(4);
	diamond.beRepaired(6);
	diamond.setAttackDamage(21);
	diamond.attack("bob");
	diamond.takeDamage(42);
	
	std::cout << std::endl << "DiamondTrap can do both ScavTrap and FragTrap" << std::endl;
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();
	std::cout << std::endl;
	return (0);
}
