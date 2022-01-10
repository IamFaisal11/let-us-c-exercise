/* Given the coordinates (x, y) of a center of a circle and it's radius, write a program which will determine 
whether a point lies inside the circle, on the circle or outside the circle 
(Hint: Use sqrt( ) and pow( ) functions) */
#include<iostream>
#include<math.h>   // Header file for maths functions (sqrt & pow in this program)
using namespace std;
int main()
{
   unsigned int x,y,rad,a,b,dist;
    std::cout<<"Enter co-ordinates of center of circle: ";
    std::cin>>x>>y;
    std::cout<<"Enter radius of circle: ";
    std::cin>>rad;
    std::cout<<"Enter co-ordinates of a point";
    std::cin>>a>>b;
    dist=sqrt(pow((a-x),2)+pow((b-y),2));  // Distance b/w center & point
    if(dist<rad)
   std::cout<<"Point lies inside the circle"<<a<<b;
    else if(dist==rad)
    std::cout<<"Point lies on the circle"<<a<<b;
    else
    std::cout<<"Point lies outside the circle"<<a<<b;
}
