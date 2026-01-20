#include<iostream>
using namespace std;

int main()
{
    int arr[5]={3,3,3,3,3};
    int n=5;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            if(arr[i] == arr[j])
            {
                cout<<arr[i]<<endl;
                break;
            }
        }
    }
}