//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        
        if(arr[0]==0)return -1;
        if(n==1)return 0;
        
        int maxReach=arr[0]=arr[0],step=arr[0],jump=1;
        for(int i=1;i<n;i++)
        {
            if(i==n-1)return jump;
            
            
            maxReach=max(maxReach,i+arr[i]);
            
            step--;
            
            if(step==0)
            {
                jump++;
                step=maxReach-i;
                if(step==0)return -1;
                
            }
        }
        return -1;
    }
    
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends