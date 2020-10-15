#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int dec=0,temp,i,two=1;
    for(i=str.size()-1;i>=0;i--)
    {
        temp = (str[i]-'0')*two;
        dec+=temp;
        two*=2;
    }
    cout<<dec<<endl;
    return 0;
}
