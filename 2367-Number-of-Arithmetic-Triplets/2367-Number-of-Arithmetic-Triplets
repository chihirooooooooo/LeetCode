class Solution {
    fun arithmeticTriplets(nums: IntArray, diff: Int): Int {
        var answer = 0
        for(first in nums.indices){
            if(nums.contains(nums[first] + diff)){
                if(nums.contains(nums[first] + 2 * diff)){
                    answer++
                }
            }
        }
        return answer
    }
}
