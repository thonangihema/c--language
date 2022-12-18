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
            return num3;
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