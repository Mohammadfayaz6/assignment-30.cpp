#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 'a';
    }
    catch(char a)
    {
       cout<<"Exception caught";
    }
    
    return 0;
}