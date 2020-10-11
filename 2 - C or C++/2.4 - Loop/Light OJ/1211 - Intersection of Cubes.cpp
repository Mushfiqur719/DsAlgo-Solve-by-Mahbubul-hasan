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
        int n,x1,y1,z1,x2,y2,z2,maxX1,maxY1,maxZ1,minX2,minY2,minZ2,volume;
        cin>>n;
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        maxX1=x1; maxY1=y1; maxZ1=z1;
        minX2=x2; minY2=y2; minZ2=z2;
        n--;
        while(n--)
        {
            cin>>x1>>y1>>z1>>x2>>y2>>z2;
            maxX1=max(x1,maxX1); maxY1=max(maxY1,y1); maxZ1=max(maxZ1,z1);
            minX2=min(minX2,x2); minY2=min(minY2,y2); minZ2=min(minZ2,z2);
        }
        if(minX2<maxX1 || minY2<maxY1 || minZ2<maxZ1)
        volume = 0;
        else
        volume = (minX2-maxX1)*abs(minY2-maxY1)*abs(minZ2-maxZ1);
        printf("Case %d: %d\n",i,volume);
    }
    return 0;
}
