class Solution {
    fun isUgly(n: Int): Boolean{
        var target = n
        if(n <= 0){
            return false
        }
        while(target != 1){
            if(target % 2 == 0){
                target /= 2
            }else if(target % 3 == 0){
                target /= 3
            }else if(target % 5 == 0){
                target /= 5
            }else{
                return false
            }
        }
        return true
    }
}
