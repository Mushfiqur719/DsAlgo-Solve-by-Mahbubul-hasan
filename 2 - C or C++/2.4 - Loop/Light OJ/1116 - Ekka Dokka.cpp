#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        long long n,j,even=0;
        cin>>n;
        if(n%2!=0)
            printf("Case %d: Impossible\n",i);
        else
        {
            for(j=2;j<=n/2;j+=2)
            {
                if(n%j==0 && (n/j)%2!=0)
                {
                    even=j;
                    break;
                }
            }
            if(even==0)
                printf("Case %d: Impossible\n",i);
            else
                printf("Case %d: %lld %lld\n",i,n/j,j);
        }
    }
    return 0;
}
