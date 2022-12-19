//leetcode 78 ||2^n;wher n is no. of elements   
class Solution {
    private:
    void solve(vector<int> nums,int i, vector<int> output, vector<vector<int>>& ans){
        //base
        if(i >= nums.size()){
            ans.push_back(output);
            return;
        }
        //exclude
        solve(nums, i+1, output, ans);
        //include
        int element = nums[i];
        output.push_back(element);
        solve(nums, i+1, output, ans);
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> > ans;
        vector<int> output;
        int i = 0;
        solve(nums, i, output,ans);
        return ans;  
    }
};