class Solution {
    fun truncateSentence(s: String, k: Int): String {
        var answer =""
        var space = k - 1
        for(ch in s){
            if(ch == ' '){
                space--
            }
            if(space < 0){
                break
            }
            answer += ch     
        }
        return answer
    }
}
