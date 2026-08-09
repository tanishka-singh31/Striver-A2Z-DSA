class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        if(num<10){
            return num;
        }
        else{
            int og=num;
            int d=og%10;
            while(og!=0){
                sum+=d;
                og=og/10;
                d=og%10;
            }
            if(sum>=10){
                return addDigits(sum);
            }

        }
        return sum;      
    }
};