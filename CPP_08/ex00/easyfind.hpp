#pragma once

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &container, int toFind)
{
	typename T::iterator	find = std::find(container.begin(), container.end(), toFind);

	if (find == container.end())
		throw (std::runtime_error("Nothing found in container..."));
	return (find);
}
