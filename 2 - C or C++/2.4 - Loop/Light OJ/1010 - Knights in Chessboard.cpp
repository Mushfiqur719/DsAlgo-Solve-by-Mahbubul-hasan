#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int m,n,ans;
        cin>>m>>n;
        if(m==1||n==1)
            ans = max(m,n);
        else if(m==2||n==2)
        {

            if(n==2)
            swap(m,n);

            if(n%4==0)
                ans = (n/4)*4;
            else if(n%4>1)
                ans = ((n/4)+1)*4;
            else
                ans = ((n/4)*4)+2;
        }
        else
            ans = (m*n%2==0)? (m*n)/2 : (m*n)/2+1;
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
