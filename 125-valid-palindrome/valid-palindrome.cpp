class Solution {
public:
    bool isPalindrome(string a) {
        if(a.empty()){
            return true;
        }
        int s=0,e=a.size()-1;
        while(s<=e){
            if(!isalnum(a[s])){
                s++;
            }else if(!isalnum(a[e])){
                e--;
            }else if(tolower(a[s])==tolower(a[e])){
                s++;
                e--;
            }else{
                return false;
            }
        }
        return true;
    }
};