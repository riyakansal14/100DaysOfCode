
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        
        int temp[n+m];
        int j = 0;
        for(int i = 0; i < n; i++)
        {
            temp[j]=a[i];
            j++;
        }
        for(int i = 0; i < m; i++)
        {
            temp[j]=b[i];
            j++;
        }
        sort(temp, temp+n+m);
        int count = n+m;
        for(int i = 0; i < (n+m); i++)
        {
            if(temp[i] == temp[i+1])
            {
                count--;
            }
        }
        return count;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
