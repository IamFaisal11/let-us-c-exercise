/* Find the absolute value of a number entered through the keyboard */
#include<iostream>
using namespace std;
int main()
{
   float num,abs;
    std::cout<<"Enter a no. to find it absolute value: ";
    std::cin>>num;
    if(num<0)
        abs = num*(-1);    // Absolute value is distance of that number from 0
    else
        abs = num;
    std::cout<<"Absolute value of "<<num <<'\t'<<  abs  ;
}
