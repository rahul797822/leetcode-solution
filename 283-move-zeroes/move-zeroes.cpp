class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int s=0,e=0,temp=0;
        while(s<a.size()){
            if(a[s]!=0){
                temp=a[s];
            a[s]=a[e];
            a[e]=temp;
            e++;
            }
            s++;
        }
    }
};