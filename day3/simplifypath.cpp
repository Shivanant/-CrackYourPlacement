#include <bits/stdc++.h>
using namespace std;

string simplifyPath(string path) {
    string word = "";
    int n = path.length();
    vector<string> s;
    
    for (int i = 0; i < n; ++i) {
        if (path[i] == '/') {
            if (word.length()) {
                if (word == ".." || word == ".") {
                    if (!s.empty() && word == "..") s.pop_back();
                    word = "";
                    continue;
                }
                s.push_back(word);
                word = "";
            }
            continue;
        } else {
            word += path[i];
        }
    }
    
    if (word.length()) {
        if (word == ".") {
            word = "";
        } else if (word == "..") {
            if (!s.empty()) {
                s.pop_back();
            }
        } else {
            s.push_back(word);
        }
    }
    
    string ans = "";
    for (int i = 0; i < s.size(); ++i) {
        ans += "/" + s[i];
    }
    
    return (ans.length()) ? ans : "/";
}

int main() {
    vector<string> paths = {
        "/home/",
        "/../",
        "/home//foo/",
        "/a/./b/../../c/",
        "/a/../../b/../c//.//",
        "/a//b////c/d//././/.."
    };

    for (const string& path : paths) {
        cout << "Original Path: " << path << endl;
        string simplified = simplifyPath(path);
        cout << "Simplified Path: " << simplified << endl;
        cout << "-----------------------" << endl;
    }

    return 0;
}
