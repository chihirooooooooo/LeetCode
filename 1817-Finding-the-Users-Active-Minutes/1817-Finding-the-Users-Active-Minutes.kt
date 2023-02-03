class Solution {
    fun findingUsersActiveMinutes(logs: Array<IntArray>, k: Int): IntArray {
        var answer = IntArray(k)
        var visited = mutableListOf<Int>()
        var count = mutableMapOf<Int, MutableSet<Int>>()
        for(log in logs){
            if(!(visited.contains(log[0]))){
                count.put(log[0], mutableSetOf(log[1]))
                visited.add(log[0])
            }else{
                count[log[0]]?.add(log[1])
            }
        }
        for(each in count.values){
            answer[each.size - 1]++
        }
        return answer
    }
}
