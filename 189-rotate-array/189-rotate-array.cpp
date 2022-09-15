class Solution {
public:
    void reverseArray(vector<int>& nums, int low, int high) {
        while(low < high) {
            swap(nums[low], nums[high]);
            low++;
            high--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        if (nums.size() == 0) {
            return;
        }
        int size = nums.size();
        k = k % size;
        reverseArray(nums, 0, size - 1);
        reverseArray(nums, 0, k - 1);
        reverseArray(nums, k, size - 1);
    }
};