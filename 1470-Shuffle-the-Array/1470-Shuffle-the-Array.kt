class Solution {
    fun shuffle(nums: IntArray, n: Int): IntArray {
        var answer = IntArray(2 * n)
        for(i in nums.indices){
            if(i < n){
                answer[2 * i] = nums[i]
            }else{
                var temp = i - n
                answer[1 + 2 * temp] = nums[i]
            }
        }
        return answer
    }
}
