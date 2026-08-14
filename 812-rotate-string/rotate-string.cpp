class Solution {
public:
    void rclock(string& clockw){
        int index=clockw.size()-1;
        char c=clockw[index];
        while(index>0){
            clockw[index]=clockw[index-1];
            index--;
        }
        clockw[0]=c;
    }

    void ranti(string& anticlock){
        int index=0;
        char c=anticlock[0];
        while(index<anticlock.size()-1){
            anticlock[index]=anticlock[index+1];
            index++;
        }
        anticlock[anticlock.size()-1]=c;
    }
    bool rotateString(string s, string goal) {
        string clockw=s, anticlock=s;
       for(int i=0;i<s.size();i++){
        rclock(clockw);
        if(clockw==goal){
            return true;
        }
       }
        for(int i=0;i<s.size();i++){
            ranti(anticlock);
        if(anticlock==goal){
            return true;
        }
        }

        return false;
    }
};