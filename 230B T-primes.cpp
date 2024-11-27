#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000000]={0};
    for(int i=2;i<=1000000;i++)
    {
        if(a[i]==0)
        {
            for(int j=2;i*j<=1000000;j++)
            {
                a[i*j]=1;
            }
        }
    }

    int n;
    cin>>n;
    long long int m;
    long long int sq;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        sq=sqrt(m);
        if(m==1)
        {
            cout<<"NO"<<endl;
        }
        else if(sq*sq==m && a[sq]==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
