class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> answer;
        stack<int> stack;
        int carry = 1;
        for(int i  = digits.size() - 1; i >= 0; i--){
            digits[i] = digits[i] + carry;
            if(digits[i] == 10){
                digits[i] = 0;
                carry = 1;
            }else{
                carry = 0;
            }
            stack.push(digits[i]);
        }
        if(carry == 1){
            stack.push(1);
        }
        while (!stack.empty()) {
            answer.push_back(stack.top());
            stack.pop();
        }
        return answer;
    }
};