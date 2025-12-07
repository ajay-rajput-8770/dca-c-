#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=4; i++)   // rows
    {
        for(int j=i; j>=1; j--)   // reverse numbers
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
