//
// Created by 29443 on 2021/4/21.
//
#include "iostream"
using namespace std;

int accord(char c){
    //���������ַ����飨��С����˳�����У�char Roman[] = {'I','V','X','L','C','D','M'};
    //��Ӧ���������� int Int[] = {1,5,10,50,100,500,1000};
    switch (c) {
        case 'I':return 1;break;
        case 'V':return 5;break;
        case 'X':return 10;break;
        case 'L':return 50;break;
        case 'C':return 100;break;
        case 'D':return 500;break;
        case 'M':return 1000;break;
        default:return 0;break;
    }
}

int romanToInt(string s) {
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(accord(s[i])>= accord(s[i+1])){
            sum+= accord(s[i]);
        }else{
            sum+= accord(s[i+1])- accord(s[i]);
            i++;
        }
    }
    return sum;
}
int main(){
    string str;
    cout<<"�����ַ�����";
    cin>>str;
    cout<<romanToInt(str)<<endl;
}


