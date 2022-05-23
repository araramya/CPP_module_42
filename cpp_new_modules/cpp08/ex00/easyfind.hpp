#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T& container, const int& tofind) {
	typename T::iterator found;

	found = std::find(container.begin(), container.end(), tofind);
	if (found == container.end())
		throw std::runtime_error("Element not found");
	return found;
}

#endif