#include<iostream>
#include<conio.h>                          
using namespace std;
int main()
{
	int a[10],num;
	int c=0,flag=0;
	cout<<"Enter the array (5 elements)";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
		cout<<" ";
	}
	cout<<"\nEnter the no. to b searched";cin>>num;
	for(int i=0;i<5;i++)
	{
		if(a[i]==num)
		{ flag=1;
		c++;
		}
		
	}
	if(flag==1)
	cout<<"\n"<<num<<" is present "<<c<<" times";
	else
	cout<<"\nNot present";

	getch();
	return 0;
	
}
