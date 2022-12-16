/*Create a function named nextPrime that finds and returns the first prime number larger 
than some integer, n. The value of n will be passed to the function as its only parameter. 
Include a main program that reads an integer from the user and displays the first prime 
number larger than the entered value*/
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int numb)
{
    for(int i=2;i<=sqrt(numb);i++)
   {
      if(numb%i==0)
      {
         return false;
      }
   }
   return true;
    
}
int prime(int num)
{
    int prm=num;
    int count=0;
    while(count!=1)
    {
        prm++;
        if(isPrime(prm))
        {
            count=1;
        }
    }
    return prm;
}
int main()
{
   int number;
   cin>>number;
   cout<<prime(number);
   }