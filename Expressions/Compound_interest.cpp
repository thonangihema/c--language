/*Pretend that you have just opened a new savings account that earns 4 percent interest per 
year. The interest that you earn is paid at the end of the year, and is added to the balance 
of the savings account. Write a program that begins by reading the amount of money 
deposited into the account from the user. Then your program should compute and display 
the amount in the savings account after 1, 2, and 3 years. Display each amount so that it 
is rounded to 2 decimal places.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    float one=0.0,two=0.0,three=0.0;
    cout<<"Enter the amount of money deposited into the account : ";
    cin>>m;
    one=(m*(float)4/100)+m;
    two=(one*(float)4/100)+one;
    three=(two*(float)4/100)+two;
    cout<<fixed<<setprecision(2)<<"Year-1 : " <<one<<"\n";
    cout<<fixed<<setprecision(2)<<"Year-2 : " <<two<<"\n";
    cout<<fixed<<setprecision(2)<<"Year-3 : " <<three<<"\n";

}
