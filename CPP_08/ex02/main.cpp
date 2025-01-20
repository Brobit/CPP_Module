#include "MutantStack.hpp"

#include <iostream>

int main()
{
	MutantStack<int>			mstack;
	MutantStack<int>::iterator	it;
	
	mstack.push(3);
	mstack.push(75);

	std::cout << "top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;

	mstack.push(4);
	mstack.push(9);
	mstack.push(777);
	mstack.push(96);
	mstack.push(7);

	it = mstack.begin();
	++it;
	--it;

	while (it != mstack.end())
	{
		std::cout << *it << std::endl;
		it++;
	}
	std::cout << std::endl;
	while (it != mstack.begin())
	{
		it--;
		std::cout << *it << std::endl;
	}

	std::stack<int> s(mstack);

	return (0);
}
