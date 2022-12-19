/*Write a function named medianOfThree that takes three numbers as parameters, and 
returns the median value of those parameters as its result. Include a main program that 
reads three values from the user and displays their median. The median value is the 
middle of the three values when they are sorted into ascending order.*/
#include<iostream>
using namespace std;
int medianOfThree(int num1,int num2,int num3)
{
    if(num1<num2)
    {
        if(num2<num3)
        {
            return num2;
        }
        else
        {
            return num1;
        }
    }
    else
    {
        if(num1<num3)
        {
            return num1;
        }
        else
        {
            return num2;
        }
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<medianOfThree(a,b,c);
}