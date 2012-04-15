#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<numeric>

using namespace std;

int RandomNumber(){ return rand()%100;}
void print(int i){ cout<<i<<" ";}
void printVector(vector<int> v){ for_each(v.begin(), v.end(), print);}

int main(){

    int n;
    cin>>n;
    vector<int> v(n);
    srand(time(0));
    generate(v.begin(), v.end(), RandomNumber);
    cout<<"Elements in the vector are: ";
    printVector(v);
    cout<<endl<<"Sum of the elements in the vector is: "<<
    accumulate(v.begin(), v.end(), 0);
    return 0;

    }
