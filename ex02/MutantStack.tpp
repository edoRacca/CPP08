
#pragma once
#include "MutantStack.hpp"

template <typename T> MutantStack<T>::MutantStack()
{
	std::cout << "MutantStack default constructor called" << std::endl;
}

template <typename T> MutantStack<T>::MutantStack(const MutantStack& m)
{
	std::cout << "MutantStack copy constructor called" << std::endl;
	for(unsigned int i = 0; i < m._v.size(); i++)
		this->_v.push_back(m._v[i]);
}
template <typename T> MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack destructor called" << std::endl;
}