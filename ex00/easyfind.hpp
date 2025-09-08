
#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>

template <typename T> int easyfind(T& t, int val)
{
	typename T::iterator iter = std::find(t.begin(), t.end(), val);
	if (iter == t.end())
		return (-1);
	return (*iter);
};

#endif