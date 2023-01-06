#include<bits/stdc++.h>
using namespace std;
string* createDeck()
{
    string values="23456789TJQKA";
    string suits="shdc";
    string* deck=new string[52];;
    int i=0;
    for(auto v:values)
    {
        for(auto s:suits)
        {
            string tmp="";
            tmp=tmp+v+s;
            cout<<tmp<<" ";
            deck[i++]=tmp;
        }
    }
    return deck;

}
void swap(string deck[52],int i,int j)
{
    string tmp=deck[i];
    deck[i]=deck[j];
    deck[j]=tmp;
}
void shuffle(string deck[52]){
    srand(time(0));
    for(int i=0;i<52;i++)
    {
        int rind=rand()%52;
        swap(deck,i,rind);
    }
}
void display(string deck[52]){
    for(int i=0;i<52;i++)
    {
        cout<<deck[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    int n;
    cin>>n;
   string * deck=createDeck();
    display(deck);
    shuffle(deck);
    display(deck);
    int k=0;
    for(int i=0;i<n;i++)
    {
        cout<<"Player "<<i+1<<" : ";
        for(int j=0;j<5;j++)
        {
            cout<<deck[k++]<<" ";
        }
        cout<<"\n";
    }
    
}