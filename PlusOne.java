class Solution {
    public int[] plusOne(int[] digits) {
       int [] newArray = new int [digits.length+1];
        int i = 0;
        int sum = 0;
       
        for(i=digits.length-1;i>=0; i--){
            if(digits[i] + 1 == 10){
                digits[i] = 0;
            }else {
                digits[i] += 1;
                return digits;
            }
        }
        for(i=0; i< digits.length-1; i++){
            newArray[i+1] = digits[i];
        }
        newArray[0] = 1;
        return newArray;
    }
}
