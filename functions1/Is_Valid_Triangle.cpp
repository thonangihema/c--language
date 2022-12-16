/*n general, if any one length is greater than or equal to the sum of the other two then the 
lengths cannot be used to form a triangle. Otherwise they can form a triangle. Create a 
function named isValidTriangle that determines whether or not three lengths can form a 
triangle. The function will take 3 parameters and return a boolean result. If any of the 
lengths are less than or equal to 0 then your function should return False. Otherwise it
should determine whether or not the lengths can be used to form a triangle, and return the 
appropriate result. Include a main program to demonstrate your function.
*/
#include<iostream>
using namespace std;
bool isValidTriangle(int side1,int side2,int side3)
{
    if((side1+side2)<=side3||(side2+side3)<=side1||(side1+side3)<=side2)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(isValidTriangle(s1,s2,s3)==0)
    {
        cout<<"False";
    }else
    {
        cout<<"True";
    }
}
