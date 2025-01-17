//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
 public:
    vector<int> productExceptSelf(vector<int>& a) {
      int cnt0=count(a.begin(),a.end(),0);
      int n=a.size();
      vector<int>ans(n);
      
      if(cnt0>1)return ans;
      else if(cnt0==1){
          int pdt=1;
          for(auto &it:a) if(it!=0)pdt*=it;
          
          for(int i=0;i<n;i++) if(a[i]==0)ans[i]=pdt;
          
      }
      else{
          int pdt=1;
          for(auto &it:a) pdt*=it;
          
          for(int i=0;i<n;i++) ans[i]=pdt/a[i];
          
      }
      return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends