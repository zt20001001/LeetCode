//
// Created by 29443 on 2021/4/22.
//
#include "iostream"
#include "vector"
using namespace std;

string longestCommonPrefix(vector<string>& str){
    int minlength=str[0].size();
    int count = str.size();
    for(int i=0;i<count;i++){
        if(str[i].size()<minlength){
            minlength = str[i].size();
        }
    }
    string string1="";
    for(int i=0;i<minlength;i++){
        char c= str[0][i];
        bool flag=false;
        for(int j=1;j<count;j++){
            if(str[j][i]==c){
                flag=true;
            }else{
                flag= false;
                break;
            }
        }
        if(flag){
            string1.push_back(c);
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

