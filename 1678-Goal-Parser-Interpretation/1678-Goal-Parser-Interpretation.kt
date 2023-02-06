class Solution {
    fun interpret(command: String): String {
        var answer = ""
        var index = 0
        while(index < command.length){
            if(command[index] == 'G'){
                answer += 'G'
                index++
            }else if(command[index] == '(' && command[index + 1] == ')'){
                answer += 'o'
                index += 2
            }else{
                answer += "al"
                index += 4
            }
        }
        return answer
    }
}
