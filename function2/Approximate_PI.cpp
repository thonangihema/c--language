/*The value of π can be approximated by the infinite series
Create a function approximatePI that takes number of approximations required as an 
input and returns approximated PI value. The first approximation should make use of 
only the first term from the infinite series. Each additional approximation returned by 
your function should include one more term in the series, making it a better 
approximation of π than any of the approximations computed previously. Include a main 
program to demonstrate your function*/
#include<bits/stdc++.h>
using namespace std;
double approximatePI(int val)
{
    double res=3.0,b=0;
    double x,y,z;
    for(int i=1;i<=val;i++)
    {
        x=2+b;
        y=3+b;
        z=4+b;
        if(i%2==0)
        {
             res=res-(4/(x*y*z));
              
        }
        else
        {
             res=res+(4/(x*y*z));
              
        }
        b=b+2;
    }
    return res;
}
int main()
{
    int term;
    cin>>term;
    cout<<approximatePI(term);
}