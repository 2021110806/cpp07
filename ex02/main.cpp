#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl; //5 17
	mstack.pop();
	std::cout << mstack.size() << std::endl; //5
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);  //5 3 5 737 0
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it; 
	while (it != ite)
	{
		std::cout << *it << std::endl; 
		++it;
	}
	MutantStack<int> s(mstack);

	    std::cout << "Original stack" << std::endl;
		for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)  {
			std::cout << *it << " ";
		}
		std::cout << std::endl;

		std::cout << "Copied stack" << std::endl;
		for (MutantStack<int>::iterator it = s.begin(); it != s.end(); ++it) {
			std::cout << *it << " ";
		}
		std::cout << std::endl;

	return 0;
}