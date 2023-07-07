#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <istream>

class Zombie
{
	std::string	_name;

public:
	Zombie(/* args */);
	~Zombie();
	void	announce(void);
	void	addName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
