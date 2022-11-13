#include <iostream>
#include <string.h>
#include<ctype.h>
using namespace std;
int main()
{
   int isDigit = 0, isspecial_char = 0, ischar = 0;
   char user_name[20];
   cout << "Enter your name"<<endl;
   gets(user_name);

   try
   {

      if (strlen(user_name) > 6)
      {
         throw 1;
      }
      for (int i = 0; user_name[i] != '\0'; i++)
      {
         if (isdigit(user_name[i]))
         {
            isDigit = 1;
         }
         if ((user_name[i] > 'a' && user_name[i] < 'z') || (user_name[i] > 'A' && user_name[i] < 'Z') || (user_name[i] > '0' && user_name[i] < '9'))
         {
            ischar = 1;
         }
         else
         {
            isspecial_char = 1;
         }
      }
      if (isDigit == 0)
      {
         throw 2;
      }
      if (isspecial_char == 0)
      {
         throw 3;
      }
   }
   catch (int num)
   {
      if (num == 1)
      {
         cout << "Exception user name contains more than 6 charecter" << endl;
      }
      if (num == 2)
      {
         cout << "Exception user name doesn't contain digit " << endl;
      }
      if (num == 3)
      {
         cout << "Exception user name doesn't contain special charecter";
      }
   }

   return 0;
}