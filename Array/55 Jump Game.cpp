/*
Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Determine if you are able to reach the last index.

For example:
A = [2,3,1,1,4], return true.

A = [3,2,1,0,4], return false.
*/
//Array
//Greedy
class Solution {
public:

    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        int reachable = 0;
        int walker;
        for (walker = 0; walker < n && walker <= reachable; ++walker)
        {
            reachable = max(walker + nums[walker], reachable);
            if (reachable >= n)
                return true;
        }
        return walker == n;
    }
};
