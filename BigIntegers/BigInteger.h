//Class Definition for Big Integers


#ifndef BIGINT_H
#define BIGINT_H

#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

class BigInt
{
    friend ostream &operator<<(ostream &, const BigInt &);
    static int len_str;
    char num[100];
    public:
    BigInt(char* s);
    void display();

};


BigInt::BigInt(char* s)
{
    char* p=s;
    char* t=num;
    while (*p)
    {
        *t=*p;
        p++;t++;
        len_str++;
    }
    *t='\0';
}

int BigInt::len_str;


ostream& operator<<(ostream &output, const BigInt &num)
{
    for(int i=0;i<len_str++;i++)
    {
        cout<<num[i];

    }
    return output;
}

#endif
