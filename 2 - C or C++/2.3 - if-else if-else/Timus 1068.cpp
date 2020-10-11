#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<=0)
    {
        cout<<1-(n*(n-1))/2<<endl;
    }
    else
        cout<<n*(n+1)/2<<endl;
    return 0;
}
