/*
Positions on a chess board are identified by a letter and a number. The letter identifies the
column, while the number identifies the row.
Write a program that reads a position from the user and determine whether that position
represents a black square or a white square. For example, if the user enters a1 then your
program should report that the square is black. If the user enters d5 then your program
should report that the square is white. Your program may assume that a valid position
will always be entered. It does not need to perform any error checking.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    string s;
    cout<<"enter position : ";
    cin>>s;
        if(((s[1]%2==0) && (s[0]%2==0))||((s[1]%2!=0) && (s[0]%2!=0)))
        {
        cout<<"Black";
        }
        else
        {
        cout<<"White";
        } 
}
