#include<iostream>
using namespace std;
int main()
{
    int wl;
    cout<<"Enter wavelength in nm : ";
    cin>>wl;
    if((wl>379)&&(wl<450))
    {
        cout<<"Violet";
    }
    else if((wl>449)&&(wl<495))
    {
        cout<<"Blue";
    }
    else if((wl>494)&&(wl<570))
    {
        cout<<"Green";
    }
    else if((wl>569)&&(wl<590))
    {
        cout<<"Yellow";
    }
    else if((wl>589)&&(wl<620))
    {
        cout<<"Orange";
    }
    else if((wl>619)&&(wl<751))
    {
        cout<<"Red";
    }
    else
    {
        cout<<"Invalid";
    }
}