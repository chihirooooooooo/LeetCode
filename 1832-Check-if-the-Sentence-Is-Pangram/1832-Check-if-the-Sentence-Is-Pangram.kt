class Solution {
    fun checkIfPangram(sentence: String): Boolean {
        var en_list = mutableListOf<Char>()
        for(ch in sentence){
            if(!(en_list.contains(ch))){
                en_list.add(ch)
            }
        }
        if(en_list.size == 26){
            return true
        }
        return false
    }
}
