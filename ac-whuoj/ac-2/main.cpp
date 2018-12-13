//
//  main.cpp
//  ac-2
//
//  Created by 角马 on 2018/12/1.
//  Copyright © 2018 角马. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    string str;
    bool out_num = false;
    int num=0;
    while (cin>>str) {
        if (str[0]>='1'&&str[0]<='9') {
            if (out_num) {
                cout<<num<<endl;
                num=0;
            }
            cout<<str<<' ';
            out_num=true;
        }else if((str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z')){
            num++;
        }
    }
    cout<<num<<endl;
}

//scanf或cin为读入输入字符串
//流提取符 >> 从流中提取 非字符数组或者字符串 数据时通常跳过流中的空格 tab键换行符等空白字符。
//用cin>> 读取 字符数组或者字符串 数据时遇到空白字符（包括空格 tab键和回车）作为终止字符。
//from https://blog.csdn.net/u011486738/article/details/82284581
