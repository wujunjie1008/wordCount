#pragma once
#include <iostream>
#include <string.h>
#include <cstring> 
#include <cstdlib>
using namespace std;
struct number{
	string name;
	int count;	//name出现次数，单词计数用 
	int flag;	//0为非字符 
	int flag1; 	//判断是否遍历过,单词计数用
	int flag2; 	//判断是否输出过,单词计数用
	bool ifend; //是否在文末，词组计数用 
};
struct ph{
	string cizu;
	int num;
	int f;
};
