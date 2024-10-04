#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    int num = 1;
    char ch = 'A';

    // for(int i=0;i<n;i++){

    //     for(int j=i;j>0;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<"\n";
    // }

    // floyd triangle

    // for(int i =0;i<n;i++){

    //     for(int j=0;j<i;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<"\n";

    // }

    //   char

    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < i; j++)
    //     {

    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << "\n";
    // }
    int k = ch;
    // cout << k;

    for (int i = 0; i < n; i++)
    {
        
        for (int j = ch; j >= 65; j--)
        {
            cout << (char)j << " ";
            // ch--;
        }
        ch++;
        cout<<"\n";
    }
}