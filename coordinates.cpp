/* Any character is entered through the keyboard, write a program to determine whether the character entered is 
a capital letter, a small case letter, a digit or a special symbol */
#include<iostream>

int main()
{
    char ch;
   std::cout<<"Enter any character : ";
   std::cin>>ch;
    if((ch>64)&&(ch<91))
      std::cout<<"Character is a CAPITAL LETTER";
    else if((ch>96)&&(ch<123))
     std::cout<<"Character is a SMALL LETTER";
    else if((ch>47)&&(ch<58))
     std::cout<<"Character is a NUMBER";
    else if((ch>0 && ch<48)||(ch>57 && ch<65)||(ch>90 && ch<97)||(ch>122 && ch<128))
     std::cout<<"Character is SPECIAL SYMBOL";
}
