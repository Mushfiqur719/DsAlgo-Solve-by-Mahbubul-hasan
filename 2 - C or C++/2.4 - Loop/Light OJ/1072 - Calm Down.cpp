#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    int n,t,i;
    cin>>t;
    double R,pi=2*acos(0.0),angle,r;
    for(i=1;i<=t;i++)
    {
        cin>>R>>n;
        angle = sin(pi/n);
        r = (R*angle)/(1+angle);
        printf("Case %d: %lf\n",i,r);
    }
    return 0;
}
