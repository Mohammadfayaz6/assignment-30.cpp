#include <iostream>
using namespace std;
int main()
{
   char gmail[30], atthe_rate = 0, athe_gmail = 0;
   char email[] = "gmail.com";
   cout << "Enter your email id" << endl;
   gets(gmail);
   try
   {
      for (int i = 0; gmail[i] != '\0'; i++)
      {
         if (gmail[i] == '@')
         {
            atthe_rate = 1;
         }
         if (gmail[i] == *email)
         {
            athe_gmail = 1;
         }
      }
      if (atthe_rate == 0)
      {
         throw 1;
      }
      if (athe_gmail == 0)
      {
         throw 2;
      }
      else
      {
         cout << "Email id is valid" << endl;
      }
   }
   catch (int a)
   {
      if (a == 1)
      {
         cout << "@ is not contain \n";
      }
      if (a == 2)
      {
         cout << "gmail.com not contain \n";
      }
   }
   return 0;
}
