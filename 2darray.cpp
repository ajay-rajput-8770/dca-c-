#include <iostream>
using namespace std;

int main()
{
    //create 2 d array
    int arr[3][4];
    
    //taking input ->row wise input leta he
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<4; j++)
    //     {
    //         cin>>arr[i][j];//row wise input
    //     }
    // }
    // //print 
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<4; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[j][i];//column wise input
        } 
    }
    //print 
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}