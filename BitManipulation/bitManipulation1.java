package BitManipulation;
class BitManipulation{
public static String bitSet(int n){
    String res ="";
    while(n>0){
        if(n%2==0) res+= "0";
        else{
            res+="1";
        }
        n=n>>1;
    }
    String res1 = new StringBuilder(res).reverse().toString();
    return res1;
}
public static void main(String[] args) {
    int n=4;
    String ans = bitSet(n);
    System.out.println(ans);

}
}