class Solution {
    fun cellsInRange(s: String): List<String> {
        var answer = mutableListOf<String>()
        for(letter in s[0]..s[3]){
            for(num in s[1]..s[4]){
                answer.add("${letter}${num}")
            }
        }
        return answer
    }
}
