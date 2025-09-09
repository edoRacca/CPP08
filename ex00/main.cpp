
#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

template <typename T> void test(T& t, int val)
{
	try
	{
		std::cout << *(easyfind(t, val)) << std::endl;
		std::cout << *(++easyfind(t, val)) << std::endl;
	}
	catch(const std::runtime_error& e)
	{
		std::cerr << RED"" << e.what() << WHITE"" << '\n';
	}
}

int main()
{
	std::vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(10);
	v.push_back(30);

	test(v, 12);
	test(v, 10);	

}