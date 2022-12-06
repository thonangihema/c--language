/*
A triangle can be classified based on the lengths of its sides as equilateral, isosceles or
scalene. All three sides of an equilateral triangle have the same length. An isosceles
triangle has two sides that are the same length, and a third side that is a different length. If
all of the sides have different lengths then the triangle is scalene. Write a program that
reads the lengths of the three sides of a triangle from the user, then display a message that
states the triangle’s type.
*/
#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3;
    cout<<"Enter length of three side:";
    cin>>s1>>s2>>s3;
    if((s1==s2)&&(s1==s3))
    {
        cout<<"Equilateral Triangle";
    }
    else if((s1==s2)||(s2==s3)||(s1==s3))
    {
        cout<<"Isosceles Triangle";
    }
    else
    {
        cout<<"Scalene Triangle";
    }
}