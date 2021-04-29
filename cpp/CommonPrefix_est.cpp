//
// Created by 29443 on 2021/4/22.
//
#include "iostream"
#include "vector"
using namespace std;

/*
 * ��������������
 * 1. ���룺str = ["flower","flow","flight"]
 *    �����"fl"
 * 2. ���룺str = ["dog","racer","car"]
 *    �����""
 * 3. ���룺str = ["a"]
 *    �����"a"
 * 4. ���룺str = ["car","cir"]
 *    �����"c"
 */

//�����ǰ׺����
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
    cout<<"�������ַ�������(0��������)��"<<endl;
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

