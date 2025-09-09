
#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>
# include <iterator>

# define RED "\e[0;31m"
# define WHITE "\e[0m"

template <typename T> typename T::iterator easyfind(T& t, int val)
{
	typename T::iterator iter = std::find(t.begin(), t.end(), val);
	if (iter == t.end())
		throw (std::runtime_error("Value not found"));
	return (iter);
};

#endif