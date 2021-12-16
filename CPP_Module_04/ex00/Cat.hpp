/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:10:55 by adelille          #+#    #+#             */
/*   Updated: 2021/12/16 18:12:15 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat &src);
		Cat	&operator=(const Cat &rhs);
		virtual ~Cat(void);

		virtual void	makeSound(void) const;
};

std::ostream & operator<<(std::ostream &o, const Cat &src);

#endif
