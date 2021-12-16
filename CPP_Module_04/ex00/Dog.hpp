/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:10:55 by adelille          #+#    #+#             */
/*   Updated: 2021/12/16 18:20:25 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog &src);
		Dog	&operator=(const Dog &rhs);
		virtual ~Dog(void);

		virtual void	makeSound(void) const;
};

std::ostream & operator<<(std::ostream &o, const Dog &src);

#endif
