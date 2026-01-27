// Problem:increasing triplet subsequence
// Platform: LeetCode
// Concept: Arrays

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int i=INT_MAX;
        int j=INT_MAX;
        int n=nums.size();
       for(int x=0;x<n;x++){
        if(nums[x]<=i){
            i=nums[x];
        }
        else if(nums[x]<=j){
            j=nums[x];
        }
        else return true;
       }
       return false;
    }
};
