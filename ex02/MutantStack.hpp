
#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <vector>
# include <iostream>

template <typename T> class MutantStack
{
	
private:
	std::vector<T> _v;

public:
	MutantStack();
	MutantStack(T val);
	MutantStack(const MutantStack& m);
	~MutantStack();



};

# include "MutantStack.tpp"

#endif