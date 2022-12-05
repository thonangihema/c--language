/*
Write a program that determines how quickly an object is travelling when it hits the ground. The user will enter the height from which the object is dropped in meters (m).
Because the object is dropped its initial speed,vi, is 0 m/s. Assume that the acceleration due to gravity is 9.8 m/s^2. You can use the formula vf=sqrt((vi^2)+2ad) to compute the final speed, vf, when the initial speed, vi, acceleration, a, and distance, d, are known.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float vi=0,a=9.8,d,vf;
    cout<<" Enter the height from which the object is dropped in meters (m) : ";
    cin>>d;
    vf = sqrt((vi*vi)+(2*a*d));
    cout<<"final speed vf : "<<vf<<"m/s";
}