//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int a=arr[0]+k;
        int b=arr[n-1]-k;
        int minh=0,maxh=0;
        int mindiff=arr[n-1]-arr[0];
        
        for(int i=0;i<n-1;i++){
            //if(arr[i+1]-k<0) continue;
            minh=min(a,arr[i+1]-k);
            maxh=max(b,arr[i]+k);
            mindiff=min(mindiff,maxh-minh);
        }
        return mindiff;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends