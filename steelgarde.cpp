/* A certain grade of steel is graded according to the following conditions: 
(i) Hardness must be greater than 50 
(ii) Carbon content must be less than 0.7 
(iii) Tensile strength must be greater than 5600 
The grades are as follows: 
Grade is 10 if all three conditions are met 
Grade is 9 if conditions (i) and (ii) are met 
Grade is 8 if conditions (ii) and (iii) are met 
Grade is 7 if conditions (i) and (iii) are met 
Grade is 6 if only one condition is met 
Grade is 5 if none of the conditions are met 
Write a program, which will require the user to give values of hardness, carbon content and tensile strength 
of the steel under consideration and output the grade of the steel */
#include<iostream>
using namespace std;
int main()
{
  float H,C,T;
   std::cout<<"Enter following data for steel:\n";
   std::cout<<"Hardness: ";
  std::cin>>H;
    std::cout<<"Carbon content: ";
    std::cin>>C;
    std::cout<<"Tensile strength: ";
     std::cin>>T;
   
    if(H>50 && C<0.7 && T>5600)              // Condition 1
        std::cout<<"Steel has grade 10";
    else if(H>50 && C<0.7 && T<=5600)    // Condition 2
       std::cout<<"Steel has grade 9";
    else if(H<50 && C<0.7 && T>5600)      // Condition 3
        std::cout<<"Steel has grade 8";
    else if(H>50 && C>0.7 && T>5600)      // Condition 4
        std::cout<<"Steel has grade 7";
    else if(H>50 || C<0.7 || T>5600)               // Condition 5
        std::cout<<"Steel has grade 6";
    else                                                            // Condition 6
        std::cout<<"Steel has grade 5";
}
