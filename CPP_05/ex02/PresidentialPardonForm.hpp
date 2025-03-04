#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{

	public :
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
		virtual ~PresidentialPardonForm();

		virtual void		execute(const Bureaucrat &executor) const;
		const std::string	&getTarget() const;
		

	private :
		std::string	_target;
};
