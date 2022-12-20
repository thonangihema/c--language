/*Create a function decode that takes a character as input and returns the ASCII code of 
that character. Create a function encode that takes a ASCII code(number) as input and 
returns the character associated with it. 
Write a main program to demonstrate your function.*/
#include<iostream>
using namespace std;
char encode(int number)
{
    return number;
}
int decode(char val)
{
   return val;
}
int main()
{
    char value;
    cin>>value;
    cout<<"Ascii value of "<<value<<" is : "<<decode(value)<<"\n";
    int num;
    cin>>num;
    cout<<"Character for Ascii value "<<num<<" is : "<<encode(num);

}