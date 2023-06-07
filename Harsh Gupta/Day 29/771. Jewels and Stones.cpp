class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> m;
        int ans=0;
        for(char i: stones){
            if(m.find(i)==m.end()){
                m[i]=1;
            }
            else{
                m[i]+=1;
            }
        }
        for(char i:jewels){
            ans+=m[i];
        }
        return ans;
    }
};
