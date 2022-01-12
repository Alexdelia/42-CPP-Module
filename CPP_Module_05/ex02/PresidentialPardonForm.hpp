/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:14:18 by adelille          #+#    #+#             */
/*   Updated: 2022/01/12 22:35:00 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
//# include <typeinfo>
# include <exception>

# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(const std::string &_target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		virtual ~PresidentialPardonForm(void);
		
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);

		const Form		&getForm(void) const;
		std::string		getTarget(void) const;
		virtual void	execute(const Bureaucrat &executor) const;

	private:
		PresidentialPardonForm(void);
		std::string	_target;
};

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &src);

#endif
