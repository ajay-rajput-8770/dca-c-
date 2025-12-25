#include <iostream>
#include<vector>
using namespace std;

vector <int> wavePrint(vector<vector<int>> arr, int nrow, int mcol)
{
    vector<int> ans;
    
    for(int col=0; col<mcol; col++)
    {
        if(col&1)
        {
            //odd Index -> Bottom to top
            
            for(int row = nrow-1; row>=0; row--)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            //o or even Index -> top to Bottom
            for(int row=0; row<nrow; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}  
int main()
{
int nrow, mcol;

    cout << "Enter number of rows: ";
    cin >> nrow;

    cout << "Enter number of columns: ";
    cin >> mcol;

    vector<vector<int>> arr(nrow, vector<int>(mcol));

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < nrow; i++)
    {
        for(int j = 0; j < mcol; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> result = wavePrint(arr, nrow, mcol);

    cout << "\nWave Print Output: ";
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}