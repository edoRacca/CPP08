
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
	std::vector<int> v;
	Span s(1000);
	for (int i = 0; i < 100; i++)
	{
		int num = rand();
		std::cout << "num % 100: " << num % 100 << std::endl;
		v.push_back(num % 100);
	}
	tryToAddMultiple(s, v);
	printShortestSpan(s);
	printLongestSpan(s);
	
	return (0);
}