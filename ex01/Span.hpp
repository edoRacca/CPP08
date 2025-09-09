
#ifndef SPAN_H
# define SPAN_H

# include <vector>
# include <iostream>
# include <algorithm>
# include <cstdlib>

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

		template <typename T> void addMultipleNumbers(T t)
		{
			for (typename T::iterator iter = t.begin(); iter != t.end(); iter++)
				addNumber(*iter);
		};
};


#endif