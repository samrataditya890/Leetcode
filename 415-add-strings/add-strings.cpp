class Solution {
public:
    string addStrings(string num1, string num2) {
        int  index1=num1.size()-1, index2=num2.size()-1;
        string ans;
        int carry=0,sum;

        while(index2>=0 && index1>=0){
            sum=(num1[index1]-'0')+(num2[index2]-'0')+carry;
            carry=sum/10;
            char c='0'+sum%10;
            ans+=c;
            index1--,index2--;
        }
        if(index1>=0){
         while(index1>=0){
            sum=(num1[index1]-'0')+carry;
            carry=sum/10;
            char c='0'+sum%10;
            ans+=c;
            index1--;
        }
        }

        else if(index2>=0){
            while(index2>=0){
            sum=(num2[index2]-'0')+carry;
            carry=sum/10;
            char c='0'+sum%10;
            ans+=c;
            index2--;
        }
        }

        if(carry){
            ans+=char('0'+carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};