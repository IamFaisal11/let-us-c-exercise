/* An Insurance company follows following rules to calculate premium. 
(i) If a person’s health is excellent and the person is between 25 and 35 years of age and lives in a city and is a male then the premium is Rs. 4 per 
thousand and his policy amount cannot exceed Rs. 2 lakhs. 
(ii) If a person satisfies all the above conditions except that the sex is female then the premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh.
(iii) If a person’s health is poor and the person is between 25 and 35 years of age and lives in a village and 
is a male then the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000. 
(iv) In all other cases the person is not insured. 
Write a program to output whether the person should be insured or not, his/her 
premium rate and maximum amount for which he/she can be insured. */
#include<iostream>
using namespace std;
int main()
{
    char HEALTH,LOC,GENDER;
   float AGE;
    std::cout<<"Welcome to XYZ Insurance Co";
    std::cout<<"Please select appropriate options";
 std::cout<<"How is health of person(P=Poor,E=Excellant): ";
    std::cin>>HEALTH;
 std::cout<<"nWhat is his/her age: ";
   std::cin>>AGE;
     std::cout<<"Where does he/she lives(C=City,V=village):";
  std::cin>>LOC;
   std::cout<<"Enter gender(M=Male,F=Female):";
    std::cin>>GENDER;

    if((HEALTH=='E'||HEALTH=='e')&&(AGE>=25 && AGE<=35)&&(LOC=='C' || LOC=='c')&&(GENDER=='M' || GENDER=='m'))
     std::cout<<"Premium = Rs.4 per 1000 & Max insurance is Rs. 2 Lakhs";
else if((HEALTH=='E'||HEALTH=='e')&&(AGE>=25 && AGE<=35)&&(LOC=='C' || LOC=='c')&&(GENDER=='M' || GENDER=='m'))
 std::cout<<"Premium = Rs.3 per 1000 & Max insurance is Rs. 1Lakh";
else if((HEALTH=='P'||HEALTH=='p')&&(AGE>=25 && AGE<=35)&&(LOC=='V' || LOC=='v')&&(GENDER=='M' || GENDER=='m'))
 std::cout<<"Premium = Rs.6 per 1000 & Max insurance is Rs. 10,000";
else
    std::cout<<"Person can not be insured";
}
