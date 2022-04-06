#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>

Base*	generate(void)
{
	std::srand(std::time(NULL));
	int	nb = std::rand() % 3;
	std::cout << "random nb is = " << nb << "\n";
	switch (nb)
	{
	case 0:
		return (new A);
		break;
	case 1:
		return (new B);
		break;
	case 2:
		return (new C);
		break;
	default:
		return (new A);
		break;
	}
}

void	identify(Base *p)
{
	if(dynamic_cast<A*>(p))
		std::cout << "Base object type is A\n";
	else if(dynamic_cast<B*>(p))
		std::cout << "Base object type is B\n";
	else if(dynamic_cast<C*>(p))
		std::cout << "Base object type is C\n";
}

void	identify(Base &p)
{
	try
	{
		A	a;
		a = dynamic_cast<A&>(p);
		std::cout << "Base object type is A\n";
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B	b;
		b = dynamic_cast<B&>(p);
		std::cout << "Base object type is B\n";
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		C	c;
		c = dynamic_cast<C&>(p);
		std::cout << "Base object type is C\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int	main()
{
	Base	*p = generate();
	identify(p);
	delete p;

	Base	*b = generate();
	Base	&ref = *b;
	identify(ref);
	delete b;
}