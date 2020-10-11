#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int binaryCount(int n)
{
    int count=0;
    while(n!=0)
    {
        count += (n%2==0 ? 0:1);
        n /= 2;
    }
    return count;
}
int main()
{
    int t,n,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int count;
        cin>>n;
        count=binaryCount(n);
        (count%2==0)?printf("Case %d: even\n",i):printf("Case %d: odd\n",i);
    }
    return 0;
}
