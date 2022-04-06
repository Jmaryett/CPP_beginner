#include "Data.hpp"

int main()
{
	Data	data(150);
	uintptr_t	raw;

	std::cout << "| address of the origin data = " << &data << " |\n";
	raw = data.serialize(&data);
	std::cout << "| serialize address of raw = " << raw << " |\n";
	std::cout << "| address after deserialize = " << data.deserialize(raw) << " |\n";
	
	std::cout << "\n";
	
	Data	*check = new Data;
	std::cout << "| address of the check data = " << check << " |\n";
	std::cout << "| address of check after deserialize = " << check->deserialize(check->serialize(check)) << " |\n";
	delete check;
}