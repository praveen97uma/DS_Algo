#include<vector>
#include<iostream>
#include<cstring>
#include<stack>
#include<cstdlib>
using namespace std;

class BigInt
{
    friend ostream &operator<<(ostream &, const BigInt &);

    //char num[100];

    void addTwoNum();
    public:
    BigInt(){len_str=0;}
    int len_str;
    BigInt(char* s);
    vector<int> intRep;
    //void display();

};


void addTwoBigNum(BigInt* num1, BigInt* num2)
{
    int carry=0;
    BigInt* result;
    result=new BigInt();
    int size1=0,size2=0;
    if (num1->len_str>num2->len_str)
    {
        size1=num1->len_str;
    }

    else {size=num2->len_str;}

    int r;int s=size1-1;int q=0,u=0;
    for(int i=0;i<size1;i++)
    {
        r=(num1->intRep[s])+(num2->intRep[s])+carry;
        carry=r/10;
        u=r%10;
        cout<<carry<<" "<<u<<endl;
        result->intRep.push_back(u);
        s--;
    }

    if (carry!=0)
    {
        result->intRep.push_back(carry);
    }
    cout<<*result;

}

BigInt::BigInt(char* s)
{
    len_str=0;
    char* p=s;
    int c=0;
    //char* t=num;
    while (*p!='\0')
    {
        c=(int(*p)-48);
        intRep.push_back(c);
        p++;
        len_str++;

    }

}




ostream& operator<<(ostream &output, const BigInt &num)
{
    int s=num.intRep.size()-1;
    for(int i=0;i<num.intRep.size();i++)
    {
        cout<<num.intRep[s];
        s--;
    }
    cout<<endl;
    return output;
}

int main()
{
    char b[]="992894528958324873298473298742937493284793287937237992894528958324873298473298742937493284793287937237992894528958324873298473298742937493284793287937237992894528958324873298473298742937493284793287937237992894528958324873298473298742937493284793287937237992894528958324873298473298742937493284793287937237992894528958324873298473298742937493284793287937237992894528958324873298473298742937493284793287937237992894528958324873298473298742937493284793287937237";
        BigInt a(b) ;
    cout<<a;

    char n[]="992894528958324873298473298742937493284793287937237992894528958324873298473298742937493284793287937237992894528958324873298473298742937493284793287937237992894528958324873298473298742937493284793287937237992894528958324873298473298742937493284793287937237992894528958324873298473298742937493284793287937237992894528958324873298473298742937493284793287937237992894528958324873298473298742937493284793287937237992894528958324873298473298742937493284793287937237";
    BigInt k(n);
    cout<<k;
    addTwoBigNum(&a,&k);
    return 0;

}
