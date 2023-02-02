class Solution {
    fun groupThePeople(groupSizes: IntArray): List<List<Int>> {
        var answer = mutableListOf<List<Int>>()
        var checked = mutableListOf<Int>()
        for(i in 0..groupSizes.size - 1){
            if(!(checked.contains(i))){
                checked.add(i)
                var temp_list = mutableListOf<Int>(i)
                var temp = groupSizes[i]
                var count = groupSizes[i] - 1
                for(y in i + 1..groupSizes.size - 1){
                    if(count == 0){
                        break
                    }else if(!(checked.contains(y)) && groupSizes[y] == temp){
                        //println(i)
                        //println(y)
                        checked.add(y)
                        temp_list.add(y)
                        count--
                    }
                }
                answer.add(temp_list)
                //println("add")
            }
        }
        return answer
    }
}
