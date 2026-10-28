class Solution {
public:
    string reverseVowels(string a) {
        int s=0,e=a.size()-1;
        char temp;

        while(s<=e){
            if((a[s]=='a'||a[s]=='e'||a[s]=='i'||a[s]=='o'||a[s]=='u'||a[s]=='A'||a[s]=='E'||a[s]=='I'||a[s]=='O'||a[s]=='U')&&(a[e]=='a'||a[e]=='e'||a[e]=='i'||a[e]=='o'||a[e]=='u'||a[e]=='A'||a[e]=='E'||a[e]=='I'||a[e]=='O'||a[e]=='U')){
                temp=a[s];
                a[s]=a[e];
                a[e]=temp;
                s++;
                e--;
            }
            else if(a[s]!='a'&&a[s]!='e'&&a[s]!='i'&&a[s]!='o'&&a[s]!='u'&&a[s]!='A'&&a[s]!='E'&&a[s]!='I'&&a[s]!='O'&&a[s]!='U'){
                s++;
            }
            else{
                e--;
            }
        }
        return a;
    }
};