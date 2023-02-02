class Solution {
    fun findArray(pref: IntArray): IntArray {
        var answer = IntArray(pref.size)
        var currentNum = pref[0]
        answer[0] = currentNum
        for(num in 1..pref.size - 1){
            currentNum = pref[num - 1] xor pref[num]
            answer[num] = currentNum
        }
        return answer
    }
}
