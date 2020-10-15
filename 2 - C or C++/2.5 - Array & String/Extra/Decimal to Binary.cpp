#include<iostream>
using namespace std;
int main()
{
    int n;
    string str;
    cin>>n;
    while(n!=0)
    {
        str =(n%2==0 ? '0':'1')+str;
        n/=2;
    }
    cout<<str<<endl;
    return 0;
}
