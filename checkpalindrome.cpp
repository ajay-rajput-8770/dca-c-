#include <iostream>
using namespace std;

bool palindrome(char a[], int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(a[s] !=a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
     char name[20];
   
     cout<<"enter your name: ";
     cin>>name;
     
     cout<<"your name is :";
     cout<<name<<endl;
     int len = 0;
    while(name[len] != '\0')   // actual length
    {
        len++;
    }

     cout<<palindrome(name,len);

    return 0;
}