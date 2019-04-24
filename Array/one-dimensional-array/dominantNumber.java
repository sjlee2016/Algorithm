class Solution {
    public int dominantIndex(int[] nums) {
        int i = 0;
        int largest = nums[0];
        int largestIndex = 0;
        for(i=1;i<nums.length;i++){
            if(nums[i] > largest){
                largest=nums[i];
                largestIndex = i;
            }
        }
        
        for(i=0;i<nums.length; i++){
            if(i==largestIndex){
                continue;
            }else {
                if(2*nums[i] > largest) {
                    return -1;
                }
            }
        }
        return largestIndex;
    }
}
