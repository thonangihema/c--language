/*
Write a program that implements Newton’s method to compute and display the square 
root of a number, x, entered by the user. The algorithm for Newton’s method follows:
Read x from the user
Initialize guess to x/2
While guess is not good enough do
Update guess to be the average of guess and x/guess
When this algorithm completes, guess contains an approximation of the square root of x. 
The quality of the approximation depends on how you define “good enough”. In the 
author’s solution, guess was considered good enough when the absolute value of the 
difference between guess * guess and x was less than or equal to 10-12
.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    double res;
    cin>>x;
float guess;
guess=x/2;
float p=pow(10,-3);
while((abs(guess*guess-x))>=p)
{
    guess=(guess+x/guess)/2;
}
cout<<guess;
}