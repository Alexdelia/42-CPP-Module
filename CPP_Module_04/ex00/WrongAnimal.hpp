/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:14:18 by adelille          #+#    #+#             */
/*   Updated: 2021/12/16 18:26:24 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <typeinfo>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const std::string &type);
		WrongAnimal(const WrongAnimal &src);
		virtual ~WrongAnimal(void);
		
		WrongAnimal & operator=(const WrongAnimal &rhs);

		void	makeSound(void) const;
		
		std::string	getType(void) const;
		void		setType(const std::string &type);

	protected:
		std::string	_type;
};

std::ostream &operator<<(std::ostream &o, WrongAnimal const &src);

#endif
