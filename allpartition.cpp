#include <bits/stdc++.h>
using namespace std;

void print(string t)
{
    cout<<t<<"\n";
}

void partition(int *a,int n,string t="",int pos=0)
{
    if(pos==n)//if a partition is ready print it
    {
	print(t);
	return;
    }
    for(int i=pos;i<n;i++)//recurring at every position of array
    {
    	string p;
    	for(int k=pos;k<=i;k++)//including elements in partition starting at current position
    	{
    	    p+=to_string(a[k]);
    	    p+=" ";
    	}
    	partition(a,n,t+"{"+p+"}",i+1);
    }
}

signed main()
{
    int *a,n;
    cout<<"n?"<<"\n";
    cin>>n;
    a=new int[n];
    for(int i=0;i<n;i++)
    {
	cin>>a[i];
    }
    for(int i=0;i<n;i++)//printing original array
    {
    	cout<<a[i]<<" ";
    }
    cout<<"\n";
    partition(a,n);//function for partition
    return 0;
} 
