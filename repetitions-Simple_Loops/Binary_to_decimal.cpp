/*Write a program that converts a binary (base 2) number to decimal (base 10). Your
program should begin by reading the binary number from the user as a string. Then it 
should compute the equivalent decimal number by processing each digit in the binary 
number. Finally, your program should display the equivalent decimal number with an 
appropriate message*/
#include<iostream>
using namespace std;
int main()
{
    long binary,dis,dec=0,base=1,rem;
    cin>>binary;
    dis=binary;
    while(binary!=0)
    {
    rem=binary%10;
    dec=dec+(rem*base);
    base=base*2;
    binary=binary/10;
    }
    cout<<"Decimal equivalent for binary "<<dis<<" is "<<dec;
    
}