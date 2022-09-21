class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int even_sum = 0;
        for(auto el: nums){
            if(el%2==0){
                even_sum += el;
            }
        }
        vector<int> res(queries.size());
        for(int i=0; i<queries.size(); i++){
            int curr = 0;
            bool flag = false;
            if(nums[queries[i][1]]%2==0){
                flag = true;
                curr = nums[queries[i][1]];
            }
            nums[queries[i][1]] += queries[i][0];
            if(nums[queries[i][1]]%2==0){
                even_sum += nums[queries[i][1]] - curr;
            } else {
                if(flag){
                    even_sum -= curr;
                }
            }
            res[i] = even_sum;
        }
        return res;
    }
};