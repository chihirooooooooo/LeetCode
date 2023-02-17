class Solution {
    fun xorOperation(n: Int, start: Int): Int {
        var answer = start + 2 * 0
        for(i in 1..n - 1){
            answer = answer xor (start + 2 * i)
        }
        return answer
    }
}
