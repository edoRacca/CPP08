
#include "Span.hpp"

Span::Span(unsigned int n)
{
	std::cout << "Span default constructor called" << std::endl;
	this->_n = n;
}

Span::Span(const Span& s)
{
	std::cout << "Span copy constructor called" << std::endl;
	this->_n = s._n;
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}

Span& Span::operator=(const Span& s)
{
	if (this != &s)
	{
		this->_n = s._n;
	}
	return (*this);
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
		throw (std::runtime_error("Too few values for shortest span"));
	return (min_len(this->_v));
}

int Span::longestSpan()
{
	if (this->_v.size() < 2)
		throw (std::runtime_error("Too few values for longest span"));
	return (*std::max_element(this->_v.begin(), this->_v.end()) - *std::min_element(this->_v.begin(), this->_v.end()));
}
