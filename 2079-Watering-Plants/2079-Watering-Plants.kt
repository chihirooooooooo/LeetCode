class Solution {
    fun wateringPlants(plants: IntArray, capacity: Int): Int {
        var current_vol = capacity
        var answer = 0
        for(index in plants.indices){
            if(current_vol < plants[index]){
                answer += index * 2
                current_vol = capacity
            }
            answer++
            current_vol -= plants[index]
        }
        return answer
    }
}
