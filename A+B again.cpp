#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int value,sum,n1,n2;
        cin>>value;
        n1=value/10;
        n2=value%10;
        cout<<n1+n2<<endl;
    }
}
