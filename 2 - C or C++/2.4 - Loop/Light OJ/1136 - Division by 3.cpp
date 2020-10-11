#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int a,b,aRest,diff,multiplier,dRest,result;
        cin>>a>>b;
        aRest = a%3;
        diff = b-a+1;
        multiplier = diff/3;
        dRest = diff%3;
        if(dRest==1)
        {
            if(aRest==1)
                result=multiplier*2;
            else
                result=multiplier*2+1;
        }
        else if(dRest==2)
        {
            if(aRest==2)
                result=multiplier*2+2;
            else
                result=multiplier*2+1;
        }
        else
            result=multiplier*2;

        printf("Case %d: %d\n",i,result);
    }
    return 0;
}
