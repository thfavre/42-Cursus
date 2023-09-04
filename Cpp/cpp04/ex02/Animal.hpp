#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	protected:
	std::string	type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &other);
		virtual ~Animal();
		Animal	&operator=(const Animal &other);

		virtual void	makeSound() const = 0;
		std::string		getType() const;
};

#endif
