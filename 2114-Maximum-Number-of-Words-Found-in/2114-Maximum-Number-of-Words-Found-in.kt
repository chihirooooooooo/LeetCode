class Solution {
    fun mostWordsFound(sentences: Array<String>): Int {
        var answer = 0
        for(sentence in sentences){
            var temp = 0
            for(char in sentence){
                if(char == ' '){
                    temp++
                }
            }
            temp++
            if(answer < temp){
                answer = temp
            }
        }
        return answer
    }
}
