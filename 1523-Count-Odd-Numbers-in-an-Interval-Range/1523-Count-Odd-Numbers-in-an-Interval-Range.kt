class Solution {
    fun countOdds(low: Int, high: Int): Int {
        var answer = 0
        for(i in low..high){
            if(i % 2 == 1){
                answer++
            }
        }
        return answer       
    }
}
