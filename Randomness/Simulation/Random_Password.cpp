/*Create a function named randomPassword that generates a random password. The 
password should have a random length between 7 and 10 characters. Each character 
should be randomly selected from positions 33 to 126 in the ASCII table. Your function 
will not take any parameters. It will return the randomly generated password as its only 
result. Write a main program that calls your function and displays the randomly generated 
password.
*/
#include<bits/stdc++.h>
using namespace std;
string randomPassword()
{
    srand(time(0));
    string psw="";
    int length=rand()%4+7;
    for(int i=0;i<length;i++)
    {
        char a=rand()%94+33;
        psw+=a;
    }
    return psw;

}
int main()
{
    cout<<randomPassword()<<"\n";
}
