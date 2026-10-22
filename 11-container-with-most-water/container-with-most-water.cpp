class Solution {
public:
    int maxArea(vector<int>& x) {
        int h,w,a,s=0,e=x.size()-1,max=0;
       while(s<e){
        h=min(x[s],x[e]);
        w=e-s;
        a=h*w;
        if(a>max){
            max=a;
        }
        if(x[s]>x[e]){
            e--;
        }else{
            s++;
        }
       } 
       return max;
    }
};