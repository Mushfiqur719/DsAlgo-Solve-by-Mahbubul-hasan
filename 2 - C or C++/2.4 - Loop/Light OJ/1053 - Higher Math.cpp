#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    int t,j;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        int arr[3],i;
        for(i=0;i<3;i++)
            cin>>arr[i];
        sort(arr,arr+3);
        if(arr[2]*arr[2]==arr[1]*arr[1]+arr[0]*arr[0])
            printf("Case %d: yes\n",j);
        else
            printf("Case %d: no\n",j);
    }
    return 0;
}
