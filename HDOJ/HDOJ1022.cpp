//看注释,解决问题要一步一步,分层次解决,先想出轮廓,再填充细节,不要一口气想把整个规模想出来,那样思维很混论
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char str_in[15];
    char str_out[15];

    while (scanf("%d%s%s", &n, str_in, str_out) == 3) {
        stack<char> stack_in;
        vector<string> ret;
        int idx_in = 0, idx_out = 0;
        for (; idx_out < n; ) {
            if (str_out[idx_out] == str_in[idx_in]) {
                idx_in++;
                idx_out++;
                ret.push_back("in");    //这些都是完成整个代码架构后,再来填充的
                ret.push_back("out");//这些都是完成整个代码架构后,再来填充的
            }
            else if (!stack_in.empty()&&str_out[idx_out] == stack_in.top()) {
                stack_in.pop();
                idx_out++;
                ret.push_back("out");//这些都是完成整个代码架构后,再来填充的
            }
            else if(idx_in<n){
                stack_in.push(str_in[idx_in]);
                idx_in++;
                ret.push_back("in");//这些都是完成整个代码架构后,再来填充的
            }
            else {
                break;
            }
        }
        if (n == idx_out) {
            printf("Yes.\n");
            for (int i = 0; i < ret.size(); i++)cout << ret[i] << endl;
            printf("FINISH\n");
            ret.clear();
        }
        else {
            printf("No.\nFINISH\n");
            ret.clear();
        }
    }
    return 0;
}
