/*Write a program that will examine each character in a given string and determine how 
many of the characters are vowels and how many are consonants.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    int consonant=0,vowel=0,i;
    cin>>word;
    for(i=0;i<word.length();i++)
    {
        word[i]=tolower(word[i]);
        if((word[i]=='a')||(word[i]=='e')||(word[i]=='i')||(word[i]=='o')||( word[i]=='u'))
        {
            vowel=vowel+1;
        }
        else
        {
            consonant=consonant+1;
        }
    }
    cout<<"There are "<<vowel<<" vowels and "<<consonant<<" consonants";

}