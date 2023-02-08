class Solution {
    fun smallerNumbersThanCurrent(nums: IntArray): IntArray {
        var answer = IntArray(nums.size)
        for(i in nums.indices){
            var temp = 0
            for(j in nums.indices){
                if(nums[j] < nums[i]){
                    temp++
                }
            }
            answer[i] = temp
        }
        return answer
    }

}
