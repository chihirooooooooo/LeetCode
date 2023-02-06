class Solution {
    fun minFlips(target: String): Int {
        var first_one = false
        var answer = 0
        for(i in target.indices){
            if(!(first_one)){
                if(target[i] == '1'){
                    answer++
                    first_one = true
                }
            }else{
                if(target[i - 1] != target[i]){
                    answer++
                }
            }
        }
        return answer
    }
}
