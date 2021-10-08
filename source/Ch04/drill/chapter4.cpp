#include "std_lib_facilities.h"

int main()
{	
	double i=0;
	double j=1;
	double x=0;
	double sum=0;
	string unit;
	double max=0;
	double min=9999999;
	vector<double> v;
	while(i != '|')
	{
		cin>>i;
		cout<<"Unit:";
		cin>>unit;
		if (unit=="m" or unit=="cm" or unit=="ft" or unit=="in")
		{
			cout<<unit<<"\n";
		}
		else
		{
			cout<<"error";
			break;
		}
		if (unit=="m")
		{
			i=i*100;
			unit="cm";
			cout<<"The conversion resulted:"<<i<<"cm\n";
		}
		if (unit=="in")
		{
			i=i*2.54;
			unit="cm";
			cout<<"The conversion resulted:"<<i<<"cm\n";
		}
		if (unit=="ft")
		{
			i=i*30.48;
			unit="cm";
			cout<<"The conversion resulted:"<<i<<"cm\n";
		}
		if(i<j)
		{
			cout<<"The smaller value is: "<<i<<"cm\n";
			cout<<"The larger value is: "<<j<<"cm\n";
			if (j-i<0.01)
			{
				cout<<"The numbers are almost equal.\n";
			}
		} 
		else if(i>j)
		{
			cout<<"The smaller value is: "<<j<<"cm\n";
			cout<<"The larger value is: "<<i<<"cm\n";
			if (i-j<0.01)
			{
				cout<<"The numbers are almost equal.\n";
			}
		}
		else
		{
			cout<<"The numbers are equal.\n";
		}
		if (i>max)
		{
			max=i;
			cout<<"New max:"<<max<<"cm\n";
		}
		if (i<min)
		{
			min=i;
			cout<<"New min:"<<min<<"cm\n";
		}
		sum=sum+i;
		v.push_back(i*0.01);
		x=i; i=j; j=x;
		
	}
	sort(v.begin(), v.end());

	for (int w = 0; w < v.size(); ++w)
		{
			cout<<v[w]<<"m\n";
		}

}
