#include "easyfind.hpp"

#include <vector>
#include <deque>
#include <list>
#include <iostream>

int main()
{
	std::vector<int>	vect(5);
	std::deque<int>		deq(5);
	std::list<int>		list;

	for (int i = 0; i < 5; i++)
	{
		vect.push_back(i);
		deq.push_back(i);
		list.push_back(i);
	}

	try
	{
		std::cout << *easyfind(vect, 2) << std::endl;
		std::cout << *easyfind(deq, 3) << std::endl;
		std::cout << *easyfind(list, 4) << std::endl;

		std::cout << *easyfind(vect, 6) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
