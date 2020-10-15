#include<iostream>
using namespace std;
int recursive(int n,int count)
{
    count++;
    if(n==1)
        return count;
    else if(n%2==0)
        recursive(n/2,count);
    else
        recursive(3*n+1,count);
}

int main()
{
    int n;
    cin>>n;
    cout<<recursive(n,0)<<endl;
    return 0;
}
