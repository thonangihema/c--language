/*The program that you create for this exercise will begin by reading the cost of a meal
ordered at a restaurant from the user. Then your program will compute the tax and tip for 
the meal. Compute the tax as 18 percent of the meal amount. Compute the tip as 5
percent of the meal amount (without the tax). The output from your program should 
include the tax amount, the tip amount, and the grand total for the meal including both the 
tax and the tip. Format the output so that all of the values are displayed using two decimal 
places.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float c,tax,tip,total;
    cout<<"enter cost of meal : ";
    cin>>c;
    tax=(18*c)/100;
    tip=(5*c)/100;
    total=c+tax+tip;
    cout<<fixed<<setprecision(2)<<"tax amount : "<<tax<<"\n";
    cout<<fixed<<setprecision(2)<<"tip amount : "<<tip<<"\n";
    cout<<fixed<<setprecision(2)<<"grand total for the meal : "<<float(total);
}