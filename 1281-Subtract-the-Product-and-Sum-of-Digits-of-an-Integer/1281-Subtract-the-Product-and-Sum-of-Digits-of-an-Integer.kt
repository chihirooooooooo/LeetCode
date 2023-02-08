class Solution {
    fun subtractProductAndSum(n: Int): Int {
        var digit = mutableListOf<Int>()
        var current = n
        while(current != 0){
            digit.add(current % 10)
            current /= 10
        }
        var mul = 1
        var sum = 0
        for(i in digit){
            mul *= i
            sum += i
        }
        return mul - sum
    }

}
