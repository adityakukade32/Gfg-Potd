//{ Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            
            
            int l=sc.nextInt();
			int r=sc.nextInt();
			Solution ob = new Solution();
			ArrayList<Integer> numbers = ob.uniqueNumbers(l,r);
			for(int num : numbers){
			    System.out.print(num+" ");
			}
			System.out.println();

        }
    }
}

// } Driver Code Ends


class Solution{

static ArrayList<Integer> uniqueNumbers(int L,int R){
        // code here
        ArrayList<Integer>list=new ArrayList<>();
     
      for(int i=L;i<=R;i++){
        if(isSame(i)){
            list.add(i);
        }
          
      }
      return list;
  }
  static boolean isSame(int n){
    Set<Character> digits=new HashSet<>();
    String numStr=Integer.toString(n);
    
    for(char digit:numStr.toCharArray()){
        if(digits.contains(digit)){
            return false;//duplicates found here
        }
        digits.add(digit);
    }
    return true;
  }
}