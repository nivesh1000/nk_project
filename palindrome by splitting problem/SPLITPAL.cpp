#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    int n,steps=0;
	    cin>>n;
	    int A[n];
	    int i=1,j = n;
	    int l=j;
	    for(int k=1;k<=j;k++)
	    {
	        cin>>A[k];
	    }
	    
	    while( l>1)
	    {
	        if(A[j]>A[i])
	        {
	            A[j]=A[j]-A[i];
	            steps++;
	            i++;
	            l--;
	        }
	        else if(A[j]<A[i])
	        {
	            A[i]=A[i]-A[j];
	            steps++;
	            j--;
	            l--;
	        }
	        else if(A[j]==A[i])
	        {
	            j--;
	            i++;
	            l-=2;
	            continue;
	        }
	    }
	    cout<<steps<<endl;
	}
	return 0;
}