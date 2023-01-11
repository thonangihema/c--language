/*A boolean matrix has the parity property when each row and each column has an even 
number of bits(i.e., even sum) that are set. Create a function named parityOfMatrix that 
reads in a matrix and checks if it has the parity property. If parity property is satisfied 
then return “ok”. If not, your program should return “corrupt”. Include a main program to 
test your function.
Input: 4 × 4 matrix 
1 0 1 0
0 0 0 0
1 1 1 1
0 1 0 1
Output: “ok”
Explanation: The sums of the rows are 2, 0, 4, and 2. The sums of the columns are 2, 2, 
2, and 2*/
#include<bits/stdc++.h>
using namespace std;
bool parityOfMatrix(vector<vector<int>>&arr)
{
    int c=0,r=0,d=0,e=0;
    // cout<<"rows:\n";
    for(int i=0;i<arr.size();i++)
    {
        c=0;
        for(int j=0;j<arr[0].size();j++)
        {
            c=c+arr[i][j];
        }
        /*   cout<<c<<" ";
        cout<<"\n"; */
        if(c%2==0)
        {
            e=e+1;
        }
    } 
    // cout<<"columns:\n";
    for(int i=0;i<arr.size();i++)
    {
        r=0;
        for(int j=0;j<arr[0].size();j++)
        {
            r=r+arr[j][i];
        }
       /*  cout<<r<<" ";
        cout<<"\n"; */
        if(r%2==0)
        {
            d=d+1;
        }
    } 
    if(e==arr.size()&&d==arr[0].size())
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int a,b;
    cin>>a>>b;
    vector<vector<int>>matrix(a,vector<int>(b));
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>matrix[i][j];
        }
    }
    if(parityOfMatrix(matrix))
    {
        cout<<"Ok"<<"\n";
    }
    else
    {
        cout<<"Corrupt"<<"\n";
    }
}