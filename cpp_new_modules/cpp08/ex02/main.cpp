#include <iostream>
#include "MutantStack.hpp"
#include <list>

int main(void) 
{
	MutantStack<int> a;
	
	a.push(1);
	a.push(2);	
	a.push(3);

	MutantStack<int>::iterator i = a.begin();
	MutantStack<int>::iterator ie = a.end();
	
	++i;
	--i;
	while (i != ie)
	{
		std::cout << *i << std::endl;
		++i;
	}

	MutantStack<int>::reverse_iterator rit = a.rbegin();
	MutantStack<int>::reverse_iterator rite = a.rend();
	++rit;
	--rit;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::cout << "\n\n";
	
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	return 0;
}