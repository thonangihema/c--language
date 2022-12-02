/*Write a program that computes the area of a triangle when the lengths of all three sides 
are known. Let s1, s2 and s3 be the lengths of the sides and let s = (s1 + s2 + s3)/2. Then 
the area of the triangle can be calculated using the following formula:
area=sqrt(s*(s-s1)*(s-s2)*(s-s3))
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double s1,s2,s3,s;
    cout<<"Enter the lengths of 3 sides:";
    cin>>s1>>s2>>s3;
    if(s1<=0||s2<=0||s3<=0||(s1+s2)<=s3||(s2+s3)<=s1||(s1+s3)<=s2)
    {
        cout<<"Not possible\n";
    }
    else
    {
        s=(s1+s2+s3)/2;
        cout<<"area: "<<sqrt(s*(s-s1)*(s-s2)*(s-s3));
    }

}