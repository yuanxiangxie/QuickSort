#ifndef KSORT_H
#define KSORT_H

#include<iostream>
using namespace std;

#define MAX_VALUE 10000

class KSort
{
private:
	int length;
	int Array[MAX_VALUE];
public:
	void input();
	void sort(int bottom, int up);
	void output();
	void swap(int& x, int& y);
};

#endif //KSORT_H
