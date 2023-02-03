class Solution {
    fun minPairSum(nums: IntArray): Int {
        var temp = mutableListOf<Int>()
        temp = nums.toMutableList()
        temp.sort()
        var answer = 0
        for(i in 0..temp.size / 2 - 1){
            if(answer < temp[i] + temp[temp.size - 1 - i]){
                answer = temp[i] + temp[temp.size - 1 - i]
            }
        }
        return answer
    }
}
