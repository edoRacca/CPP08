
#ifndef SPAN_H
# define SPAN_H

# include <vector>
# include <iostream>
# include <algorithm>
# include <random>

class Span
{

private:
	unsigned int 		_n;
	std::vector<int>	_v;

public:
	Span(unsigned int n);
	Span(const Span& s);
	~Span();

	Span& operator=(const Span& s);

	void addNumber(int n);
	int shortestSpan();
	int longestSpan();

	void addMultipleNumbers(int times);
};


#endif