#include "Span.hpp"

int main()
{
	std::cout << "Test from subject:" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest  span: " << sp.longestSpan() << std::endl << std::endl;


	std::cout << std::endl << "Other tests:" << std::endl;

	Span span(5);
	try 
	{
		span.longestSpan();
	} 
	catch (std::exception& e) 
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		span.shortestSpan();
	} 
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		span.addNumber(89);
		span.addNumber(3435);
		span.addNumber(12424);
		span.addNumber(1);
		span.addNumber(234);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		span.addNumber(2);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "shortest span: " << span.shortestSpan() << std::endl;
	std::cout << "longest  span: " << span.longestSpan() << std::endl;

	Span megaspan(10000);
	std::vector<int>	test;
	try
	{
		for (int i = 0; i < 10200; i++)
			test.push_back(10200 - i);
		megaspan.addNumber(test.begin(), test.end());
		std::cout << "shortest span: " << megaspan.shortestSpan() << std::endl;
		std::cout << "longest  span: " << megaspan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	Span megaspan2(10000);
	std::vector<int>	test2;
	for (int i = 0; i < 10000; i++)
		test2.push_back(i);
	megaspan2.addNumber(test2.begin(), test2.end());
	try
	{
		std::cout << "shortest span: " << megaspan2.shortestSpan() << std::endl;
		std::cout << "longest  span: " << megaspan2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}