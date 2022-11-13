#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  int num1, num2, res;
  char Operator;
  cout << "\nPerform Arithematic Operation on Two numbers";
  cout << "\n----------------------------------------------"<<endl;
  try
  {
    cout << "Enter first number"<<endl;
    cin >> num1;
    if (num1 == 0)
    {
      throw num1;
    }
    cout << "\nEnter operator"<<endl;
    cin >> Operator;
    if (Operator != '+' && Operator != '*' && Operator != '-' && Operator != '/')
    {
      throw Operator;
    }
    cout << "\nEnter second number"<<endl;
    cin >> num2;
    cout << "\n";
    switch (Operator)
    {
    case '+':
      res = num1 + num2;
      break;

    case '-':
      res = num1 - num2;
      break;
    case '*':
      res = num1 * num2;
      break;
    case '/':
      if (num2 == 0)
      {
        throw num2;
      }
      else
      {
        res = num1 / num2;
      }
      break;
    }
    cout << "\nresult is " << num1 << " " << Operator << " " << num2 << " = " << res;
  }
  catch (char a)
  {
    cout << "\nException caught \n bad operator \n invalid operator";
  }
  catch (int b)
  {
    cout << "error : bad operator ";
  }

  return 0;
}