#include<iostream>
using namespace std;


int main(){

    int dec = 7;
    int pow=1;
    int ans = 0;

    while (dec>0)
    {
        /* code */
        int reminder = dec%2;
        dec = dec/2;
        
        ans+= (reminder*pow);
        pow= pow*10;


    }

    cout<<" "<<ans; 
    




}