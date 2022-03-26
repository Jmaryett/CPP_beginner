#include "Bureaucrat.hpp"

int		main(void)
{
	std::cout << "TRYING GOOD VALUES" << std::endl;
	std::cout << std::endl;

	Bureaucrat	test(5);

	std::cout << test << std::endl;
	try
	{
		test.increaseGrade(4);
		std::cout << test << std::endl;
		test.decreseGrade(9);
		std::cout << test << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "TRYING BAD VALUES" << std::endl;
	std::cout << std::endl;

	Bureaucrat	test2(test);

	std::cout << test2 << std::endl;
	try
	{
		test2.increaseGrade(100);
		std::cout << test2 << std::endl;
		test2.decreseGrade(56);
		std::cout << test2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "TRYING BAD VALUES in constructor" << std::endl;
	try
	{
		Bureaucrat	tesconstt3(160);
		Bureaucrat	test4(-20);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "TRYING GOOD VALUES in constructor" << std::endl;
	try
	{
		Bureaucrat	test5 = test2;
		std::cout << "Test 5 is" << test5 << std::endl;
		Bureaucrat	test6(test5);
		std::cout << "Test 6 is" << test6 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
