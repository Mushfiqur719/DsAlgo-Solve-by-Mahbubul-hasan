#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        double n;
        cin>>n;
        long grid,sq,x,y,rest,add,sub;
        grid=floor(sqrt(n));
        sq=grid*grid;
        rest=n-sq;

        if(ceil(sqrt(n))==grid)
        {
            if(grid%2==0)
            {
                x=grid;
                y=1;
            }
            else
            {
                y=grid;
                x=1;
            }
        }
        else if(sq%2==0)
        {
            if(rest>grid+1)
            {
                x=2*(grid+1)-rest;
                y=grid+1;
            }
            else
            {
                x=grid+1;
                y=rest;
            }
        }
        else
        {
            if(rest>grid+1)
            {
                x=grid+1;
                y=2*(grid+1)-rest;
            }
            else
            {
                y=grid+1;
                x=rest;
            }
        }
        printf("Case %d: %ld %ld\n",i,x,y);
    }
    return 0;
}
