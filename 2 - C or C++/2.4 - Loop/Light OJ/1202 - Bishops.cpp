#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        if(((r1+c1)%2==0&&(r2+c2)%2==0)||((r1+c1)%2!=0&&(r2+c2)%2!=0))
        {
            if(abs(r2-r1)==abs(c2-c1))
                printf("Case %d: %d\n",i,1);
            else
                printf("Case %d: %d\n",i,2);
        }
        else
        {
            printf("Case %d: impossible\n",i);
        }
    }
    return 0;
}
