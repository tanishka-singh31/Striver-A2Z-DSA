class Solution {
public:
    int reverse(int x) {
        long long rev_num=0;
        while(x!=0){
            int d=x%10;
            rev_num=rev_num*10+d;
            x=x/10;
    }
    if(rev_num>INT_MAX || rev_num<INT_MIN){
        return 0;
    }
    return rev_num;

          
}
       
    
};