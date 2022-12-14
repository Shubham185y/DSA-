//leet 17 frazyt
class Solution {
public:
    vector<string> rec(string &digits, int i, map<int, string>&m){
        if(i==digits.size()) return {""};
        vector<string> temp =rec(digits, i+1,m);
        vector<string> ans;
        for(auto a: m[digits[i]-'0']){
            for(auto x: temp){
                ans.push_back(a+x);
            }
        }
        return ans;
    }

    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0){
            return {};
        }
        map<int, string> m;
        m[2]="abc";
        m[3]="def";
        m[4]="ghi";
        m[5]="jkl";
        m[6]="mno";
        m[7]="pqrs";
        m[8]="tuv";
        m[9]="wxyz";
        return rec(digits, 0, m);
    }  
};
