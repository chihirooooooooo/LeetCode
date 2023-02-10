class Solution {
    fun decompressRLElist(nums: IntArray): IntArray {
        var ans_list = mutableListOf<Int>()
        var current = 0
        while(current < nums.size){
            var count = nums[current]
            for(i in 0..count - 1){
                ans_list.add(nums[current + 1])
            }
            current += 2
        }
        return ans_list.toIntArray()
    }
}
