/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:10:55 by adelille          #+#    #+#             */
/*   Updated: 2021/12/16 21:09:07 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <typeinfo>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain &src);
		Brain	&operator=(const Brain &rhs);
		virtual	~Brain(void);

	protected:
		std::string	_ideas[100];
};

#endif
