class ParkingSystem(big: Int, medium: Int, small: Int) {
    var big = big
    var medium = medium
    var small = small
    fun addCar(carType: Int): Boolean {
        if(carType == 1){
            if(this.big > 0){
                this.big--
                return true
            }
            return false
        }
        if(carType == 2){
            if(this.medium > 0){
                this.medium--
                return true
            }
            return false
        }
        if(carType == 3){
            if(this.small > 0){
                this.small--
                return true
            }
            return false
        }
        return false
    }

}

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * var obj = ParkingSystem(big, medium, small)
 * var param_1 = obj.addCar(carType)
 */
