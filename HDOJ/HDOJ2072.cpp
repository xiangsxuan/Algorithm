//熟悉以下几点用法:
//1.getline()
//2.stringstream(string)
//3.stringstream>>string
#include<bits/stdc++.h>
using namespace std;
set<string> wordsSet;
int main() {
    string str, strSplit;
    while (getline(cin, str) && '#' != str[0]) {
        wordsSet.clear();
        stringstream strStream(str);
        while (strStream >> strSplit) {
            wordsSet.insert(strSplit);
        }
        cout << wordsSet.size() << endl;
    }
    return 0;
}
