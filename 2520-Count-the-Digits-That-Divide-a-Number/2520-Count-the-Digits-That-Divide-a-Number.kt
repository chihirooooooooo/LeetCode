class Solution {
    fun countDigits(num: Int): Int {
        var answer = 0
        var digit = mutableListOf<Int>()
        var current = num
        while(current > 0){
            var temp = current % 10
            digit.add(current % 10)
            current /= 10
        }
        for(ele in digit){
            if(num % ele == 0){
                answer++
            }
        }
        return answer
    }
}
