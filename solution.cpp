class Solution {
    public int numRescueBoats(int[] people, int limit) {
        int[] arr = new int[limit+1];
        for(int a:people){
            arr[a]++;
        }
        int left= 1;
        int right=limit;
        int count=0;
        while(left<=right){
            while(left<=right && arr[left]==0){
                left++;
            }
            while(left<=right && arr[right]==0){
                right--;
            }
            if(left>right){
                break;
            }
            arr[right]--;
            if(left+right<=limit && arr[left]>0){
                arr[left]--;
            }
            count++;
        }
        return count;
    }
}
