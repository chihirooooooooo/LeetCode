class Solution {
    fun countMatches(items: List<List<String>>, ruleKey: String, ruleValue: String): Int {
        var answer = 0
        var find = 0
        if(ruleKey == "color"){
            find = 1
        }else if(ruleKey == "name"){
            find = 2
        }
        for(item in items){
            if(item[find] == ruleValue){
                answer++
            }
        }
        return answer
    }
}
