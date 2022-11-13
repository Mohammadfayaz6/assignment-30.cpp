#include<iostream>
using namespace std;
void Test_try(int num)
{
   try
   {
      if(num>=0 && num<=9)
      {
        throw num;
      }
      else
      {
        cout<<"It is not a single number";
        throw ;
      }
   }
   catch(int y)
   {
      cout<<"it is a single number";
   }
   catch(char z[100])
   {
    cout<<z;
   }
   
}
int main()
{
   int x;
   cout<<"Enter any number "<<endl;
   cin>>x;
   Test_try(x);
    return 0;
}