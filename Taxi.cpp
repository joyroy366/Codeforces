#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num,sum=0,taxi=0,one=0,two=0,three=0,four=0;
    vector<int>vc;
    for(int i=0; i<n; i++)
    {
        cin>>num;
        vc.push_back(num);
        if(vc[i]==1)
        {
            one++;
        }
        else if(vc[i]==2)
        {
            two++;
        }
        else if(vc[i]==3)
        {
            three++;
        }
        else
        {
            four++;
        }

    }
    //four
    taxi=taxi+four;
    //three
    while(three!=0 && one!=0)
    {
        taxi=taxi+1;
        three-=1;
        one-=1;
    }
    if(three!=0 && one==0)
    {
        taxi+=three;
        three=0;
    }
    cout<<taxi<<endl;
    //two
    taxi=taxi+two/2;
    cout<<taxi<<endl;

    if(two%2!=0)
    {
        if(one<=2)
        {
            taxi+=1;
            two=0;
            one=0;
        }
        else
        {
            one=one-2;
            taxi=taxi+1;
            two=0;
        }
    }

    // cout<<taxi<<endl;

    //one
    if(one!=0)
    {
        taxi+=one/4;
        if(one%4!=0)
        {
            taxi+=1;
        }

    }

    cout<<taxi<<endl;
}
