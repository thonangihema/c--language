/*Write a function named getHypotenuse that takes the lengths of the two shorter sides of a 
right triangle as its parameters. Return the hypotenuse of the triangle, computed using 
Pythagorean theorem, as the function’s result. Include a main program to demonstrate 
your function.*/
#include <bits/stdc++.h>
using namespace std;
void getHypotenuse(int side1,int side2)
{
    cout<<sqrt((side1*side1)+(side2*side2));
}
int main()
{
    
    int s1,s2;
    cin>>s1>>s2;
    getHypotenuse(s1,s2);
    return 0;
}