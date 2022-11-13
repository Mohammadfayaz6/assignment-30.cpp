#include<iostream>
using namespace std;
int main()
{
    int pincode,count=0;
    cout<<"Enter Your Area Pincode"<<endl;
    cin>>pincode;
    try
    {
        while(pincode)
        {
           pincode=pincode/10;
           count++; 
        }
        if(count==6)
        {
            cout<<"Valid Pincode";
        }
        if(count!=6)
        {
            throw count;
        }
    }
    catch(int num)
    {
       cout<<"Invalid pincode";
    }
    
    return 0;
}