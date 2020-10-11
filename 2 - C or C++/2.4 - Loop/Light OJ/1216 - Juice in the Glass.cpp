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
        double r1,r2,h,p,glass,juice;
        double pi=2*acos(0.0),x,a,b,c;
        cin>>r1>>r2>>h>>p;
        a = h;
        b = (h-p)*r1+p*r2;
        c = p*(r2*r2-r1*r1)-h*(r2*r2+r1*r2);
        x = (-b + sqrt(b*b-4*a*c))/2*a;
        juice = (pi/3)*p*(x*x+r2*r2+x*r2);
        printf("Case %d: %lf\n",i,x);
    }
    return 0;
}
