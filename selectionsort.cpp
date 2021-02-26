#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,min_idx;
    cin>>n;
    vector<int> arr(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       min_idx = i;
       for(int j=i+1;j<n;j++)
       {
           if(arr[j] < arr[min_idx])
           {
               min_idx = j;
           }
           swap(arr[min_idx] , arr[i]);
       }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}