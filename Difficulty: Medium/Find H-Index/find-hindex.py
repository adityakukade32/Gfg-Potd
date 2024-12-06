#User function Template for python3
class Solution:
    # Function to find hIndex
    def hIndex(self, citations):
        citations.sort()
        maxi=0
        n=len(citations)
        if citations[0]>n:
            return n
        for i in range(len(citations)):
            if citations[i]>=n-i:
                maxi=max(maxi,n-i)
        return maxi


#{ 
 # Driver Code Starts
# Initial Template for Python 3

# Main
if __name__ == '__main__':
    t = int(input())
    while t > 0:
        t -= 1
        arr = [int(x) for x in input().strip().split()]

        ob = Solution()
        result = ob.hIndex(arr)

        print(result)
        print("~")

# } Driver Code Ends