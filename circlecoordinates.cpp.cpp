#include<iostream>

int main()
{
   float X,Y;
   std::cout<<"Enter X & Y co-ordinates of a point: ";
    std::cin>>X>>Y;
    if(X==0 && Y==0)
          std::cout<<"Point lies on Origin";
    else if(X==0 && (Y>0 || Y<0))
          std::cout<<"Point lies on Y-Axis";
    else if(Y==0 && (X>0 || X<0))
          std::cout<<"Point lies on X-Axis";
    else if(X>0 && Y>0)
         std::cout<<"Point lies in 1st quadrant";
    else if(X>0 && Y<0)
       std::cout<<"Point lies in 4th quadrant";
    else if(X<0 && Y>0)
        std::cout<<"Point lies in 2nd quadrant";
    else if(X<0 && Y<0)
        std::cout<<"Point lies in 3rd quadrant";
}
