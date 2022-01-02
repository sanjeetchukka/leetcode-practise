

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numssize, int target, int* returnSize){
    *returnSize = 2;
    int *returnValues = malloc((*returnSize) * sizeof(int));
    
    for(int i=0;i<numssize-1;i++){
        for(int j=i+1;j<numssize;j++){
            if(nums[i]+nums[j]==target){
                printf("required numbers are %dand %d",i,j);
                returnValues[0] = i;
                returnValues[1] = j;
                break;                      
            }
        }
    
    }
    return returnValues;
} 