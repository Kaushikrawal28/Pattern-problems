/* print pattern 
   1
  21
 321
4321
54321

*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=0;k<n-i-1;k++)
        {
            cout<<" ";
        }
        int k = i;
        for(int j=1;j<=i;j++)
        {
            cout<<k;
            k--;
        }
        cout<<"\n";
    }
    return 0;
}