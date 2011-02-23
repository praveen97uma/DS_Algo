
#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

class BigInt
{
    friend ostream &operator<<(ostream &, const BigInt &);
     int len_str;
    char num[100];
    public:
    BigInt(char* s);
    //void display();

};


BigInt::BigInt(char* s)
{
    len_str=0;
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




ostream& operator<<(ostream &output, const BigInt &num)
{
    for(int i=0;i<len_str++;i++)
    {
        cout<<num[i];

    }
    return output;
}

int main()
{
    BigInt a= "987762676377267468728768736877";
    cout<<a;
    return 0;

}
