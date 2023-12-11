int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    //nums:[2,7,11,15]
    //numsSize:4
    //target:18
    //returnSize:2
    int* result;
    // 取得記憶體空間, returnSize = 2, so sizeof(int) need to * 2
    result = (int*)malloc(sizeof(int)*2);
    // nullguard, you can code as if(result == NULL)
    if(!result)
        return 0;

    // Initialize result array
    result[0] = 0;
    result[1] = 0;

    // 使用動態取得的記憶體空間
    for (int i = 0; i < numsSize; i++){  //   i: 0,1,2,3
        for(int j = i+1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                *returnSize = 2;
                result[0] = i;
                result[1] = j;
                return result;
                // 釋放記憶體空間
                 free(result);
            }
        }
    }
    *returnSize = 0;
    // 釋放記憶體空間
    free(result);
    return 0;
}