
#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>


int main()
{
	std::vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	int val1 = 12;
	int val2 = 10;

	std::cout << "Valore " << val1 << (easyfind(v, val1) != -1 ? " trovato " : " non trovato") << std::endl;
	std::cout << "Valore " << val2 << (easyfind(v, val2) != -1 ? " trovato " : " non trovato") << std::endl;
}