#include "PMergeMe.hpp"
#include <cstdlib>
#include <cstring>
#include <ctime>

PMergeMe::PMergeMe() {}

PMergeMe::~PMergeMe() {}

PMergeMe::PMergeMe(std::list<int> _list, std::deque<int> _deque) : mList(_list), mDeque(_deque) {}

PMergeMe::PMergeMe(const PMergeMe& other) { *this = other; }

PMergeMe& PMergeMe::operator=(const PMergeMe& other)
{
	mList = other.mList;
	mDeque = other.mDeque;
	return *this;
}

void PMergeMe::exitError()
{
	std::cout << "Error" << std::endl;
	exit(1);
}

size_t PMergeMe::isInt(char *s)
{
	for (size_t i = 0; i < strlen(s); ++i) {
		if (!isdigit(s[i]))
			return 0;
	}
	return 1;
}

void PMergeMe::takeArgs(int ac, char** av)
{
	int n;
	for (int i = 1; i < ac; ++i) {
		n = atoi(av[i]);
		if (!isInt(av[i]) || n < 0)
			exitError();
		mList.push_back(n);
		mDeque.push_back(n);
	}
	std::cout << "Before:  ";
	for (int i = 1; i < ac; ++i) {
		if (i == 5)
		{
			std::cout << "...";
			break;
		}
		std::cout << av[i] << " ";
	}
	std::cout << std::endl;
	size = ac - 1;
}


void PMergeMe::insertionSortList(std::list<int>& A) {
    for (std::list<int>::iterator it = A.begin(); it != A.end(); ++it) {
        std::list<int>::iterator current = it;
        int temp = *it;
        std::list<int>::iterator prev = it;
		std::list<int>::iterator next = prev;
		++next;
        while (prev != A.begin() && *(--prev) > temp) {
            *current = *prev;
            current = prev;
        }
        *current = temp;
		current = next;
    }
}

void mergeList(std::list<int>& A, int p, int q, int r)
{
	std::list<int> left;
    std::list<int> right;

    std::list<int>::iterator it = A.begin();
    std::advance(it, p);
    for (int i = p; i <= q; ++i) {
        left.push_back(*it);
        ++it;
    }

    it = A.begin();
    std::advance(it, q + 1);
    for (int i = q + 1; i <= r; ++i) {
        right.push_back(*it);
        ++it;
    }

    std::list<int>::iterator leftIt = left.begin();
    std::list<int>::iterator rightIt = right.begin();
    std::list<int>::iterator mergedIt = A.begin();
    std::advance(mergedIt, p);

    while (leftIt != left.end() && rightIt != right.end())
	{
        if (*leftIt <= *rightIt) {
            *mergedIt = *leftIt;
            ++leftIt;
        } else {
            *mergedIt = *rightIt;
            ++rightIt;
        }
        ++mergedIt;
    }

    for (;leftIt != left.end(); ++leftIt, ++mergedIt) {
        *mergedIt = *leftIt;
        ++mergedIt;
    }

    for (;rightIt != right.end(); ++rightIt, ++mergedIt) {
        *mergedIt = *rightIt;
    }
}

void PMergeMe::mergeInsertList(std::list<int>& A, int p, int r)
{
	if (r - p > K)
	{
		std::cout << "eyvah" << std::endl;
		int q = (p + r) / 2;
		mergeInsertList(A, p, q);
		mergeInsertList(A, q + 1, r);
		mergeList(A, p, q, r);
	}
	else
	{
		std::cout << "geldi" << std::endl;
		insertionSortList(A);
	}
}

void PMergeMe::mergeMe(int ac, char **av)
{
	takeArgs(ac, av);
    mergeInsertList(mList, 0, mList.size() - 1);

	std::cout << "After:  ";

	int i = 0;
	for (std::list<int>::iterator it = mList.begin(); it != mList.end(); ++it) {
		if (i == 4)
		{
			std::cout << "..." << std::endl;
			break ;
		}
		std::cout << *it << " ";
		++i;
	}
	std::cout << std::endl;
}
