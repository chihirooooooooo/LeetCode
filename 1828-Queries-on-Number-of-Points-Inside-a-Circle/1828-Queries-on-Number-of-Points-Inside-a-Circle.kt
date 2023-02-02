class Solution {
    fun countPoints(points: Array<IntArray>, queries: Array<IntArray>): IntArray {
        var answer = IntArray(queries.size)
        var index = 0
        for(query in queries){
            var temp = 0
            for(point in points){
                var temp_x = query[0] - point[0]
                var temp_y = query[1] - point[1]
                if(temp_x * temp_x + temp_y * temp_y <= query[2] * query[2]){
                    temp++
                }
            }
            answer[index] = temp
            index ++
        }
        return answer
    }
}
