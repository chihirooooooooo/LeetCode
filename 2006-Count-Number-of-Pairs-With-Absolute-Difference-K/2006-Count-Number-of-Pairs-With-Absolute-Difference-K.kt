class Solution {
    fun countKDifference(nums: IntArray, k: Int): Int {
        var answer = 0
        for(i in 0..nums.size - 1){
            for(l in i + 1..nums.size - 1){
                if(Math.abs(nums[i] - nums[l]) == k){
                    answer++
                }
            }
        }
        return answer
    }
}
