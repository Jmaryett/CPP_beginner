#include "Templates.hpp"
#include "Shablo.hpp"

int		main(void)
{
	Templates	a(2), b(4);

	std::cout << "a before swap = " << a << ", b before swap = " << b << "\n";
	::swap(&a, &b);
	std::cout << "a after swap = " << a << ", b after swap = " << b << "\n";
	std::cout << "min is " << min(a, b) << "\n";
	std::cout << "max is " << max(a, b) << "\n";

	int	c = 89;
	int	d = 94;
	std::cout << "c before swap = " << c << ", d before swap = " << d << "\n";
	::swap(&c, &d);
	std::cout << "c after swap = " << c << ", d after swap = " << d << "\n";
	std::cout << "min is " << min(c, d) << "\n";
	std::cout << "max is " << max(c, d) << "\n";

	std::string e = "hello";
	std::string	f = "OH, MY AAASSSSS";
	std::cout << "e before swap = " << e << ", f before swap = " << f << "\n";
	::swap(&e, &f);
	std::cout << "e after swap = " << e << ", f after swap = " << f << "\n";
	std::cout << "min is " << min(e, f) << "\n";
	std::cout << "max is " << max(e, f) << "\n";
	
}