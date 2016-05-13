
/*
** The minest heap and sort
** Made by yuanxiang
*/

#include<stdio.h>
#include<iostream>
using namespace std;

#define MAX_VALUE 200

class Heap
{
private:
	int length;
	int Array[MAX_VALUE];
public:
	void input();
	void swap(int&x, int& y);
	void down(int x);
	void up(int x);
	void output();
	void sort();
};


