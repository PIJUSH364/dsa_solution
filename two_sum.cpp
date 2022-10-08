class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>vc;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                
                if(i==j){
                    continue;
                }else{
                    if(nums[i]+nums[j]==target){
                    vc.push_back(i);
                    vc.push_back(j);
                        return vc;
                    }
                }

            }
        }
        return vc;
    }
};