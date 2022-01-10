#include<iostream>
using namespace std;
int main()
{
  float sp,cp;
  std::cout<<"Enter Cost Price and Selling Price"<<endl;
  std::cin>>cp>>sp;
  if(sp-cp>0)
  {
     std::cout<<"Profit incurred is "<<sp-cp;
  }
  if(sp-cp<0)
    {
      std::cout<<"Loss incurred is"<<cp-sp;
     }
return 0;
}
