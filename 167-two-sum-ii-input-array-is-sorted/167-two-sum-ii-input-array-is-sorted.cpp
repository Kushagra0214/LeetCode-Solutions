class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int ptr1 = 0;
        int ptr2 = numbers.size() - 1;
        vector<int> v;
        while(ptr1<ptr2){
            if(target>(numbers[ptr1] + numbers[ptr2])){
                ptr1++;
            } else if(target<(numbers[ptr1] + numbers[ptr2])){
                ptr2--;
            } else {
                v.push_back(ptr1 + 1);
                v.push_back(ptr2 + 1);
                break;
            }
        }
        return v;
    }
};