/*Create a function named nextPrime that finds and returns the first prime number larger 
than some integer, n. The value of n will be passed to the function as its only parameter. 
Include a main program that reads an integer from the user and displays the first prime 
number larger than the entered value*/
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
    int count=0;
    for(int i=2;i<=sqrt(num);i++)
   {
      if(num%i==0)
      {
         return false;
      }
   }
   return true;
    
}
int prime(int n)
{
    int p=n;
    int b=0;
    while(b!=1)
    {
        p++;
        if(isPrime(p))
        {
            b=1;
        }
    }
    return p;
}
int main()
{
   int number;
   cin>>number;
   cout<<prime(number);
   }