#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,n,sum=0;
    cin>>n;
    for(i=1; i<=n; i++)
        sum += pow(i,i);
    cout<<sum<<endl;
    return 0;
}

