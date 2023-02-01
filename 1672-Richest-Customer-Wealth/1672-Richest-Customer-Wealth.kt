class Solution {
    fun maximumWealth(accounts: Array<IntArray>): Int {
        var answer = 0
        for(account in accounts){
            var temp = 0
            for(wealth in account){
                temp += wealth
            }
            if(answer < temp){
                answer = temp
            }
        }
        return answer
    }
}
