class Solution {
public:
    void solve(vector<int> &nums,vector<int> &subset,vector<vector<int>> &res,int i){
        if(i>=nums.size()){
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        solve(nums,subset,res,i+1);
        subset.pop_back();
        solve(nums,subset,res,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> res;
        int i=0;
        solve(nums,subset,res,i);
        return res;
    }
};
//only for unique elements
