/*When one writes a function, it is generally a good idea to include a comment that outlines 
the function’s purpose, its parameters and its return value. However, sometimes 
comments are forgotten, or left out by well-intentioned programmers that plan to write 
them later but then never get around to it. Create a python function findMissingComments
that takes python source file as input and identifies functions that are not immediately 
preceded by a comment. For the purposes of this exercise, assume that any line that 
begins with def, followed by a space, is the beginning of a function definition. Assume 
that the comment character, #, will be the first character on the previous line when the 
function has a comment. Display the names of all of the functions that are missing 
comments, along with line number where the function definition is located.
Write a main program to demonstrate your function.*/

#include<bits/stdc++.h>
using namespace std;
void findMissingComments(string f)
{
    ifstream fin(f);
    string line;
    string prev="";
    int linenum=0;
    while(getline(fin, line)) {
        ++linenum;
        if((line.substr(0,3)=="def")&& prev[0]!='#')
        {
            string fname=line.substr(4,(line.find('(')-4));
            cout<<fname<<" : "<<linenum<<"\n";
        }
        if(line.length()==0)
        {
            prev="";
        }
        else
        {
            prev=line;
        }
    }
}
int main()
{
    string fnam;
    cin>>fnam;
    findMissingComments(fnam);
}