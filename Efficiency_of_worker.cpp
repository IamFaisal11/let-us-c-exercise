/* In a company, worker efficiency is determined on the basis of the time required for a worker to complete 
a particular job. If the time taken by the worker is between 2 – 3 hours, then the worker is said to be highly 
efficient. If the time required by the worker is between 3 – 4 hours, then the worker is ordered to improve speed. 
If the time taken is between 4 – 5 hours, the worker is given training to improve his speed, and if the time 
taken by the worker is more than 5 hours, then the worker has to leave the company. If the time taken by the worker 
is input through the keyboard, find the efficiency of the worker */
#include<iostream>

int main()
{
  float T;
  std::cout<<"Enter time taken by worker to complete the job(in hrs): ";
    std::cin>>T;
    if(T>=2 && T<=3)
      std::cout<<"Worker is Highly efficient";
    if(T>3 && T<=4)
  std::cout<<"Worker need to improve speed";
    if(T>4 && T<=5)
     std::cout<<"Worker need training to improve speed";
    if(T>5)
        std::cout<<"Worker is Highly inefficient & need to leave the company";
}
