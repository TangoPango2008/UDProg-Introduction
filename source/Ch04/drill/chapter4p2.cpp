#include "std_lib_facilities.h"

int main()
{	
	int i=0;
	int j=0;
	while(i != '|')
	{
		cin>>i;
		cin>>j;
		if(i<j)
		{
			cout<<"The smaller value is: "<<i<<"\n";
			cout<<"The larger value is: "<<j<<"\n";
		} 
		else if(i>j)
		{
			cout<<"The smaller value is: "<<j<<"\n";
			cout<<"The larger value is: "<<i<<"\n";
		}
		else
		{
			cout<<"The numbers are equal.\n";
		}
	}
}
