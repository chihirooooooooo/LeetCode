class Solution {
    fun rearrangeArray(nums: IntArray): IntArray {
        var positive = mutableListOf<Int>()
        var negative = mutableListOf<Int>()
        for(num in nums){
            if(num < 0){
                negative.add(num)
            }else{
                positive.add(num)
            }
        }
        var answer = IntArray(nums.size)
        var index_negative = 0
        var index_positive = 0
        for(i in nums.indices){
            if(i % 2 == 0){
                answer[i] = positive[index_positive]
                index_positive++
            }else{
                answer[i] = negative[index_negative]
                index_negative++
            }
        }
        return answer
    }
}
