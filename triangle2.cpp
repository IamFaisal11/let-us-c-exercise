/* If the three sides of a triangle are entered through the keyboard, write a program to check whether the
triangle is isosceles, equilateral, scalene or right angled triangle */
#include<iostream>

int main()
{
    int A,B,C;
    std::cout<<"Enter 3 sides of triangle: ";
  std::cin>>A>>B>>C;
    if((A+B>C) && (A+C>B) && (B+C>A))
    {
        if(A==B && B==C)
              std::cout<<"Triagnle is Equilateral";
        else if(A==B || B==C || A==C)
              std::cout<<"Triagnle is Isoscele";
        else
            std::cout<<"Triagnle is Scalene";
        if((A*A==(B*B+C*C))||(B*B==(A*A+C*C))||(C*C==(A*A+B*B)))
            std::cout<<"Triagnle is Right Angled";
    }
    else
       std::cout<<"Triangle is Invalid";
}
