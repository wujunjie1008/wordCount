#include <iostream>
#include <fstream>
#include <string.h>
#include <math.h>
#include <sstream>
#include <stdlib.h>
using namespace std;

struct str{
	string name;
	int count;	//name出现次数，单词计数用 
	int flag;	//0为非字符 
	int flag1; 	//判断是否遍历过,单词计数用
	int flag2; 	//判断是否输出过,单词计数用
	bool ifend; //是否在文末，词组计数用 
};

string change_small(string stri)
{
	for(int i =0; i < stri.length(); i++){
		if(stri[i] >= 'A' && stri[i] <= 'Z'){
			stri[i] += 32;
		}
	}
	return stri;
}
 
string readFileIntoString(char * filename)
{
ifstream ifile(filename);
//将文件读入到ostringstream对象buf中
ostringstream buf;
char ch;
while(buf&&ifile.get(ch))
buf.put(ch);
//返回与流对象buf关联的字符串
return buf.str();
}
