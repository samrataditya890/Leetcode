class Solution {
public:
    string largestOddNumber(string num) {
        int n,k;
        string temp;
        for(int i=0;i<=num.size();i++){
            if(num[i]!='0'){
                n=i;
                break;
            }
        }
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]%2!=0){
                k=i;
                break;
            }

        }
        for(int i=n;i<=k;i++){
            temp.push_back(num[i]);
        }
        return temp;
    }
};