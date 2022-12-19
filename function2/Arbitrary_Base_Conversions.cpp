/*Create a function named convertBase that allows the user to convert a number from one 
base to another. Your program should support bases between 2 and 16 for both the input 
number and the result number. If the user chooses a base outside of this range then an 
appropriate error message should be displayed and the program should exit. 
Hint: Write sub functions, including a function that converts from an arbitrary base to
base 10, a function that converts from base 10 to an arbitrary base, and a main program 
that reads the bases and input number from the user.*/
#include<bits/stdc++.h>
using namespace std;
int toDecimal(string num1,int bs1)
{
    int res=0,base=0,val;
    for(int i=num1.length()-1;i>=0;i--)
    {
        if(num1[i]>57)
        {
            val=num1[i]-'A'+10;
        }
        else
        {
            val=num1[i]-'0';
        }
       res=res+(val*pow(bs1,base));
       base=base+1;
    }
    return res;
    
}
void convertBase(string num,int b1,int b2)
{
    int value,r;
    string result;
    if(b1<2||b1>16||b2<2||b2>16)
    {
        cout<<"Not possible to convert to given base"; 
    }
    else
    {
        value=toDecimal(num,b1);
        while(value>0)
        {
            r=value%b2;
            if(r>9)
            {
                r=r-10+'A';
                 result+=char(r);
            }
            else
            {
                 result+=to_string(r);
            }
            value=value/b2;
            
        }
      for(int i=result.length()-1;i>=0;i--)
         {
        cout<<result[i];
         }

    }
}
int main()
{
 int base1,base2;
 string f;
 cin>>f;
 cout<<"Enter the base between 2 to 16 :";
 cin>>base1>>base2;
 convertBase(f,base1,base2);
}