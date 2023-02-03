class Solution {
    fun minimumSum(num: Int): Int {
        var current = num
        var digits = mutableListOf<Int>()
        var div = 1000
        for(i in 1..4){
            digits.add(current / div)
            current %= div
            div /= 10
        }
        digits.sort()
        return (digits[0] + digits[1]) * 10 + digits[2] + digits[3]
    }
}
