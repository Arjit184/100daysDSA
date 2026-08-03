class Solution {
    public int findNumbers(int[] nums) {
        int count=0;

        for(int i=0;i<nums.length;i++){
            if(even(nums[i])){
                count++;
            }
        }
        return count;
    }

    static boolean even(int nums){
    int numberOfDigits=digit(nums);
    if(numberOfDigits%2==0){
        return true;
    }
    return false;
    }

    static int digit(int nums){
        
       int count =0;
    while(nums>0){
        count++;
        nums=nums/10;
    }
    return count;
    }
}
    

