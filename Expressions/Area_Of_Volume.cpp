/*Write a program that begins by reading a radius, r, from the user. The program will
continue by computing and displaying the area of a circle with radius r and the volume of 
a sphere with radius r.
*/
#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the radius : ";
    cin>>r;
    cout<<"Area of circle : "<<3.14*r*r<<"\n";
    cout<<"volume of sphere : "<<(4/3)*3.14*r*r;
}
