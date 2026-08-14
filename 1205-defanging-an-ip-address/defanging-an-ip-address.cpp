class Solution {
public:
    string defangIPaddr(string address) {
        int index=0;
        string temp;
        while (index<address.size()){
            if(address[index]=='.'){
                temp+="[.]";
            }
            else{
                temp+=address[index];
            }
            index++;
        }
        return temp;
    }
};