
#include<vector>
#include <iostream>
using namespace std;


int main(){

vector <int> karan = {1,2,3};
vector <int> lalit (2,0);
// cout<<karan[0];
// cout<<"\n";
// cout<<lalit[0];


vector <char> name = {'k','a','r','a','n'};
vector <int> vec = {1};
vec.push_back(2);
vec.push_back(3);
vec.push_back(4);
vec.push_back(5);
vec.push_back(5);
vec.push_back(5);
vec.push_back(5);
vec.push_back(5);

// vec.pop_back();
// vec.pop_back();
// // vec.pop_back();

//  generally we use forEach loop for ittratiing single vlaue


for(int val:vec){
    cout<<val<<"\n";

}

//  to find the size of vector we use size method or function

cout << "Size of name ---> "<< vec.size()<<"\n";
cout << "last of name ---> "<< vec.back()<<"\n";
cout << "spec value of name ---> "<< vec.at(1)<<"\n";
cout << "capcity of name ---> "<< vec.capacity()<<"\n";

}


