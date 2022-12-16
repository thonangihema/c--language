/*An integer, n, is said to be perfect when the sum of all of the proper divisors of n is equal 
to n. For example, 28 is a perfect number because its proper divisors are 1, 2, 4, 7 and 14, 
and 1 + 2 + 4 + 7 + 14 = 28. Create a function named isPerfect that determines whether 
or not a positive integer is perfect. Your function will take one parameter. If that 
parameter is a perfect number then your function will return true. Otherwise it will return 
false. In addition, write a main program that uses your function to identify and display all 
of the perfect numbers between 1 and 10,000.
*/
#include<iostream>
using namespace std;
bool isPerfect(int num)
{
    int c=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0 && c<=num)
        {
            c=c+i;
            if(c==num)
            {
                return true;
                break;
            }
        }
    }
    return false;
    
}
int main()
{
    int number;
    cin>>number;
    if(isPerfect(number))
    {
        cout<<"Perfect Number";
    }
    else
    {
        cout<<"Not a Perfect Number";
    }
}