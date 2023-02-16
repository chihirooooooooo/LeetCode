class Solution {
    fun findCenter(edges: Array<IntArray>): Int {
        var temp_1 = edges[0][0]
        var temp_2 = edges[0][1]
        if(edges[1][0] == temp_1 || edges[1][1] == temp_1){
            return temp_1
        }
        return temp_2

    }
}
