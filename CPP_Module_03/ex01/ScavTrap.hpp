/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:26:23 by adelille          #+#    #+#             */
/*   Updated: 2021/12/13 18:24:11 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap &src);
		ScavTrap(const std::string &name);
		virtual ~ScavTrap(void);

		ScavTrap	&operator=(const ScavTrap &rhs);

		virtual void	attack(const std::string &target);
		void			guardGate(void);

		bool			getGuardGate(void) const;
		void			setGuardGate(const bool status);

	private:
		bool	_guard;
};

std::ostream	&operator<<(std::ostream &o, const ScavTrap &i);

#endif
