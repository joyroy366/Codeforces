#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        vector<int> v={a,b,c};
        sort(v.begin(),v.end());
        cout<<v[1] <<endl;
    }
}
