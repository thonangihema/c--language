/*Create a function named diceGame that simulates the number of times 6 will appear in 10 
dice throws.
Write a main function to demonstrate the function.*/
#include<bits/stdc++.h>
using namespace std;
int diceGame()
{
    int appear=0;
    for(int i=0;i<10;i++)
    {
        srand(time(0));
        if((rand()%6+1)==6)
        {
             appear+=1;
        }
    }
    return appear;


}
int main()
{
    cout<<diceGame();
}