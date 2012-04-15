#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<iterator>
#include<ctime>

using namespace std;

int RandomNumber(){ return rand()%100;}
void print(int i){ cout<<i<<" ";}
void printVector(vector<int> vec){ for_each(vec.begin(), vec.end(), print);}

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    srand(time(0));
    generate(v.begin(), v.end(), RandomNumber);
    cout<<"Elements in the vetor are: ";
    printVector(v);
    cout<<endl;
    cout<<"Elements in the ascending order are: ";
    sort(v.begin(), v.end(), less<int>());
    printVector(v);
    cout<<endl<<"Elements in the descending order are: ";
    sort(v.begin(), v.end(), greater<int>());
    printVector(v);
    cout<<endl;
    
    return 0;

    }
