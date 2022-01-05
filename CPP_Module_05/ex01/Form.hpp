/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:14:18 by adelille          #+#    #+#             */
/*   Updated: 2022/01/05 08:13:31 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
//# include <typeinfo>
# include <exception>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(const std::string &name, const int &grade_sign, const int &grade_exec);
		Form(const Form &src);
		virtual ~Form(void);
		
		Form	&operator=(const Form &rhs);

		void	beSigned(const Bureaucrat &b);

		std::string		getName(void) const;
		bool			getSign(void) const;
		unsigned int	getGradeSign(void) const;
		unsigned int	getGradeExec(void) const;

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};

	private:
		Form(void);
		const std::string	_name;
		bool				_sign;
		const int			_grade_sign;
		const int			_grade_exec;
};

std::ostream	&operator<<(std::ostream &o, Form const &src);

#endif
