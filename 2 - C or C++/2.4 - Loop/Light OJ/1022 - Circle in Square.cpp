#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        double r,pi=2*acos(0),area;
        cin>>r;
        area=(2*r)*(2*r)-(pi*r*r);
        printf("Case %d: %.2lf\n",i,area);
    }
    return 0;
}
