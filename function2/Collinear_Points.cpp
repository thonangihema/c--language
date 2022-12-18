/*Create a function named isCollinear that returns true if the three points (x1, y1), (x2, y2), 
and (x3, y3) lie on the same line, and false otherwise. The three points are collinear if the 
slope between a pair of points equals to the slope between any other pair of points.
Include a main program to demonstrate your function.*/
#include<iostream>
using namespace std;
bool isCollinear(int xa1,int xa2,int xa3,int ya1,int ya2,int ya3)
{
    int ab=(ya2-ya1)/(xa2-xa1);
    int bc=(ya3-ya2)/(xa3-xa2);
    int ca=(ya3-ya1)/(xa3-xa1);
    if((ab==bc)&&(bc==ca))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
 int x1,x2,x3,y1,y2,y3;
 cout<<"enter 1st point(x,y):";
  cin>>x1>>y1;
  cout<<"enter 2nd point(x,y):";
  cin>>x2>>y2;
   cout<<"enter 3rd point(x,y):";
   cin>>x3>>y3;
   if(isCollinear(x1,x2,x3,y1,y2,y3))
    {
        cout<<"Collinear";
    }
    else
    {
        cout<<"Not Colllinear";
    }


}