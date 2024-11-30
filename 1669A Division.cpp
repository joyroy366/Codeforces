#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>m;
        if(1900<=m)
        {
            cout<<"Division 1"<<endl;
        }
        else if(1600<= m && m<=1899)
        {
            cout<<"Division 2"<<endl;
        }
        else if(1400<= m && m<= 1599)
        {
            cout<<"Division 3"<<endl;
        }
        else if(m<=1399)
        {
            cout<<"Division 4"<<endl;
        }
    }
}
