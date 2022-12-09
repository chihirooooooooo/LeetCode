class Solution {
public:
    string addBinary(string a, string b) {
        string answer = "";
        string carry = "0";
        string a_digit = "0";
        string b_digit = "0";
        while(a.size() != 0 || b.size() != 0){
            if(a.size() == 0){
                b_digit = b[b.size() - 1];
                b.pop_back();
                if(carry == "1" && b_digit == "1"){
                    carry = "1";
                    answer = "0" + answer;
                }else if(carry == "0" && b_digit == "0"){
                    carry = "0";
                    answer = "0" + answer;
                }else{
                    carry = "0";
                    answer = "1" + answer;
                }
            }else if(b.size() == 0){
                a_digit = a[a.size() - 1];
                a.pop_back();
                if(carry == "1" && a_digit == "1"){
                    carry = "1";
                    answer = "0" + answer;
                }else if(carry == "0" && a_digit == "0"){
                    carry = "0";
                    answer = "0" + answer;
                }else{
                    carry = "0";
                    answer = "1" + answer;
                }
            }else{
                a_digit = a[a.size() - 1];
                a.pop_back();
                b_digit = b[b.size() - 1];
                b.pop_back();
                if(carry == "1" && a_digit == "1" && b_digit == "1"){
                    carry = "1";
                    answer = "1" + answer;
                }else if((carry == "1" && a_digit == "1" && b_digit == "0") || (carry == "1" && a_digit == "0" && b_digit == "1") || (carry == "0" && a_digit == "1" && b_digit == "1")){
                    carry = "1";
                    answer = "0" + answer;
                }else if((carry == "1" && a_digit == "0" && b_digit == "0") || (carry == "0" && a_digit == "1" && b_digit == "0") || (carry == "0" && a_digit == "0" && b_digit == "1")){
                    carry = "0";
                    answer = "1" + answer;
                }else{
                    carry = "0";
                    answer = "0" + answer;
                }
            }
        }
        if(carry == "1"){
            answer = carry + answer;
        }
        return answer;
    }
};
