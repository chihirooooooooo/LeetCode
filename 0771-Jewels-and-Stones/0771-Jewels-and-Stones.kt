class Solution {
    fun numJewelsInStones(jewels: String, stones: String): Int {
        var answer = 0;
        for(jewel in jewels){
            for(stone in stones){
                if(jewel == stone){
                    answer++
                }
            }
        }
        return answer
    }
}
