#include "iter.hpp"

template <typename T>
void	print(T const &x)
{ std::cout << x << "\n"; }

int main()
{
	int	tab[] = {0, 1, 2, 3, 4};
	Check	tab2[5];

	iter(tab, 5, print);
	std::string s = "I hate you, guys";
	iter(s.c_str(), 17, print);
}