#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        long long n,m,ans;
        cin>>n>>m;
        ans =  m*m*((n/m)/2);
        printf("Case %lld: %lld\n",i,ans);
    }
    return 0;
}

