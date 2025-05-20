#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    string input, text;
    getline(std::cin, input); 
    getline(std::cin, text);   
    map<string, string> values;
   size_t start = 0;
while (start < input.size()) {
    size_t end = input.find(',', start); 
    if (end == string::npos) end = input.size();
    string pair = input.substr(start, end - start);
    size_t eq = pair.find('=');
    if (eq != string::npos) {
        string key = pair.substr(0, eq);
        string val = pair.substr(eq + 1);
        values[key] = val;
    }

    start = end + 1;
}

    std::string result;
    for (size_t i = 0; i < text.size(); ++i) {
        if (text[i] == '[') {
            size_t j = text.find(']', i);
            if (j != string::npos) {
                string key = text.substr(i + 1, j - i - 1);
                if (values.count(key)) {
                    result += values[key];  
                } else {
                    result += "[" + key + "]"; 
                }
                i = j;
            } else {
                result += text[i]; 
            }
        } else {
            result += text[i]; 
        }
    }

    std::cout << result << "\n";
    return 0;
}
