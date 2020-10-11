#include<iostream>
using namespace std;
int main()
{
    int n,temp,Quotient;
    while(cin>>n)
    {
        if(n==0)
        break;
        else if(n<=9)
            cout<<n<<endl;
        else if(n<=18)
        {
            temp=n%9;
            if(temp==0)
                cout<<99<<endl;
            else
                cout<<temp*11<<endl;
        }
        else
        {
            n-=18;
            temp=n%10;
            Quotient=n/10;
            if(temp==0)
                cout<<(Quotient*100)+90+Quotient<<endl;
            else
                cout<<(Quotient+1)*100+(temp-1)*10+(Quotient+1)<<endl;
        }
    }
    return 0;
}
