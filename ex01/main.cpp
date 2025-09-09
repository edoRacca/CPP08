
#include "Span.hpp"

void tryToAdd(Span& s, int num)
{
	try
	{
		s.addNumber(num);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

template <typename T> void tryToAddMultiple(Span& s, T& t)
{
	try
	{
		s.addMultipleNumbers(t);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void printLongestSpan(Span& s)
{
	try
	{
		std::cout << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void printShortestSpan(Span& s)
{
	try
	{
		std::cout << s.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int main(void)
{
	srand(time(0));
	int nums = 100;
	std::vector<int> v;
	Span s(nums);
	for (int i = 0; i < nums; i++)
	{
		int num = rand() % 10000;
		std::cout << "num: " << num << std::endl;
		v.push_back(num);
	}
	tryToAddMultiple(s, v);
	printShortestSpan(s);
	printLongestSpan(s);
	
	return (0);
}