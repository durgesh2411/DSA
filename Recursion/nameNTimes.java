package Recursion;

public class nameNTimes {
    
    public static  void printNamr(int i,int n){
        if(i>n){
            return;
        }
        System.out.println("Durgesh");
        printNamr(i+1,n);
    }


    public static  void printNum(int i,int n){
        if(i>n){
            return;
        }
        System.out.println(i);
        printNum(i+1,n);
        }


    public static void printNumRev(int n){
        if(n<=0){
            return;
        }
        System.out.println(n);
        printNumRev(n-1);
    }


    public static void printNumBacktrack(int i,int n){
        if(i<1){
            return;
        }
        printNumBacktrack(i-1,n);
       System.out.println(i);
    }

    public static void printNumRevBacktrack(int i,int n){
        if(i>n){
            return;
        }
        printNumRevBacktrack(i+1, n);
        System.out.println(i);

    }

    public static void printSum(int n,int sum){
        if(n<1){
            System.out.println(sum);
            return;
        }
        printSum(n-1,sum+n);
    }

    public static int printSum2(int n){
        if(n<1){
            return 0;
        }
        return n+printSum2(n-1);
    }
    public static void main(String[] args) {
        printNamr(1,5);
        System.out.println();
        printNum(1,5);
        System.out.println();
        printNumRev(5);
        System.out.println();
        printNumBacktrack(5,5);
        System.out.println();
        printNumRevBacktrack(1,5);
        System.out.println();
        printSum(3,0);
        System.out.println();
        System.out.println(printSum2(3));


    }


    }




