#pragma once

#include <iostream>
#include <list>
#include <deque>

#define K 6

class PMergeMe
{
public:
	PMergeMe();
	PMergeMe(std::list<int> _list, std::deque<int> _deque);
	~PMergeMe();
	PMergeMe(const PMergeMe& other);
	PMergeMe& operator=(const PMergeMe& other);
	size_t isInt(char *s);
	void exitError();
	void takeArgs(int ac, char **av);
	void mergeMe(int ac, char **av);
	void mergeInsertList(std::list<int>& A, int p, int r);
	void insertionSortList(std::list<int>& A);
private:
	std::list<int> mList;
	std::deque<int> mDeque;
	size_t size;
};
