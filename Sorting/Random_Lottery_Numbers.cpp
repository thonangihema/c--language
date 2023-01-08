/*Create a function named randomLotteryNumbers that generates a list containing random 
selection of 6 numbers from the range of 1 to 49 for a lottery ticket. Ensure that the 6 
numbers selected do not contain any duplicates. Keep the numbers in ascending order by 
sorting list before you return list. Include a main program to test your function.
*/
#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
list<int> randomLotteryNumbers()
{
    list<int>v;
     srand(time(0));
    int psw;
    for(int i=0;i<6;i++)
    {
        int d=rand()%49+1;
        for(auto c:v)
        {
            while(d==c)
            {
                d=rand()%49+1;
            }
        }
        v.push_back(d);
        
        
    }
    v.sort();
    return v;

}
int main()
{
    list<int>res{randomLotteryNumbers()};
    for(auto s:res)
    {
        cout<<s<<" ";
    }
}