class Solution {
    fun numberOfSteps(num: Int): Int {
        var current = num
        var answer = 0
        while(current != 0){
            if(current % 2 == 0){
                current /= 2
            }else{
                current -= 1
            }
            answer++
        }
        return answer
    }
}
