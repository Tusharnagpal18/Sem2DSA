class Solution {
    public int[] twoSum(int[] nums, int target) {
        // ArrayList<Integer> arr = new ArrayList<Integer>(2);
        int[] arr = new int[2];
        for(int i = 0; i<nums.length-1;i++){
            for(int j = i+1; j<nums.length;j++){
                int sum = nums[i] + nums[j];
                if( target == sum){
                    arr[0]=i;
                    arr[1]=j;
                    return arr;
                }
            }
        }
       // arr[0]=0;
        
        return arr;
       
    }
}
