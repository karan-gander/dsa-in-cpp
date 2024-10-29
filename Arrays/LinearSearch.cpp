#include<iostream>
using namespace std;

int linearSearch(int Array[],int size,int key){

    for(int i=0;i<size;i++){
        if(Array[i]==key){

            return i;
        }
    }
    
    return -1;
}


int main(){
    int arr[6]={2,8,1,77,5,0};
    int result = linearSearch(arr,6,77);
    cout<<result;
    

}