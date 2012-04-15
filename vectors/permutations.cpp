#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;

int current=1;

int Range(){ return current++;}
void print(int i){cout<<i<<" ";}

int main(){

    int n;
    cin>>n;
    vector<int> v(n);
    generate(v.begin(), v.end(), Range);
    cout<<"Printing permutations of :";
    for_each(v.begin(), v.end(), print);
    cout<<endl;
    int count=1;
    do {
        cout<<count++<<": ";
        for_each(v.begin(), v.end(), print);
        cout<<endl;
        }
    while(next_permutation(v.begin(), v.end()));
    return 0;
}
