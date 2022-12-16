/*A prime number is an integer greater than 1 that is only divisible by one and itself. Create
a function named isPrime that determines whether or not its parameter is prime, returning
true if it is, and false otherwise. Write a main program that reads an integer from the user 
and displays a message indicating whether or not it is prime.
*/
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
int main()
{
   int number;
   cin>>number;
   if(isPrime(number)){
       cout<<"Prime number";
   }
   else
   {
       cout<<"Not a prime number";
   }
   }