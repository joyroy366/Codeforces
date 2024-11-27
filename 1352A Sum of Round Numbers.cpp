#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        vector<int>v;
        int n,sum=0,divisor;
        cin>>n;
        if(n%10!=0)
        {
            v.push_back(n%10);
            divisor=n%10;
            n-=divisor;
            sum++;
        }
        if(n%100!=0)
        {
            v.push_back(n%100);
            divisor=n%100;
            n-=divisor;
            sum++;
        }
        if(n%1000!=0)
        {
            v.push_back(n%1000);

            divisor=n%1000;
            n-=divisor;
            sum++;
        }
        if(n%10000!=0)
        {
            v.push_back(n%10000);
            divisor=n%10000;
            n-=divisor;
            sum++;
        }
        if(n>=10000 && n%10000==0)
        {
            v.push_back(n);
            sum++;
        }
        cout<<sum<<endl;
        for(int i=0; i<v.size(); i++)
        {
            cout<<v.at(i)<<" ";
        }
        cout<<endl;

    }


}
