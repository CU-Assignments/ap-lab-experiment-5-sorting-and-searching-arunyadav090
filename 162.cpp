class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int m=*max_element(nums.begin(),nums.end());
        auto f= find(nums.begin(),nums.end(),m);
        return distance(nums.begin(),f);

    }
};

*test case*
  
Case 1
Case 2
Input
nums =
[1,2,3,1]
Output
2
Expected
2
