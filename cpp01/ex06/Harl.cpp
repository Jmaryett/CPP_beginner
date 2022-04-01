#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]\n";
	std::cout << "I love having extra bacon for ";
	std::cout << "my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "[INFO]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put ";
	std::cout << "enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for ";
	std::cout << "years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "[ERROR]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	std::string	phrases[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*funcPtr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (phrases[i] == level)
		{
			switch (i) {
				case 0: (this->*funcPtr[0])();
				case 1: (this->*funcPtr[1])();
				case 2: (this->*funcPtr[2])();
				case 3: (this->*funcPtr[3])();
			}
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}