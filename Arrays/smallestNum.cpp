#include <iostream>
#include <climits>
using namespace std;
int main()
{

    int size = 5;
    int indexofSmall = 0;
    int indexofLarge = 0;
    int smallest = __INT_MAX__;
    int largest = INT_MIN;
    int marks[size] = {45, 4, 1, 55, -1};

    for (int i = 0; i < size; i++)
    {

        if (marks[i] < smallest)
        {
            // smallest = marks[i];
            indexofSmall = i;
        }

        if(marks[i]>largest){
            indexofLarge = i;
        }

        // inbuild methods of min max

        smallest = min(marks[i],smallest);
        largest = max(marks[i],largest);

        
    };
    cout<<smallest<<"\n";
    cout<<largest<<"\n";
    cout<<"Index of Large"<<indexofLarge<<"\n";
    cout<<"Index of Small"<<indexofSmall;
    
}