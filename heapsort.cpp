
#include "heapsort.h"

void Heap::input()
{
	cin>>length;
	for(int i=1; i<=length; ++i)
	{
		cin>>Array[i];
		up(i);
	}
	//for(int i = length / 2; i>=1; --i)
		//down(i);

}

void Heap::swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}

void Heap::down(int x)
{
	while((2*x <= length && Array[x] > Array[2*x]) || (2*x + 1 <= length && Array[x] > Array[2*x+1])) 
	{
		if(2*x+1 <= length && Array[2*x] > Array[2*x+1])
		{
			swap(Array[x], Array[2*x+1]);
			x = 2 * x + 1;
		}
		else
		{
			swap(Array[x], Array[2*x]);
			x = 2 * x;
		}
	}
}

void Heap::up(int x)
{
	while(x > 1)
	{
		if(Array[x] < Array[x/2])
		{
			swap(Array[x], Array[x/2]);
			x /= 2;
		}
		else
			break;
	}
}

void Heap::output()
{
	for(int i=1; i <= length; ++i)
		cout<<Array[i]<<' ';
	cout<<endl;
}


void Heap::sort()
{
	int len = length;
	while(length > 1)
	{
		swap(Array[1], Array[length]);
		length--;
		down(1);
	}

	length = len;
}

