/*In a particular jurisdiction, older license plates consist of three uppercase letters followed 
by three digits. When all of the license plates following that pattern had been used, the 
format was changed to four digits followed by three uppercase letters. Write a program 
that begins by reading a string of characters from the user. Then your program should 
display a message indicating whether the characters are valid for an older style license 
plate or a newer style license plate. Your program should display an appropriate message 
if the string entered by the user is not valid for either style of license plate.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
  cout<<"Enter string of characters : ";
  cin>>s;
  if(s.length()==6)
  {
    if(((s[0]<91)&&(s[0]>64))&&((s[1]<91)&&(s[1]>64))&&((s[2]<91)&&(s[2]>64))&&((s[3]<58)&&(s[3]>47))&&((s[4]<58)&&(s[4]>47))&&((s[5]<58)&&(s[5]>47)))
    {
        cout<<"Valid";
    }
    else
    {
        cout<<"Not Valid";
    }
  }
  else if(s.length()==7)
  {
    if(((s[0]<58)&&(s[0]>47))&&((s[1]<58)&&(s[1]>47))&&((s[2]<58)&&(s[2]>47))&&((s[3]<58)&&(s[3]>47))&&((s[4]<91)&&(s[4]>64))&&((s[5]<91)&&(s[5]>64))&&((s[6]<91)&&(s[6]>64)))
    {
      cout<<"Valid";
    }
    else
    {
        cout<<"Not Valid";
    }
  }
  else
  {
    cout<<"Not Valid";
  }
}