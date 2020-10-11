#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int x1,y1,x2,y2,cows;
        cin>>x1>>y1>>x2>>y2;
        cin>>cows;
        printf("Case %d:\n",i);
        while(cows--)
        {
            int x,y;
            cin>>x>>y;
            if((x>x1 && x<x2)&&(y>y1 && y<y2))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
