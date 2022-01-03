/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:14:18 by adelille          #+#    #+#             */
/*   Updated: 2022/01/03 16:26:03 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <typeinfo>

# include "AMateria"

class MateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		
		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria* 	createMateria(std::string const & type) = 0;
};

//std::ostream &operator<<(std::ostream &o, MateriaSource const &src);

#endif
