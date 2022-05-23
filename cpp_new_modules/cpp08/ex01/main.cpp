#include "Span.hpp"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	// Span sp = Span(5);

	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;

    Span sp = Span(10001);
	std::vector<int> peervec;
	srand(time(NULL));
	for (int i = 0; i < 10001; i++)
		peervec.push_back(rand());

	try {
		sp.addNumber(peervec.begin(), peervec.end());
		sp.addNumber(rand());
	}
	catch (std::exception& e) {
		std::cout << "failed: " << e.what() << std::endl;
	}
	try {
		int shortest = sp.shortestSpan();
		int longest = sp.longestSpan();
		std::cout << "shortest span: " << shortest << std::endl;
		std::cout << "longest span: " << longest << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "error because: " << e.what() << std::endl;
	}
	return 0;
}