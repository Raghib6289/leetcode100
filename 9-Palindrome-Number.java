class Solution {
    public boolean isPalindrome(int n) {
        if (n<0){
            return false;
        }
        int x=n;
        int revnum =0;
        while(n>0){
            int d =n%10;
            revnum=revnum*10+d;
            n=n/10;
        }
        if(revnum==x){
            return true;
        }else{
            return false;
        }
    }
}