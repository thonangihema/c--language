/*Write a program that reads a letter of the alphabet from the user. If the user enters a, e, i,
o or u then your program should display a message indicating that the entered letter is a
vowel. If the user enters y then your program should display a message indicating that
sometimes y is a vowel, and sometimes y is a consonant. Otherwise your program should
display a message indicating that the letter is a consonant.
*/
#include<iostream>
using namespace std;
int main()
{
    char vc;
    cout<<"Enter alphabet : ";
    cin>>vc;
    if((vc=='a')||(vc=='e')||(vc=='i')||(vc=='o')||(vc=='u'))
    {
        cout<<"Entered letter is a vowel";
    }
    else
    {
        cout<<"Entered letter is consonant";
    }
}