/*Rock paper scissors is a hand game for two or more players. Participants say “rock, 
paper, scissors” and then simultaneously form their hands into the shape of a rock (a fist), 
a piece of paper (palm facing downward), or a pair of scissors (two fingers extended). 
The rules are straightforward: 
-Rock smashes scissors 
-Paper covers rock
-Scissors cut paper
-If both players say same thing, then it is a draw
Let us simulate the game between a player and computer as an opponent. Create a 
function named getUserMove which reads user move from command line and returns that 
move. Create a function named getComputerMove which returns the random move of computer. Create a function named getResult that takes both user and computer moves as 
input, then returns 1, 0 or -1 for win, loss and draw respectively.
Write a main function that simulates the game for about 10 times and displays the 
number of wins, losses and draws of a player.  */
#include<bits/stdc++.h>
using namespace std;
int getUserMove()
{
    int move;
        cout<<"Enter\n 0 for rock \n 1 for paper \n 2 for scissors\n";
    cin>>move;
    return move;

}
int getComputerMove(){
    srand(time(0));
    int move1=rand()%3;
    return move1;
}
int getResult()
{
    int win=1,loss=0,draw=-1;
    int usermove=getUserMove();
    int computermove=getComputerMove();
    if(usermove==computermove)
    {
        return draw;
    }
    else if((usermove==0&&computermove==2)||(usermove==2&&computermove==1)||(usermove==1&&computermove==0))
    {
        return win;
    }
    else
    {
        return loss;
    }
}
int main()
{
    int w=0,l=0,d=0;
     for(int i=0;i<10;i++)
    {
        if(getResult()==1)
        {
            w++;
        }
        else if(getResult()==0)
        {
            l++;
        }
        else
        {
            d++;
        }
    }
    cout<<"win: "<<w<<" loss:"<<l<<" draw: "<<d<<"\n";
    
}