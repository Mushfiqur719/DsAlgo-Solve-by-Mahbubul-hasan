#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,s,sum=0;
        cin>>n;
        while(n--)
        {
            cin>>s;
            if(s>0)
                sum+=s;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
