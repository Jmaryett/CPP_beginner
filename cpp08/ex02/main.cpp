#include "MutantStack.hpp"
#include "MutantStack.cpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "On top of the stack is " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of the stack is is " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << "iterator = " << *it << std::endl;
	++it;
	}

	MutantStack<int> mstack2;
	mstack2.push(45345);
	mstack2.push(778);
	std::cout << "top should 778: " << mstack2.top() << std::endl;
	mstack2.pop();
	std::cout << "size should 1: " << mstack2.size() << std::endl;

	mstack2.push(1);
	mstack2.push(2);
	mstack2.push(3);
	mstack2.push(4);
	mstack2.push(5);
	mstack2.push(6);
	mstack2.push(7);
	mstack2.push(8);
	mstack2.push(9);

	MutantStack<int>::iterator it1 = mstack2.begin();
	MutantStack<int>::iterator it2 = mstack2.end();

	std::cout << "size should 10: " << mstack2.size() << std::endl;
	while (it1 != it2)
	{
		std::cout << "iterator = " << *it1 << std::endl;
		++it1;
	}
	std::cout << std::endl;
	return 0;
}