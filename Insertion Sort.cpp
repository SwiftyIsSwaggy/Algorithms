//Date: 22/April/2020
#include<iostream>
using namespace std;
void InsertionSort(int[]);
void Display(int[]);
int main()
{
	//Sorting 5 integer numbers
	int  Array[5];
	cout<<"Enter your numbers"<<endl;
	for(int a=0;a<5;a++){
		cin>>Array[a];
	}
	cout<<"these are your numbers"<<endl;
	Display(Array);
	InsertionSort(Array);
	cout<<"After Sort"<<endl;
	Display(Array);
	return 0;
}
void InsertionSort(int A[])
{
	for(int i=0;i<4;i++)//Does this until a[4] than the array size
	{
		for(int j=i+1;j>0;j--)// because a[5] is the last digit when we add j=i+1
		{
			if(A[j]<A[j-1])
			{
			    int temp;
				temp=A[j];
				A[j]=A[j-1];
				A[j-1]=temp;
			}
		}
	}
}
void Display(int A[])
{
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<" ";
    }
}