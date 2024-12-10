//2


class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        stringstream ss(path);
        string component;

        while(getline(ss, component, '/')){
            if(component==".."){
                if(!st.empty()){
                    st.pop();
                }
            }
            else if(!component.empty() && component!="."){
                st.push(component);
            }
        }

        string result;
        while(!st.empty()){
            result="/"+st.top()+result;
            st.pop();
        }
        return result.empty()? "/" : result;
    }
};