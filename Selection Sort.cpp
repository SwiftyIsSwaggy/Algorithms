
#include<iostream>
using namespace std;
void SelectionSort(int[]);
void Display(int[]);
void Swap(int[],int c,int d);
int main()
{
	int myarray[10];// Testing with 10 elements array
	for(int i=0; i<10;i++)
	{
		myarray[i]=rand()%100;
	}
	cout<<endl;
	Display(myarray);
	SelectionSort(myarray);
	Display(myarray);

		return 0;
}
void SelectionSort(int b[])
{
	int smallIn;
	int smallNum;
	for(int i=0;i<9;i++)
	{
		smallIn=i;
		smallNum=b[i];
		for(int j=i+1;j<10;j++)
		{
			if(b[j]<smallNum)
			{
				smallIn=j;
				smallNum=b[j];
			}
		}
		Swap(b,smallIn,i);
	}
}
void Display(int a[])
{
	cout<<"These are the numbers" <<endl;
		for(int i=0; i<10;i++)
	{
		cout<<a[i]<<" ";
		}
		cout<<endl;
}
void Swap(int e[],int c,int d)
{
	int temp;
	temp=e[c];
	e[c]=e[d];
	e[d]=temp;
}