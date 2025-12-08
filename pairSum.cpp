/*#include <iostream>
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
*/
#include <iostream>
using namespace std;

int main() {
    int n=4;
    char ch='A';
    for(int i=0; i<n ; i++)   // rows
    {
        //space :n-i;
        for(int j=0; j<n-i; j++) 
        {
            cout<<" ";
        }// reverse numbers
        
        //numbers 1:i+1;
        for(int s=1;s<=i+1; s++)
        {
            cout <<s;
        }
        // ch=ch+1;
        //numbers 2:
        for(int n=i;n>=1;n--)
        {
            cout<<n;
        }
        
        cout<<endl;
       
    }

    return 0;
}

/*#include <iostream>
using namespace std;

int main() {
    int n=4;  

    for(int i=0; i<n ; i++)   // rows
    {
        //space :n-i;
        for(int j=0; j<n-i; j++) 
        {
            cout<<" ";
        }// reverse numbers
        cout<<"*";
        if(i!=0)
        {
             for(int s=1;s<=2*i-1; s++)
             {
                 cout<<" ";
             }
             cout<<"*";
        }
        
        
        cout<<endl;
       
    }
    
    //bottem part
    for(int i=0;i<(n-1);i++)
    {
        for(int j=0; j<i+1; j++) 
        {
            cout<<" ";
        }// reverse numbers
        cout<<"*";
        if(i!=n-i)
        {
             for(int s=0;s<=2*(n-i)-5; s++)
             {
                 cout<<" ";
             }
             cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
*/
#include <iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> nums,int target)
{
    vector<int> ans;
    int n=nums.size();
     for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums={2,7,11,15};
    int target=18;
    
    vector<int> ans=pairSum(nums, target);
    cout<< ans[0] <<", "<<ans[1]<<endl;
   
    
    return 0;
}