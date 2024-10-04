#include <iostream>
using namespace std;

int main()
{

    //----------------------------------------------------FOR LOOP IN CPP-------------------------------------------------------------

    // int count = 1;

    // while(count<=5){
    //     cout<<count<<" ";
    //     count++;

    // }

    //---------------------------------------------------------------------------------------------------------------------

    // for(int i=2;i<=20;i=i+2){
    //     cout<<i<<" ";

    // }

    // cout<<endl;

    // Cal sum of N

    // int sum = 0;
    // int i = 1;
    // for(int i=1;i<=5;i++){
    //     // cout<<i<<endl;
    //     // sum=sum+i;
    //     sum+=i;

    // }

    //  using while loop
    // while(i<=5){
    //     sum+=i;
    //     i++;

    // }

    // Sum of all n odd numbers

    // while (i <= 5)
    // {
    //     if (i % 2 != 0)
    //     {
    //         sum += i;
    //     }
    //     i++;
    // }

    // cout << sum << "";

    // Home Work of this video

    //  find the sum of the number divisible by 3?

    int sum = 0;
    int n = 5;
    int fact = n;

    // while (i <= 12)
    // { 

    //     if (i % 3 == 0)
    //     {
    //         sum += i;
    //         //  cout<<" "<<i;
    //     }
    //     i++;
    // }

   for(int i=1;i<=n;i++){
    fact = fact*i;
   }

    cout << "sum = " << sum << endl;
    cout << "fact = " << fact;
}