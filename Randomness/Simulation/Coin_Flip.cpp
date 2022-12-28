/*In this program, we are interested to explore the following: What’s the minimum number 
of times you have to flip a coin before you can have two consecutive flips that result in 
the same outcome (either both are heads or both are tails)? What’s the maximum number 
of flips that might be needed? How many flips are needed on average? 
Create a function named getNumOfFlips that returns the number of flips required to get 
two consecutive heads or two consecutive tails. Write a main program that simulates the 
process for 10 times and displays minimum, maximum and average number of flips 
required to get the desired outcome.*/
#include<bits/stdc++.h>
#include <unistd.h>
 
using namespace std;
int getNumOfFlips(){
    int prev=-1,nflips=0, current;
    srand(time(0));
    while(true)
    {
        current=rand()%2;
        nflips+=1;
        if((prev==1 && current==1)||(prev==0 && current==0))
        {
            return nflips;  
        }
        prev=current;
        
    }
}
int main()
{ 
  int min=1000000,sum=0,max=0,res,avg;
  for(int i=0;i<10;i++)
    {
        res=getNumOfFlips();
        cout<<res<<"\n";
         if(res<min)
         {
          min=res;
          }
         if(res>max)
         {
         max=res;
         }
         sum+=res;
         usleep(500000);
    }
    avg=sum/10;
    cout<<"Minimum : "<<min<<"\n"<<"Maximum : "<<max<<"\n"<<"Average : "<<avg<<"\n";
    

}