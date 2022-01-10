/* If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle
is valid or not. The triangle is valid if the sum of two sides is greater than the largest of the three sides */
#include<iostream>

int main()
{
    int A,B,C;
    std::cout<<"Enter 3 sides of triangle:";
    std::cin>>A>>B>>C;
    if((A+B>C) && (A+C>B) && (B+C>A))
      std::cout<<"Triangle is Valid";
    else
     std::cout<<"Triangle is Invalid";
}
