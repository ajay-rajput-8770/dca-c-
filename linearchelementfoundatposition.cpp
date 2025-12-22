#include <iostream>
using namespace std;
bool ispresent(int arr[3][4],int target,int row, int col )
{
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            if(arr[row][col] == target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    //create 2 d array
    //int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    int arr[3][4];
   
    // //print 
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<4; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
   
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
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
    cout<<"enter the element to search"<<endl;
    int target;
    cin>>target;
    
    if(ispresent(arr,target,3,4))
    {
        cout<<"found";
    }
    else
    {
        cout<<"not found";
    }
    return 0;
}