/*
Write a program that asks the user to enter the width and length of a room. Once these 
values have been read, your program should compute and display the area of the room. 
The length and the width will be entered as floating-point numbers. Include units in your 
prompt and output message in either feet or meters, depending on which unit you are 
more comfortable working with.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float l,w;
    cout<<"Enter length and width of room in meters:";
    cin>>l>>w;
    cout<<"The area of the room :"<<l*w<<" meters";
}