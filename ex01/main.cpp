#include "Span.hpp"
#include <vector>

int main()
{
	Span sp = Span(9);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::set<int> moreNumbers;
	moreNumbers.insert(30);
	moreNumbers.insert(40);
	moreNumbers.insert(50);
	moreNumbers.insert(60);
	sp.addNumbers(moreNumbers.begin(), moreNumbers.end());

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}