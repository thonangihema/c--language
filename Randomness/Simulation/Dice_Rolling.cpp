/*Create a function named rollDice that simulates the rolling of five dice and returns
"Yahoo" if all five dice are the same. Otherwise it should return "Try again". Write a 
main function to demonstrate the function.*/
#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;
bool rollDice()
{
    int a,b,c,d,e;
    srand(time(0));
    a=rand()%6+1;
    b=rand()%6+1;
    c=rand()%6+1;
    d=rand()%6+1;
    e=rand()%6+1;
    if(a==b && b==c && c==d && d==e)
    {
        return true;
    }
    else
    {
        return false;
    }


}
int main()
{
    if(rollDice())
    {
        cout<<"Yahoo ";
    }
    else
    {
        cout<<"Try again ";
    }

}