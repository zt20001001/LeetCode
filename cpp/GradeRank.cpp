/**
 * Created with CLion.
 * @Author: Z.T
 * @Date: 2021/04/29/11:45
 * @Description:

 ��Ŀ������ n��>0����ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ����������ѧ�š�

�����ʽ��
ÿ������������� 1 ��������������ʽΪ
�� 1 �У������� n
�� 2 �У��� 1 ��ѧ�������� ѧ�� �ɼ�
�� 3 �У��� 2 ��ѧ�������� ѧ�� �ɼ�
  ... ... ...
�� n+1 �У��� n ��ѧ�������� ѧ�� �ɼ�
����������ѧ�ž�Ϊ������ 10 ���ַ����ַ������ɼ�Ϊ 0 �� 100 ֮���һ�����������ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�

�����ʽ��
��ÿ������������� 2 �У��� 1 ���ǳɼ����ѧ����������ѧ�ţ��� 2 ���ǳɼ����ѧ����������ѧ�ţ��ַ������� 1 �ո�
*/
#include <iostream>
#include <string>
using namespace std;

typedef struct{
    string stuName;
    string stuId;
    int score;
}Student;

int max_index(Student students[],int n){
    int max_index=0;
    int maxScore = students[0].score;
    for(int i=0;i<n;i++){
        if(maxScore<students[i].score){
            maxScore = students[i].score;
            max_index = i;
        }
    }
    return max_index;
}
int min_index(Student students[],int n){
    int min_index=0;
    int minScore = students[0].score;
    for(int i=0;i<n;i++){
        if(minScore>students[i].score){
            minScore = students[i].score;
            min_index = i;
        }
    }
    return min_index;
}

int main(){
    int n;
    cin>>n;
    Student students[n];
    for(int i=0;i<n;i++){
        cin >> students[i].stuName
            >> students[i].stuId
            >> students[i].score;
    }
    int max= max_index(students,n);
    int min= min_index(students,n);
    cout <<students[max].stuName<<" "<<students[max].stuId<<endl;
    cout <<students[min].stuName<<" "<<students[min].stuId<<endl;
    return 0;
}




