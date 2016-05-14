#include"ksort.h"


void KSort::input()
{
	cin>>length;
	for(int i=0; i<length; ++i)
		cin>>Array[i];
	sort(0, length - 1);
}

void KSort::swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}


void KSort::sort(int bottom, int up)
{
	int k_bottom = bottom;
	int k_up = up ;
	int tmp = Array[bottom];
	if(k_bottom >= k_up)
		return ;
	while(k_bottom < k_up)
	{
		while(Array[k_up] >= tmp && k_up > k_bottom)
			--k_up;
		while(Array[k_bottom] <= tmp && k_bottom < k_up)
			++k_bottom;
		 swap(Array[k_up], Array[k_bottom]);
	}
	Array[bottom] = Array[k_up];
	Array[k_up] = tmp;
	sort(bottom, k_up - 1);
	sort(k_bottom + 1, up);
}

void KSort::output()
{
	for(int i=0; i<length; ++i)
		cout<<Array[i]<<' ';
	cout<<endl;
}
