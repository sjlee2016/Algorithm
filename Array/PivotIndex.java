class Solution {
    public int pivotIndex(int[] nums) {
        int totalSum = 0;
        int leftSum = 0;
        int i = 0;
        for(i = 0; i<nums.length; i++){
            totalSum += nums[i];
        }
        for(i = 0; i<=nums.length-1;i++){
            if(leftSum == totalSum - leftSum - nums[i]){
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
}
