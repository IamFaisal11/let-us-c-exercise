/* Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than 
its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter */
#include<iostream>
using namespace std;
int main()
{
  float L,B,A,P;
  std::cout<<"Enter LENGTH of rectangle: ";
  std::cin>>L;
std::cout<<"Enter BREADTH of rectangle: ";
   std::cin>>B;
    A=L*B;
    P=2*(L+B);
    std::cout<<"Area  Perimeter "<<A<<'\t'<<P<<'\n';
    if(A>P)
       std::cout<<"Area of rectangle is greater than Perimeter";
    else if(A<P)
        std::cout<<"Area of rectangle is smaller than Perimeter";   
    else if(A==P)
      std::cout<<"Area of rectangle = Perimeter";   
}
