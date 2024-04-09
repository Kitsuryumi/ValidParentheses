class Solution {
public:
    bool isValid(string s) {
        bool res = true;
        stack<char> st;
        int i = 0;
        int n = s.size();

        do {
            switch(s[i]) {
                case '(' : st.push('(');
                break;
                case ')':
                    if(st.size() == 0) {
                        res = false;
                    }
                    else {
                        if(st.top() == '(') {
                        st.pop();
                        }
                        else {
                            res = false;
                        }
                    }
                    
                break;
                case '[': st.push('[');
                break;
                case ']':
                    if(st.size() == 0) {
                        res = false;
                    }
                    else {
                        if(st.top() == '[') {
                        st.pop();
                        }
                        else {
                            res = false;
                        }
                    }
                break;
                case '{': st.push('{');
                break;
                case '}':
                    if(st.size() == 0) {
                        res = false;
                    }
                    else {
                        if(st.top() == '{') {
                        st.pop();
                        }
                        else {
                            res = false;
                        }
                    }
                break;
            }
            i++;
        } while (res && i < n);
        if(st.size() > 0) {
            res = false;
        }
        return res;
    }
};