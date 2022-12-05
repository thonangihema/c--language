/*In many jurisdictions a small deposit is added to drink containers to encourage people to 
recycle them. In one particular jurisdiction, drink containers holding one liter or less have 
a $0.10 deposit, and drink containers holding more than one liter have a $0.25 deposit.
Write a program that reads the number of containers of each size from the user. Your 
program should continue by computing and displaying the refund that will be received 
for returning those containers. Format the output so that it includes a dollar sign and two 
digits to the right of the decimal point.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<fixed<<setprecision(2)<<"$"<<(x*0.10)+(y*0.25);
}