class Solution {
    fun createTargetArray(nums: IntArray, index: IntArray): IntArray {
        var answer = IntArray(nums.size)
        for(i in answer.indices){
            answer[i] = -1
        }
        for(i in nums.indices){
            if(answer[index[i]] == -1){
                answer[index[i]] = nums[i]
            }else{
                for(k in index.size - 1 downTo index[i] + 1){
                    answer[k] = answer[k - 1]
                }
                answer[index[i]] = nums[i]
            }
        }
        return answer

    }
}
