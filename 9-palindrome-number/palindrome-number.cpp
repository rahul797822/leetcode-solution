class Solution {
public:
    bool isPalindrome(int x) {
        int d,n=x;
         long long rev = 0;
        if(n<0||x<0)
        return false;
        while(n!=0){
            d=n%10;
            rev=(rev*10)+d;
            n=n/10;
        }
        if(x==rev){
            return true;
        }else{
            return false;
        }
    }
};