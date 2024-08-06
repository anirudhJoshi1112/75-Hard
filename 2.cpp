class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_set<char> mp;
        int result=0;
        for(char &ch : s){
            if(mp.count(ch)){
                result+=2;
                mp.erase(ch);
            }
            else{
                mp.insert(ch);
            }
        }
        if(!mp.empty()){
            result++;
        }
        return result;
    }
};
