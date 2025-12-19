#include<iostream>
using namespace std;

void reverse(char name[])
{
    int s = 0;
    int e = 0;

    // length yahin nikal li
    while(name[e] != '\0')
    {
        e++;
    }
    e = e - 1;   // last index

    while(s < e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

int main()
{
    char name[20];

    cout << "enter your name: ";
    cin >> name;

    cout << "your name is: ";
    cout << name << endl;

    reverse(name);   // direct call

    cout << "reverse name is: ";
    cout << name << endl;

    return 0;
}