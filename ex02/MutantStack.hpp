
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
	MutantStack(const MutantStack& m);
	~MutantStack();

	MutantStack& operator=(const MutantStack& m);

	void push(T val);
	void pop();

};

# include "MutantStack.tpp"

#endif