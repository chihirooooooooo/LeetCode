class Solution {
    fun kidsWithCandies(candies: IntArray, extraCandies: Int): List<Boolean> {
        var answer = mutableListOf<Boolean>()
        var temp_list = candies.toList()
        var max_candy = temp_list.max()?.toInt()
        print(max_candy)
        for(candy in candies){
            if(candy + extraCandies >= max_candy!!){
                answer.add(true)
            }else{
                answer.add(false)
            }
        }
        return answer
    }
}
