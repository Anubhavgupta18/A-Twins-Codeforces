#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,sum=0,s=0,c=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	    sum=sum+a[i];
	}
	sort(a,a+n);
	for(int i=n-1;i>=0;i--)
	{
	    c++;
	    sum=sum-a[i];
	    s=s+a[i];
	    if(s>sum)
	    {
	        cout<<c<<endl;
	        break;
	    }
	}
	return 0;
}
