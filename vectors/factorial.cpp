#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<numeric>

using namespace std;

int current =1;
int Range(){ return current++;};

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    generate(v.begin(), v.end(), Range);
    cout<<"Factorial of "<<n<<" is "<<
    accumulate(v.begin(), v.end(), 1, multiplies<int>());
    return 0;
    }
