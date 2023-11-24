#include "PMergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "Error: need number." << std::endl;
	else
	{
		PMergeMe merge;
		merge.mergeMe(ac, av);
	}
	return 0;
}