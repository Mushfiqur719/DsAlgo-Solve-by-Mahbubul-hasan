#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int x,y,time;
        cin>>x>>y;
        if(x>y)
            time=(2*x-y)*4+19;
        else
            time=y*4+19;
        printf("Case %d: %d\n",i,time);
    }
    return 0;
}
