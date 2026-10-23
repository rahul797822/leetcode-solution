class Solution {
public:
    void reverseString(vector<char>& x) {
        char temp;
        int s=0,e=x.size()-1;
        while(s<=e){
            temp=x[s];
            x[s]=x[e];
            x[e]=temp;
            s++;
            e--;
        }
        
    }
};