#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{
  int isDigit = 0, isspecial_ch = 0, iscapital = 0;
  char password[20];
  cout << "Enter your password" << endl;
  gets(password);
  try
  {
    if (strlen(password) < 6)
    {
      throw 1;
    }
    for (int i = 0; password[i] != '\0'; i++)
    {
      if (isdigit(password[i]))
      {
        isDigit = 1;
      }
  
      if (!(password[i] >= 'A' && password[i] <= 'Z' || password[i] >= 'a' && password[i] <= 'z' || password[i] >= '0' && password[i] <= '9'))
      {
        isspecial_ch = 1;
      }
      if(password[i]>='A' && password[i]<='Z')
      {
        iscapital=1;
      }
    }
    if (isDigit == 0)
    {
      throw 2;
    }
    if (isspecial_ch == 0)
    {
      throw 3;
    }
     if (iscapital == 0)
    {
      throw 4;
    }
  }
  catch (int num)
  {
    if (num == 1)
    {
      cout << "password has less than 6 charecters\n"
           << endl;
    }
    if (num == 2)
    {
      cout << "no digit found\n";
    }
    if (num == 3)
    {
      cout << "no special charecter found\n";
    }
    if (num == 4)
    {
      cout << "no capital letter  found\n";
    }
  }
  return 0;
}