/*In the game of Scrabble, each letter has points associated with it. The total score of a 
word is the sum of the scores of its letters. Create a function named wordScore that 
returns the total score of the given word. More common letters are worth fewer points 
while less common letters are worth more points. The points associated with each letter 
are shown below:
1 Points-A,E,I,L,N,O,R,S,T,U
2 Points-D,G
3 Points-B,C,M,P
4 Points-F,H,V,W,Y
5 Points-K
8 Points-J,X
10 Points-Q,Z
Write a main program that demonstrates your function.*/

#include<bits/stdc++.h>
using namespace std;
int wordScore(string word)
{
    int score=0;
    int s[]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    for(int i=0;i<word.length();i++)
    {
        score+=s[word[i]-'A'];
    }
    return score;
}
int main()
{
    string w;
    cout<<"enter Word: ";
    cin>>w;
    cout<<"Total Score : "<<wordScore(w);
}