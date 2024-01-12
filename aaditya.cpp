class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
   int n=nums.size();
    vector<int> arr1(n);
    vector<int> arr2(n);

    for (int i = 1; i < n; ++i) {
        arr1[i] = arr1[i - 1] + nums[i - 1];
    }

    for (int i = n - 2; i >= 0; --i) {
        arr2[i] = arr2[i + 1] + nums[i + 1];
    }
    

    vector<int> answer(n);
    for (int i = 0; i < n; ++i) {
        answer[i] = abs(arr1[i] - arr2[i]);
    }

    return answer;

    


    }
};