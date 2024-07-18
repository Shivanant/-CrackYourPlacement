#include <bits/stdc++.h>
using namespace std;
bool isDigit(char s){
        return s>=47 && s<=57;
    }
    string chrTyp(char ch){
            if (isDigit(ch)) return "digit";
            if (ch == '+' || ch == '-') return "sign";
            if (ch == 'e' || ch == 'E') return "e";
            if (ch == '.') return "dot";
            return "";
    }
    bool isNumber(string s) {
        unordered_map<string,unordered_map<string,string>>transactions={
           { "Start",{{"digit","Int"},{"dot","Dot"},{"sign","Sign"}}},
            {"Sign",{{"digit","Int"},{"dot","Dot"}}},
            {"Int",{{"digit","Int"},{"dot","Frac"},{"e","Exp"}}},
            {"Frac",{{"digit","Frac"},{"e","Exp"}}},
            {"Dot", {{"digit", "Frac"}}},
            {"Exp",{{"digit","Exp_num"},{"sign","Exp_sign"}}},
            {"Exp_num",{{"digit","Exp_num"}}},
            {"Exp_sign",{{"digit","Exp_num"}}}
        };
        string currState="Start";
        set<string> valid_end_states = {"Int", "Frac", "Exp_num"};

        for (char c: s){
            string temp=chrTyp(c);
            if (temp.empty()||transactions[currState].find(temp)==transactions[currState].end()){
                return false;
            }
            currState=transactions[currState][temp];
        }

        return valid_end_states.find(currState) != valid_end_states.end();

    }

int main() {
    vector<string> testCases = {"123", "12.34", "1e10", "-123", "+0.1", "2e-10", "abc", "1a", "1.2.3", "e3"};
    for (const string& testCase : testCases) {
        cout << "Input: \"" << testCase << "\" -> " << (isNumber(testCase) ? "Valid" : "Invalid") << endl;
    }
    return 0;
}