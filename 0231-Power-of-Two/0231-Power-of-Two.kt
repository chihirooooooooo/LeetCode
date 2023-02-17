class Solution {
    fun isPowerOfTwo(n: Int): Boolean {
        var temp = n
        if(n <= 0){
            return false
        }else{
            while(true){
                if(temp == 1){
                    return true
                }
                if(temp % 2 == 1){
                    return false
                }
                temp /= 2
            }
        }
    }
}
