/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:14:18 by adelille          #+#    #+#             */
/*   Updated: 2022/01/04 14:43:28 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <typeinfo>

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(const std::string &name);
		Character(const Character &src);
		~Character();
		
		Character	&operator=(const Character &rhs);
		
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);
		
		const std::string	&getName(void) const;

	private:
		AMateria	*_inventory[4];
		std::string	_name;
};

#endif
