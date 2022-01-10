/* Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered 
through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees */
#include<iostream>
using namespace std;
int main()
{  float A,B,C,SUM;
    
    std::cout<<"Enter 3 angles of triangle:";
    std::cin>>A>>B>>C;
    SUM=A+B+C;
    if(SUM==180)
        std::cout<<"Triangle is valid";
    else
        std::cout<<"Triangle is NOT valid";   
}
