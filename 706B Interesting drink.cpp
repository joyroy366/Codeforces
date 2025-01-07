#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int p;
    cin>> p;
    int arr1[p];
    int count=0;
    for(int j=0;j<p;j++)
    {
        cin>>arr1[j];
       /* for(int i=0;i<n;i++)
        {
            if(arr[i]<=arr1[j])
                count+=1;
        }
        cout<<count<<endl;
        count=0;
        */
        int count = upper_bound(arr.begin(), arr.end(), arr1[j]) - arr.begin();
        cout << count << endl;

    }

}


