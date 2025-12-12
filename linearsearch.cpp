#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

}

int main()
{
    int arr[]={7,2,10,4,78,5,3};
    
    insertionSort(arr,7);
    cout<<"After Shorting"<<endl;
    
    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<" ";
    }
}