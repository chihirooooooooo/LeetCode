class Solution {
    fun minOperations(boxes: String): IntArray {
        var answer = IntArray(boxes.length)
        var ball_box = mutableListOf<Int>()
        for(num in boxes.indices){
            if(boxes[num] == '1'){
                ball_box.add(num)
            }
        }
        for(num in boxes.indices){
            var temp = 0
            for(k in ball_box){
                temp += Math.abs(num - k)
            }
            answer[num] = temp
        }
        return answer
    }
}
