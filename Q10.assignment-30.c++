#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{
    int isDigit = 0, isSpecial_symbol = 0, isSpace = 0;
    char Nickname[10];
    cout << "Enter Your Nick Name " << endl;
    gets(Nickname);
    try
    {
        if (strlen(Nickname) > 8)
        {
            throw 1;
        }
        for (int i = 0; Nickname[i] != '\0'; i++)
        {
            if (isdigit(Nickname[i]))
            {
                isDigit = 1;
            }
            
       if((Nickname[i] >= 'A' && Nickname[i] <= 'Z' || Nickname[i] >= 'a'|| Nickname[i] <= 'z' || Nickname[i] >= '0' && Nickname[i] <= '9'))
            {
                isSpecial_symbol = 1;
            }
            if (Nickname[i] == ' ')
            {
                isSpace = 1;
            }
        }

        if (isDigit == 1)
        {
            throw 2;
        }
        if (isSpecial_symbol == 0)
        {
            throw 3;
        }
        if (isSpace == 1)
        {
            throw 4;
        }
        else
        {
            cout<<"Your Nick Name is Valid "<<endl;
        }
    }
    catch (int num)
    {
        if (num == 1)
        {
            cout << "Exception occured  your nick name has  greater than 8 charecter" << endl;
        }
        if (num == 2)
        {
            cout << "Exception digit is  contained in your nick name" << endl;
        }
        if (num == 3)
        {
            cout << "Exception special symbol is  contained in your nick name" << endl;
        }
        if (num == 4)
        {
            cout << "Exception occured space is contained " << endl;
        }
    }
    return 0;
}