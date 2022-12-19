/*One of the first known examples of encryption was used by Julius Caesar. The idea 
behind Caesar cipher is simple. It starts by taking shift amount and message as input, then 
each letter in the original message is shifted(with wrap around) by shift amount places. 
For example, if shift amount=3 and message=axy then the result must be dab.
Create a function named encrpytWithCaesar that takes a string, shift amount as input and 
returns the encrypted string as suggested by Caesar cipher. Ensure that your program 
encodes both uppercase and lowercase letters. Non-letter characters are not modified by 
the cipher.
Write a main program to demonstrate your function */
#include<bits/stdc++.h>
using namespace std;
string encryptWithCaesar(string message,int shiftamnt)
{

     for(int i=0;i<message.length();i++)
     {   
    if (message[i] >= 'A' && message[i]<= 'Z') {
        char c = message[i] - 'A';
        c = c+shiftamnt;
        c = c % 26;
        if(c<0)
        {
            c=(c+26)%26;
        }
        message[i] = c + 'A';
    }
     else if (message[i] >= 'a' && message[i]<= 'z') {
        char c = message[i] - 'a';
        c =c+shiftamnt;
        c = c % 26;
        if(c<0)
        {
            c=(c+26)%26;
        }
        message[i] = c + 'a';
    }
     }
     return message;
}
int main()
{
     string msg;
     int shiftamt;
     cin>>msg>>shiftamt;
     cout<<encryptWithCaesar(msg,shiftamt);
    
  
}
