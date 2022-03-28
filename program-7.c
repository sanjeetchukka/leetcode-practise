

int removeElement(int* nums, int numsSize, int val){
int v=0,i;
    for(i=0;i<numsSize;i++){
        if(nums[i]!=val){
            nums[v]=nums[i];
            v++;
        }
    }
    return v;
}