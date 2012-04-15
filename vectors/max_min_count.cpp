#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iterator>
#include<cstdlib>

using namespace std;

int RandomNumber(){ return rand()%100;}
void print(int i){ cout<<i<<" ";}

bool isEven(int i){ return i%2==0;};

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    srand(time(0));
    generate(v.begin(), v.end(), RandomNumber);
    cout<<"Elements in the vector are :";
    for_each(v.begin(), v.end(), print);
    cout<<endl;
    cout<<"Maximum Element in the vector is :"<<*max_element(v.begin(), v.end());
    cout<<endl;
    cout<<"Minimum Element in the vector is :"<<*min_element(v.begin(), v.end());
    cout<<endl;
    cout<<"Number of Even numbers in the vector are :"<<
    count_if(v.begin(), v.end(), isEven)<<endl;
    cout<<"Number of Elements greater than 50 are :"<<
    count_if(v.begin(), v.end(), bind2nd(greater<int>(), 50))<<endl;
    return 0;
}
