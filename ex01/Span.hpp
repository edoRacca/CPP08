
#ifndef SPAN_H
# define SPAN_H

# include <vector>
# include <iostream>
# include <algorithm>


class Span
{

private:
	unsigned int 	 _n;
	std::vector<int> _v;

public:
	Span(unsigned int n);
	~Span();

	void addNumber(int n);
	int shortestSpan();
	int longestSpan();
};


#endif