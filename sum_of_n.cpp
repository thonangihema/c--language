/*Write a program that reads a positive integer, n, from the user and then displays the sum 
of all of the integers from 1 to n. The sum of the first n positive integers can be computed 
using the formula*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n value:";
    cin>>n;
    cout<<"sum of n +ve numbers:";
    cout<<(n*(n+1))/2;
}