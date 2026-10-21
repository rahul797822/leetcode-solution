class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        int s=0,e=a.size()-1;
        int sum=0;
        while(s<=e){
            sum=a[s]+a[e];
            if(sum==t){
               return {s+1,e+1};
            }else if(sum>t){
                e--;
            }else {
                s++;
            }
        }
        return {};
    }
};