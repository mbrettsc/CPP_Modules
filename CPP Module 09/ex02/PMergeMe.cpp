#include "PmergeMe.hpp"
#include <cstdlib>
#include <cstring>

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(std::list<int> _list, std::deque<int> _deque) : mList(_list), mDeque(_deque) {}

PmergeMe::PmergeMe(const PmergeMe& other) { *this = other; }

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	mList = other.mList;
	mDeque = other.mDeque;
	return *this;
}

void PmergeMe::exitError()
{
	std::cout << "Error" << std::endl;
	exit(1);
}

size_t PmergeMe::isInt(char *s)
{
	for (size_t i = 0; i < strlen(s); ++i) {
		if (!isdigit(s[i]))
			return 0;
	}
	return 1;
}

void PmergeMe::takeArgs(int ac, char** av)
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
		if (ac >= 7 && i == 5)
		{
			std::cout << "[...]";
			break;
		}
		std::cout << av[i] << " ";
	}
	std::cout << std::endl;
	size = ac - 1;
}

template<typename T>
void PmergeMe::insertionSort(T& A, int p, int r)
{
	typename T::iterator it = A.begin();
	typename T::iterator ite = A.begin();
	std::advance(it, p);
	std::advance(ite, r + 1);
    while (it != ite && it != A.end())
	{
        typename T::iterator current = it;
        int temp = *it;
        typename T::iterator prev = it;
		typename T::iterator next = prev;
		++next;
        while (prev != A.begin() && *(--prev) > temp)
		{
            *current = *prev;
            current = prev;
        }
        *current = temp;
		current = next;
		++it;
    }
}

template<typename T>
void merge(T& A, int p, int q, int r)
{
	T left;
    T right;

    typename T::iterator it = A.begin();
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

    typename T::iterator leftIt = left.begin();
    typename T::iterator rightIt = right.begin();
    typename T::iterator mergedIt = A.begin();
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

template<typename T>
void PmergeMe::mergeInsert(T& A, int p, int r)
{
	if (r - p > K)
	{
		int q = (p + r) / 2;
		mergeInsert(A, p, q);
		mergeInsert(A, q + 1, r);
		merge(A, p, q, r);
	}
	else
		insertionSort(A, p, r);
}

void PmergeMe::printTime(timeval tv1, timeval tv2, std::string type)
{
	double timePased = ((double)tv2.tv_usec - (double)tv1.tv_usec) / 1000000;
	std::cout << "Time to process a range of " << size <<  " elements with "
	<< type << " " << std::fixed << timePased << " us." << std::endl;
}

void PmergeMe::mergeMe(int ac, char **av)
{
	takeArgs(ac, av);
	struct timeval tv1, tv2;

	gettimeofday(&tv1, 0);
    mergeInsert(mList, 0, mList.size() - 1);
	gettimeofday(&tv2, 0);
	std::cout << "After:  ";
	int i = 0;
	for (std::list<int>::iterator it = mList.begin(); it != mList.end(); ++it) {
		if (ac >= 7 && i == 4)
		{
			std::cout << "[...]";;
			break ;
		}
		std::cout << *it << " ";
		++i;
	}
	std::cout << std::endl;
	printTime(tv1, tv2, "std::list");
	gettimeofday(&tv1, 0);
    mergeInsert(mDeque, 0, mDeque.size() - 1);
	gettimeofday(&tv2, 0);
	printTime(tv1, tv2, "std::deque");
}
