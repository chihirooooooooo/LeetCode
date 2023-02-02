class Solution {
    fun isStrictlyPalindromic(n: Int): Boolean {
        for(base in 2..n-2){
            var temp = n
            var changed_num = Vector<Int>()
            while(temp >= base){
                changed_num.addElement(temp % base)
                temp = temp / base
            }
            if(temp != 0){
                changed_num.addElement(temp)
            }
            var half = changed_num.size / 2 - 1
            for(i in 0..half){
                if(changed_num[i] != changed_num[changed_num.size - 1 - i]){
                    return false
                }
            }
        }
        return true
    }
}
