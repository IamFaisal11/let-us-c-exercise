// the ages of Ram, Sulabh and Ajay are input by the user, write a program to determine the youngest of the three.
#include<iostream>
using namespace std;

int main()
{
	int ram_age,sulabh_age,ajay_age;
	cout<<"Enter Ram age:";
	cin>>ram_age;
	cout<<"Enter Sulabh age:";
	cin>>sulabh_age;
	cout<<"Enter Ajay age:";
	cin>>ajay_age;

	if (ram_age<sulabh_age && ram_age<ajay_age)
		cout<<"Ram is youngest";
	else if(sulabh_age<ram_age && sulabh_age<ajay_age)
		cout<<"Sulabh is youngest";
	else
		cout<<"Ajay is youngest";


	return 0;
}
