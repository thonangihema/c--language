/*
Create a function named getSeq that reads integers from user until user enters 0 and 
returns those numbers. Include a main program to test your function.
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> getSeq()
{
    vector<int>v;
    int val;
    while(true)
    {
        cin>>val;
        if(val!=0)
        {
            v.push_back(val);
        }
        else
        {
            break;
        }
    }
    return v;

}
int main()
{
    vector<int>values=getSeq();
    for(auto i:values)
    {
        cout<<i<<"\n";
    }
    
}