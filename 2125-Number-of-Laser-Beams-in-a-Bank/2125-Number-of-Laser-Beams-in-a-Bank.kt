class Solution {
    fun numberOfBeams(bank: Array<String>): Int {
        var n = bank[0].length
        var device = IntArray(bank.size)
        var answer = 0
        for(rowNum in bank.indices){
            var count = 0
            for(i in bank[rowNum].indices){
                if(bank[rowNum][i] == '1'){
                    count++
                }
            }
            device[rowNum] = count
            
        }
        var prev = 0
        for(i in device.indices){
            if(prev == 0 && device[i] != 0){
                prev = device[i]
            }else if(prev != 0 && device[i] != 0){
                answer += prev * device[i]
                prev = device[i]
            }
        }
        return answer
    }
}
