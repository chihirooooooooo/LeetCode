class Solution {
    fun findAnagrams(s: String, p: String): List<Int> {
        var temp = p.toCharArray()
        temp.sort()
        var size = p.length
        var answer = mutableListOf<Int>()
        for(i in 0..s.length - size){
            if(p.contains(s[i])){
                var pot = CharArray(size)
                var index = 0
                for(k in i..i + size - 1){
                    pot[index] = s[k]
                    index++
                }
                pot.sort()
                var same = true
                for(l in 0..size - 1){
                 if(!(pot[l] == temp[l])){
                    same = false
                    break
                 }
                }
                if(same){
                    answer.add(i)
                }
            }   
        }
        return answer
    }
}
