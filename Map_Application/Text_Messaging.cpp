/*On some basic cell phones, text messages can be sent using the numeric keypad. Because 
each key has multiple letters associated with it, multiple key presses are needed for most 
letters. Pressing the number once generates the first letter on the key. Pressing the number 
2, 3, 4 or 5 times generates the second, third, fourth or fifth character listed for that key.
Create a function countKeyPressesForText that takes string/text as input and returns the
total number of key presses that must be made to get that text. Ensure that your logic
handles both uppercase and lowercase letters. Ignore any characters that aren’t listed in 
the table above such as semicolons and brackets. Include a main program to test your 
function.*/
#include<bits/stdc++.h>
using namespace std;
int countKeyPressesForText(string inp)
{
    map<char,int>key{{'.',1},{',',2},{'?',3},{'!',4},{':',5},
                      {'A',1},{'B',2},{'C',3},
                      {'D',1},{'E',2},{'F',3},
                      {'G',1},{'H',2},{'I',3},
                      {'J',1},{'K',2},{'L',3},
                      {'M',1},{'N',2},{'O',3},
                      {'P',1},{'Q',2},{'R',3},{'S',4},
                      {'T',1},{'U',2},{'V',3},
                      {'W',1},{'X',2},{'Y',3},{'Z',4},
                      {' ',1}};
                      
    int res=0;
    for(auto c:inp)
    {
        res=res+key[toupper(c)];
    }
    return res;
                    

}
int main()
{
    string input;
    getline(cin,input);
    cout<<countKeyPressesForText(input);
}