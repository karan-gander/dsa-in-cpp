#include <iostream>
using namespace std;

int min(int a, int b)
{

    return a < b ? a : b;
}

int sumN(int startNum, int endNum)
{

    int sum = 0;

    for (int i = startNum; i <= endNum; i++)
    {

        sum += i;
    }
    return sum;
}

int fact(int n){
   int fact = 1;

   for(int i=1;i<=n;i++){

      fact*=i;
   }
   return fact;

}

int main()
{

    cout << min(0, 2)<<endl;


    cout<<"Sum of 1 to 5 = "<<sumN(1,5)<<endl;
    cout<<"fact of 1 to 5 = "<<fact(5);
}

