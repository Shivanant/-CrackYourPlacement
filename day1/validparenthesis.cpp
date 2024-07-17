#include<bits/stdc++.h>

bool isValid(const std::string& s) {
    std::unordered_map<char, char> pair = {{'}', '{'}, {')', '('}, {']', '['}};
    std::stack<char> st;
    
    for (char c : s) {
        if (pair.find(c) == pair.end()) {
            st.push(c); 
        } else {
            if (st.empty() || st.top() != pair[c]) {
                return false; 
            }
            st.pop();
        }
    }

    return st.empty(); 
}

int main() {
    // Test cases
    std::string test1 = "()";
    std::string test2 = "()[]{}";
    std::string test3 = "(]";
    std::string test4 = "([)]";
    std::string test5 = "{[]}";

    std::cout << "Test case 1: " << test1 << " -> " << (isValid(test1) ? "Valid" : "Invalid") << std::endl;
    std::cout << "Test case 2: " << test2 << " -> " << (isValid(test2) ? "Valid" : "Invalid") << std::endl;
    std::cout << "Test case 3: " << test3 << " -> " << (isValid(test3) ? "Valid" : "Invalid") << std::endl;
    std::cout << "Test case 4: " << test4 << " -> " << (isValid(test4) ? "Valid" : "Invalid") << std::endl;
    std::cout << "Test case 5: " << test5 << " -> " << (isValid(test5) ? "Valid" : "Invalid") << std::endl;

    return 0;
}
