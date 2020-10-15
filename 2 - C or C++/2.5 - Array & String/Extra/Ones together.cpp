#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int max1=0,temp,i,count=0;
    for(i=str.size()-1;i>=0;i--)
    {
        temp = (str[i]-'0');
        (temp==0) ? max1=(max1,count) : count++;
    }
    cout<<max1<<endl;
    return 0;
}
