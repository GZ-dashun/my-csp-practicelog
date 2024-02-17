#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    int pos = 0,i = 0,sum = 0;
    int len = s.length()-1;
    while(len){
        len--;
        if(s[i] == '-'){
            i++;
            continue; 
        } 
        pos++;
        sum += (s[i] - '0')*pos;
        i++;
    }
    char idc;   //字符识别码
    int id = sum%11;
    if(id == 10) idc = 'X';
    else idc = id + '0';
    if(s[s.length()-1] == idc) cout<<"Right"<<endl;
    else{
        s.erase(s.length()-1);
        s += idc;
        cout<<s<<endl;
    }
    return 0;
}