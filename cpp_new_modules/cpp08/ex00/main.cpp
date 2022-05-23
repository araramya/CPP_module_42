#include "easyfind.hpp"
#include <iostream>
#include <stdlib.h>
#include <vector>

void	vectors(void) 
{
	std::vector<int>	MyVector;
	int tofind = 1;
	std::cout << "int tofind is " << tofind << std::endl;
	for (int i = 0; i < 10; i++)
    {
		MyVector.push_back(i);
        std::cout << MyVector[i] << " ";
    }
    std::cout << std::endl;
	try 
    {
		std::vector<int>::iterator found = easyfind(MyVector, tofind);
		std::cout << "Element found: " << *found << std::endl;
	}
	catch (std::exception& e) 
    {
		std::cout << e.what() << std::endl;
	}
}


int	main(void) {
	srand(time(NULL));
	vectors();
}