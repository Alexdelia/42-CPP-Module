/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:14:18 by adelille          #+#    #+#             */
/*   Updated: 2022/01/04 14:11:31 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <typeinfo>

# include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria(void);
		AMateria(const std::string &type);
		AMateria(const AMateria &src);
		virtual ~AMateria(void);
		
		AMateria & operator=(const AMateria &rhs);

		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target) = 0;

		const std::string	&getType(void) const;

	protected:
		std::string	_type;
};

//std::ostream &operator<<(std::ostream &o, AMateria const &src);

#endif
