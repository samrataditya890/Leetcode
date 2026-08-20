class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int,string> ones={
            {1, "I"},
            {2, "II"},
            {3, "III"},
            {4, "IV"},
            {5, "V"},
            {6, "VI"},
            {7, "VII"},
            {8, "VIII"},
            {9, "IX"}
        };
        unordered_map<int,string> tens={
            {10, "X"},
            {20, "XX"},
            {30, "XXX"},
            {40, "XL"},
            {50, "L"},
            {60, "LX"},
            {70, "LXX"},
            {80, "LXXX"},
            {90, "XC"}
        };

         unordered_map<int,string> hundred={
            {100, "C"},
            {200, "CC"},
            {300, "CCC"},
            {400, "CD"},
            {500, "D"},
            {600, "DC"},
            {700, "DCC"},
            {800, "DCCC"},
            {900, "CM"}
        };

        unordered_map<int,string> thous={
            {1000, "M"},
            {2000, "MM"},
            {3000, "MMM"}
        };

        string ans;
        int n=1;
        while(num>0){
            int a=(num%10)*n;
            if(n==1){
                ans=ones[a]+ans;
            }
            else if(n==10){
                ans=tens[a]+ans;
            }
            else if(n==100){
                ans=hundred[a]+ans;

            }
            else ans=thous[a]+ans;
            num=num/10;
            n=n*10;
        }

        // reverse(ans.begin(),ans.end());
        // string temp;
        // for(int i=0;i<ans.size();i++){
        //     temp+=ans[i];
        // }
        return ans;
    }
};