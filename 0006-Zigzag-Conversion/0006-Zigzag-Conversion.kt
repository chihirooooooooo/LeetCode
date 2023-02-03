class Solution {
    fun convert(s: String, numRows: Int): String {
        var answer = ""
        var index = 0
        if(s.length <= numRows){
            return s
        }
        if(numRows == 1){
            return s
        }
        for(i in 0..numRows - 1){
            index = i
            var alter = true
            while(index < s.length){
                answer += s[index]
                if(i == 0 || i == numRows - 1){
                    index += (numRows - 1) * 2
                }else{
                    if(alter){
                        index += (numRows - i - 1) * 2
                        alter = false
                    }else{
                        index += i * 2
                        alter = true
                    }
                }
            }
        }
        return answer
    }
}
