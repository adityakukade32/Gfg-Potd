//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        int n = arr.size(), minlen = INT_MAX, idx = -1;
        for(int i=0; i<n; i++) {
            string temp = arr[i];
            if(temp.size() < minlen) {
                minlen = temp.size();
                idx = i;
            }
        }
        string ans = "";
        for(int i=0; i<minlen; i++) {
            string temp = arr[idx];
            string substring = temp.substr(i, 1);
            int cnt = 0;
            for(int j=0; j<n; j++) {
                if(arr[j].substr(i, 1) == substring) {
                    cnt++;
                }
            }
            if(cnt == n) {
                ans = ans + substring;
            } else {
                break;
            }
        }
        
        return ans == "" ? "-1" : ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends