class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(auto a : s){
            if(a == '(' || a == '[' || a == '{'){
                st.push(a);
            }
            else{
                if(st.empty()){
                    return false;
                }
                int topVal = st.top();
                st.pop();
                if((a == ')' && topVal != '(') || (a == ']' && topVal != '[') || (a == '}' && topVal != '{')){
                    return false;
                }
            }
        }
        return st.empty();
    }
};