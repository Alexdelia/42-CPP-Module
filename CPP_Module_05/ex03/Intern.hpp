/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:14:18 by adelille          #+#    #+#             */
/*   Updated: 2022/01/14 18:50:05 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
//# include <typeinfo>
# include <exception>

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

# define NB_FORM	3

typedef struct s_type
{
	std::string	name;
	Form		*(*f)(const std::string &target);
}				t_type;

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &src);
		virtual ~Intern(void);
		
		Intern	&operator=(const Intern &rhs);

		Form	*makeForm(const std::string form, const std::string target) const;
};

// std::ostream	&operator<<(std::ostream &o, Intern const &src);

#endif
