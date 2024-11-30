#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum1=0,sum2=0;
    cin>>n;
    string m,x;
    vector<string >v;
    //vector<string >x;

    for(int i=0;i<n;i++)
    {
        cin>>m;
        v.push_back(m);
        x=v[i];
        for(int j=0;j<6;j++)
        {
            if(j<3)
            {
                sum1+=x[j];
            }
            else
            {
               sum2+=x[j];
            }
        }
        if(sum1==sum2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        sum1=0;
        sum2=0;

    }

}
