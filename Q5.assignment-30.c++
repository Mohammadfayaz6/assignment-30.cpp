#include <iostream>
using namespace std;
int main()
{
    int MobileNo, count = 0;
    cout << "Enter your mobile number" << endl;
    cin >> MobileNo;
    try
    {
        while (MobileNo)
        {
            MobileNo = MobileNo / 10;
            count++;
        }
        if (count == 10)
        {
            throw 1;
        }
        if (count != 10)
        {
            throw 2;
        }
    }
    catch (int num)
    {
        if (num == 1)
        {
            cout << "Valid Mobile Number";
        }
        if (num == 2)
        {
            cout << "Invalid Mobile Number";
        }
    }

    return 0;
}