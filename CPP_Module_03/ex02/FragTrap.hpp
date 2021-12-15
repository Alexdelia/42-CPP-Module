/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:26:23 by adelille          #+#    #+#             */
/*   Updated: 2021/12/15 18:25:44 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const FragTrap &src);
		FragTrap(const std::string &name);
		virtual ~FragTrap(void);

		FragTrap	&operator=(const FragTrap &rhs);

		void	highFivesGuys(void) const;
};

std::ostream	&operator<<(std::ostream &o, const FragTrap &i);

#endif
