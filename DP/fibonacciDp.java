package DP;

class fibonacciDp {
    
    public static int fibo(int n,int[] dp){
        if(n<=1){
            return n;
        }
        else{                                                  //memoization with array TC=O(2n) and SP=O(n)
            return dp[n] = fibo(n-1,dp)+ fibo(n-2,dp);
        }    
    }

    public static int fibo2(int n,int []dp){
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){                         // tabulation with array      TC=O(n) and SP=O(n)
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
    }

    public static int fibo3(int n){
        int prev2 = 0;
        int prev = 1;
        int curr = 0;                             // tabulation with not array   TC=O(n) and SP=O(1)
        for(int i=2;i<=n;i++){
            curr = prev+prev2;
            prev2 = prev;
            prev = curr;
        }
        return curr;

    }
    public static void main(String[] args){
        int n=6;
        int [] dp = new int[n+1];
        System.out.println(fibo(n,dp));
        System.out.println(fibo2(n,dp));
        System.out.println(fibo3(n));

    }
}
