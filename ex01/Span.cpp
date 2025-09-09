
#include "Span.hpp"

Span::Span(unsigned int n)
{
	this->_n = n;
}

Span::~Span()
{

}

void Span::addNumber(int n)
{
	if (this->_v.size() == this->_n)
		throw (std::exception());
	this->_v.push_back(n);
}

int	min_len(std::vector<int> v)
{
	int minlen = *std::max_element(v.begin(), v.end()) - *std::min_element(v.begin(), v.end());
	for (int i = 0; (unsigned int)i < v.size() - 1; i++)
	{
		for (int j = i + 1; (unsigned int)j < v.size(); j++)
		{
			if (abs(v[i] - v[j]) < minlen)
				minlen = abs(v[i] - v[j]);
		}
	}
	return (minlen);
}

int Span::shortestSpan()
{
	if (this->_v.size() < 2)
		throw (std::exception());
	return (min_len(this->_v));
}

int Span::longestSpan()
{
	if (this->_v.size() < 2)
		throw (std::exception());
	return (*std::max_element(this->_v.begin(), this->_v.end()) - *std::min_element(this->_v.begin(), this->_v.end()));
}
