class Solution {
    fun restoreString(s: String, indices: IntArray): String {
        var answer = ""
        var temp = CharArray(s.length)
        var current = 0
        for(index in indices){
            temp[index] = s[current]
            current++
        }
        for(ch in temp){
            answer += ch
        }
        return answer
    }
}
