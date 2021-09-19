#include "../../std_lib_facilities.h"

int main()
{
	cout<<"Enter the name of the person you want to write to:\n";
	string first_name;
	cin>>first_name;
	
	cout<<"Enter the name of the persons friend:\n";
	string friend_name;
	cin>>friend_name;
	
	char friend_sex='0';
	cout<<"If "<<friend_name<<" is male type an 'm', if its a female type an 'f':\n";
	cin>>friend_sex; 

	cout<<"Enter the age of "<<first_name<<":\n";
	int age;
	cin>>age;


	cout<<"Dear "<<first_name<<", I am glad to hear from you. How are you? I am fine. I miss you.\n";
	cout<<"Have you seen "<<friend_name<<" recently?\n";
	cout<<"If you see "<<friend_name<<" please ask ";
	if (friend_sex == 'm') {
		cout<<"him ";
	}
	else if (friend_sex == 'f') {
		cout<<"her ";
	}
	else cout<<"them ";
	cout<<"to call me.\n";

	if (age < 0 || age > 110){
		simple_error("your're kidding!");	
	}
	else{
		cout<<"I hear you just had a birthday and you are "<<age<<" old.\n";
	}
	if (age < 12){
		cout<<"Next year you will be "<<age+1<<".\n";
	}
	else if (age == 17){
		cout<<"Next year you will be able to vote.\n";
	}
    else if (age>70){
	cout<<"I hope you are enjoying retirement.\n";
	}
	cout<<"Yours sincerely,\n\nToth Tamas\n";
}