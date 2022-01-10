/* A university has the following rules for a student to qualify for a degree with A as the main subject and B 
as the subsidiary subject: 
(i) He should get 55 percent or more in A and 45 percent or more in B. 
(ii) If he gets less than 55 percent in A he should get 55 percent or more in B. However, he should get at least 
45 percent in A. 
(iii) If he gets less than 45 percent in B and 65 percent or more in A he is allowed to 
reappear in an examination in B to qualify. 
(iv) In all other cases he is declared to have failed. Write a 
program to receive marks in A and B and Output whether the student has passed, failed or is allowed to reappear in B */
#include<iostream>
int main()
{
 int A,B;
    std::cout<<"Enter percentage marks obtained in Sub A: ";
    std::cin>>A;
     std::cout<<"Enter percentage marks obtained in Sub B: ";
    std::cin>>B;
    if((A>=55 && B>=45) || (A>45 && A<55 && B>=55))
        std::cout<<"Qualified for the degree";
    else if(A>=65 && B<45)
         std::cout<<"Reappear in subject B to qualify for degree";
    else
       std::cout<<"Failed";
}
