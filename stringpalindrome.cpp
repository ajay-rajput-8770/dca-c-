
#include <iostream>
using namespace std;

bool isPalindrome(char str[])
{
    int s = 0;
    int e = 0;

    // length nikalna
    while(str[e] != '\0')
        e++;

    e--; // last index

    while(s < e)
    {
        if(str[s] != str[e])
            return false;

        s++;
        e--;
    }
    return true;
}

int main()
{
    char str[50];

    cout << "Enter a string: ";
    cin >> str;

    if(isPalindrome(str))
        cout << "Palindrome string";
    else
        cout << "Not a palindrome string";

    return 0;
}
