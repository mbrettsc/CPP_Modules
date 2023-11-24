#pragma once

#include <iostream>
#include <list>
#include <deque>
#include <sys/time.h>

#define K 6

class PmergeMe
{
public:
	PmergeMe();
	PmergeMe(std::list<int> _list, std::deque<int> _deque);
	~PmergeMe();
	PmergeMe(const PmergeMe& other);
	PmergeMe& operator=(const PmergeMe& other);
	size_t isInt(char *s);
	void exitError();
	void takeArgs(int ac, char **av);
	void mergeMe(int ac, char **av);
	template<typename T>
	void mergeInsert(T& A, int p, int r);
	template<typename T>
	void insertionSort(T& A);
	void printTime(timeval tv1, timeval tv2, std::string type);
private:
	std::list<int> mList;
	std::deque<int> mDeque;
	size_t size;
};
