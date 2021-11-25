/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:49:30 by adelille          #+#    #+#             */
/*   Updated: 2021/11/25 20:36:38 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_CLASS_HPP
# define BOOK_CLASS_HPP

# include "contact.class.hpp"

class book
{
	public:
		book(void);
		~book(void);

		void	search_contact(void);

	private:
		contact	_contact[8];
		int		_nb_contact;
};

#endif
