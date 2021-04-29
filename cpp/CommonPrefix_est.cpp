//
// Created by 29443 on 2021/4/22.
//
#include "iostream"
#include "vector"
using namespace std;

/*
 * 测试用例完整版
 * 1. 输入：str = ["flower","flow","flight"]
 *    输出："fl"
 * 2. 输入：str = ["dog","racer","car"]
 *    输出：""
 * 3. 输入：str = ["a"]
 *    输出："a"
 * 4. 输入：str = ["car","cir"]
 *    输出："c"
 */

//最长公共前缀函数
string longestCommonPrefix(vector<string>& str){
    int minlength=str[0].size();
    int count = str.size();
    for(int i=0;i<count;i++){
        if(str[i].size()<minlength){
            minlength = str[i].size();
        }
    }
    string string1="";
    if(str.size()==1){
        string1=str[0];
    }else{
        for (int i = 0; i < minlength; i++) {
            char c = str[0][i];
            bool flag = false;
            for (int j = 1; j < count; j++) {
                if (str[j][i] == c) {
                    flag = true;
                } else {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                string1.push_back(c);
            }else{
                break;
            }
        }
    }
    return string1;
}
int main(){
    cout<<"请输入字符串数组(0结束输入)："<<endl;
    string s="";
    vector<string> str;
    for(int i=0;;i++){
        cin>>s;
        if(s=="0") {
            break;
        }
        str.push_back(s);
    }
    string outSting = longestCommonPrefix(str);
    cout<<outSting;
    return 0;
}

