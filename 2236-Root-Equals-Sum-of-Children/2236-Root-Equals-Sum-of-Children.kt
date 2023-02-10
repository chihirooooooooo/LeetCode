/**
 * Example:
 * var ti = TreeNode(5)
 * var v = ti.`val`
 * Definition for a binary tree node.
 * class TreeNode(var `val`: Int) {
 *     var left: TreeNode? = null
 *     var right: TreeNode? = null
 * }
 */
class Solution {
    fun checkTree(root: TreeNode?): Boolean {
        var sum = root?.`val`
        var one = root?.left?.`val`
        var two = root?.right?.`val`
        if(sum!! == one!! + two!!){
            return true
        }
        return false
    }
}
