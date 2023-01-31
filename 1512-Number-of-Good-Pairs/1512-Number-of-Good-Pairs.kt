class Solution {
    fun numIdenticalPairs(nums: IntArray): Int {
        var answer = 0
        for(x in nums.indices){
            for(y in x + 1 until nums.size){
                if(nums[x] == nums[y]){
                    answer++
                }
            }
        }
        return answer
    }
}
