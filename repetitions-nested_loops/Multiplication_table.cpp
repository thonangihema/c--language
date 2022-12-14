/*In this exercise you will create a program that displays a multiplication table that shows 
the products of all combinations of integers from 1 times 1 up to and including 10 times 
10. Your multiplication table should include a row of labels across the top of it containing 
the numbers 1 through 10. It should also include labels down the left side consisting of 
the numbers 1 through 10.*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"   ";
    for(int k=1;k<=10;k++)
    {
        cout<<k<<"   ";
    }
    cout<<"\n";
   for(int i=1;i<=10;i++)
   {
    cout<<i<<"  ";
    for(int j=1;j<=10;j++)
    {
        cout<<i*j<<"  ";
    }
    cout<<"\n";
   }

}