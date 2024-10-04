#include <iostream>
using namespace std;

int main()
{

    // for(int i =0;i<10;i++){

    //     for(int j=0;j<i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // }

    // for(int i=1;i<=5;i++){

    //     for(int j=1;j<=i;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<"\n";
    // }

    char ch = 'A';
    int n = 5;

    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    for (int i = 0; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        ch++;
        cout<<endl;
    }

}