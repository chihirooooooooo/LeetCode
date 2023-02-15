class Solution {
    fun balancedStringSplit(s: String): Int {
        var r_num = 0
        var l_num = 0
        var answer = 0
        for(index in 0..s.length - 1){
            if(s[index] == 'R'){
                r_num++
            }else{
                l_num++
            }
            if(r_num == l_num){
                answer++
                r_num = 0
                l_num = 0
            }
        }
        return answer
        
       
    }
}
