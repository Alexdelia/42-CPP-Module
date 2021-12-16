/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:10:55 by adelille          #+#    #+#             */
/*   Updated: 2021/12/16 18:25:14 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat &src);
		WrongCat	&operator=(const WrongCat &rhs);
		virtual ~WrongCat(void);

		void	makeSound(void) const;
};

std::ostream & operator<<(std::ostream &o, const WrongCat &src);

#endif
