class Solution {
public:
    bool isPalindrome(string s) {
        string clean="";
        for(char ch:s){
            if(isalnum(ch)){
                clean+=tolower(ch);
            }
        }
        int i=0;
        int j=clean.length()-1;
        while(i<j){
            if(clean[i]!=clean[j]){
                return 0;
            }
            i++;
            j--;
        }
        return 1;    }        
};