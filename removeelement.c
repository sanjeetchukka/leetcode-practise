

int removeDuplicates(int* nums, int numsSize){
      if(numsSize==0)return 0;
    int lastValidIndex=1,i;
    for(i=1;i<numsSize;i++){
        if(nums[i]==nums[i-1])continue;
        nums[lastValidIndex]=nums[i];
        lastValidIndex++;
    }
    return lastValidIndex;
}