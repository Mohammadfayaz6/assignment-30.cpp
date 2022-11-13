#include <iostream>
using namespace std;
bool isvalidEmail(char *str)
{
    int length = 0;
    int atoffset = -1;
    int dotoffset = -1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '@')
            atoffset = i;
        else
        {
            if (str[i] == '.')
                dotoffset = i;
        }
        length++;
    }
    cout<<"length of email i is : "<<length;
    if (atoffset == -1 || dotoffset == -1)
        return 0;
    if (atoffset > dotoffset)
        return 0;

    return !(dotoffset >= (length - 1));
}
int main()
{
    char email[50];
    cout << "Enter your Email Id" << endl;
    gets(email);
    try
    {
        if ((isvalidEmail(email)))
            cout << "Email id is valid";
        else
            throw 'c';
    }
    catch (char a)
    {
        cout << "invalid email id";
    }

    return 0;
}