class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0; //stores the number of times the array was (if) rotated
        int n = nums.size(); //deter{mining the size of the array

        for(int i=0; i<n; i++){
            //main logic
            if(nums[i] > nums[(i+1) % n]){
                count++;
            }
        }
        return count <= 1; //returns true if count = 1 or count > 1 else will print false
    }
};
