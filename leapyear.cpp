//ANY YEAR IS INPUT THROUGH THE KEYBOARD. WRITE A PROGRAM TO DETERMINE WHETHER THE YEAR IS A LEAP YEAR OR NOT.
#include <iostream>
using namespace std;

int main() 
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) 
	{
        if (year % 100 == 0)
		 {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

    return 0;
}
