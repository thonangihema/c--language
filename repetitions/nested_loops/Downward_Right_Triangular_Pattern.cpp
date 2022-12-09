/*Given the value of n, write a program that displays the following pattern. For the given
value of 4 for n, the pattern looks like this:
* * * *
* * *
* *
* 
*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=n;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            cout<<" * ";
        }
        cout<<"\n";
       
    }
    
}