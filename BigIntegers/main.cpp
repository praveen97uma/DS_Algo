#include<vector>
#include<iostream>
#include<cstring>
#include<stack>
#include<cstdlib>
using namespace std;



class BigInt
{
    friend ostream &operator<<(ostream &, const BigInt &);


    public:
    BigInt(){len_str=0;}
    int len_str;
    BigInt(string s);
    BigInt operator+(const BigInt& ) const;
    BigInt operator*(const int&);
    vector<int> intRep;


};

BigInt addTwoBigNum(BigInt&, BigInt&);

BigInt BigInt::operator*(const int& nu )
{
    BigInt* res,temp;

    *res=*this;
/*
    for(int i=1;i<nu;i++)
    {
        *result=addTwoBigNum(*this,*result);
    }
*/
//temp=addTwoBigNum(*this,*this);
*res=temp;
//temp=addTwoBigNum(*this,*this);
*res=*res+temp;
cout<<*res<<*this;
    return *res;
}

BigInt BigInt::operator+(const BigInt& num2) const
{
     int carry=0;
    BigInt* result;
    result=new BigInt();
    int size1=0,size2=0;

        size1=len_str;
        size2=num2.len_str;


    int r;size1=size1-1,size2=size2-1;int u=0;

    while(size1>=0 && size2>=0)
    {
        //cout<<"size1 "<<size1<<" "<<"size2 is "<<size2<<endl;
        r=(intRep[size1])+(num2.intRep[size2])+carry;
        carry=r/10;
        u=r%10;
        //cout<<carry<<" "<<u<<endl;
        result->intRep.push_back(u);
        size1--;size2--;
    }

    if (size1>0 )
    {
        //cout<<"first if"<<endl;
        r=(intRep[size1])+carry;
        int s=size1-1;
        for(int i=0;i<size1;i++)
        {
            result->intRep.push_back(r);
            //cout<<"r is "<<r<<endl;
            r=(intRep[s]);
            s--;
        }
    }
    if(size2>0)
    {
        //cout<<"second if"<<endl;
        r=(num2.intRep[size2])+carry;
        int s=size2-1;
        for(int i=0;i<size2;i++)
        {
            result->intRep.push_back(r);
            //cout<<"r is "<<r<<endl;
            r=(num2.intRep[s]);
            s--;
        }

    }

    if (carry!=0)
    {
        result->intRep.push_back(carry);
    }
    return *result;

}


BigInt addTwoBigNum(BigInt& num1, BigInt& num2)
{
    int carry=0;
    BigInt* result;
    result=new BigInt();
    int size1=0,size2=0;

        size1=num1.len_str;
        size2=num2.len_str;


    int r;size1=size1-1,size2=size2-1;int u=0;

    while(size1>=0 && size2>=0)
    {
        //cout<<"size1 "<<size1<<" "<<"size2 is "<<size2<<endl;
        r=(num1.intRep[size1])+(num2.intRep[size2])+carry;
        carry=r/10;
        u=r%10;
        //cout<<carry<<" "<<u<<endl;
        result->intRep.push_back(u);
        size1--;size2--;
    }

    if (size1>0 )
    {
        //cout<<"first if"<<endl;
        r=(num1.intRep[size1])+carry;
        int s=size1-1;
        for(int i=0;i<size1;i++)
        {
            result->intRep.push_back(r);
            //cout<<"r is "<<r<<endl;
            r=(num1.intRep[s]);
            s--;
        }
    }
    if(size2>0)
    {
        //cout<<"second if"<<endl;
        r=(num2.intRep[size2])+carry;
        int s=size2-1;
        for(int i=0;i<size2;i++)
        {
            result->intRep.push_back(r);
            //cout<<"r is "<<r<<endl;
            r=(num2.intRep[s]);
            s--;
        }

    }

    if (carry!=0)
    {
        result->intRep.push_back(carry);
    }
    return *result;

}



BigInt::BigInt(string s)
{
    len_str=s.length();
    char* p=new char[len_str+1];
    s.copy(p,len_str,0);
    p[len_str]='\0';
    int c=0;
    //char* t=num;
    while (*p!='\0')
    {
        c=(int(*p)-48);
        //cout<<"c "<<c<<" ";
        intRep.push_back(c);
        p++;
        //len_str++;

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
    //char b[]="123456789";
        BigInt a("12345") ;
    cout<<a;

    //char n[]="5";
    BigInt k("5");
    cout<<k*6;
    //addTwoBigNum(&a,&k);
    return 0;

}
