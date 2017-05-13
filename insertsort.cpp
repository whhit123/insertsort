#include <iostream>

using namespace std;

bool myless(int a, int b)
{
	return (a<b)?true:false;
}

void exch(int a[], int n,int m)
{
	int temp;
	temp = a[n];
	a[n] = a[m];
	a[m] = temp;
}

void insertsort(int* a, int len)
{

	int i,j;
	for(i = 1;i<len;i++)
		for(j = i;(j>0)&&myless(a[j],a[j-1]);j--)
		{
			exch(a,j,j-1);
		}
}
void insertsort2(int* a, int len)
{

	int i,j;
	int temp;
	for(i = 1;i<len;i++)
	{
		temp = a[i];
		for(j = i;(j>0)&&myless(temp,a[j-1]);j--)
		{
			//exch(a,j,j-1);
			a[j] = a[j-1];
		}
		a[j] = temp;
	}
}

int main()
{
	int a[11] = {4,3,2,1,6,5,7,6,8,0,9};
	//insertsort(a,11);
	insertsort2(a,11);
	int i = 0;
	while(i<11)
		cout<<a[i++]<<endl;
}
