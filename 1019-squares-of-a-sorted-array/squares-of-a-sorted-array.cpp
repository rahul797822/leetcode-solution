class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        int s=0,e=a.size()-1;
         vector<int> ans(a.size());
        int k=a.size()-1;
        while(s<=e){
            if(abs(a[s])<abs(a[e])){
                ans[k]=a[e]*a[e];
                e--;
                k--;
            }else{
                ans[k]=a[s]*a[s];
                s++;
                k--;
            }
        }
        return ans;
    }
};