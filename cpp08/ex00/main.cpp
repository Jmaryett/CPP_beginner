#include "easyfind.hpp"

int main()
{
	std::vector<int> myVector;
	try
	{
		for (int i = 0; i < 10; i++)
			myVector.push_back(i);
		std::vector<int>::iterator ret = easyfind(myVector, 5);
		std::cout << "ret = " << *ret << "\n";
		ret = easyfind(myVector, 1);
		std::cout << "ret = " << *ret << "\n";
		ret = easyfind(myVector, 9);
		std::cout << "ret = " << *ret << "\n";
		ret = easyfind(myVector, 11);
		std::cout << "ret = " << *ret << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		for (int i = 0; i < 67; i++)
			myVector.push_back(i);
		std::vector<int>::iterator ret = easyfind(myVector, 68);
		std::cout << "wrong ret = " << *ret << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}