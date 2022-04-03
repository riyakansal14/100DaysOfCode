#include <iostream>
using namespace std;

int main() {
	int t = 0;
	cin>>t;
	while(t>0)
	{
	    int n = 0;
	    cin>>n;
	    int a[n];
	    for(int j = 0;j<n;j++)
	    {
	        cin>>a[j];
	    }
	    for(int j = n-1;j>=0;j--)
	    {
	        cout<<a[j]<<" ";
	    }
	    t--;
	}
	return 0;
}
