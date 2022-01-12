/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:14:18 by adelille          #+#    #+#             */
/*   Updated: 2022/01/12 13:48:22 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
//# include <typeinfo>
# include <exception>

# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(const std::string &name, const int &grade);
		Bureaucrat(const Bureaucrat &src);
		virtual ~Bureaucrat(void);
		
		Bureaucrat	&operator=(const Bureaucrat &rhs);

		void	upGrade(void);
		void	downGrade(void);

		void	signForm(Form &f);
		void	executeForm(const Form &f);

		std::string		getName(void) const;
		unsigned int	getGrade(void) const;

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
		Bureaucrat(void);
		const std::string	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src);

#endif
