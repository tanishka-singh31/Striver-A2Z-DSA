class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        int og=x;
        long long rev=0;
        while(x!=0){
            int d=x%10;
            rev=rev*10+d;
            x=x/10;
        }
        if(rev==og){
            return 1;
        }
        return 0;
        
    }
};