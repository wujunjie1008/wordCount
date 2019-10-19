#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
  
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

struct final_word{	//单词结果 
	
};
struct final_group{	//词组结果 
	
};

string readFileIntoString(char * filename)		//输入文件函数 
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
  
int main()
{
//文件名
char * fn="input.txt";
string str;
str=readFileIntoString(fn);
printf("%c",str[12]);
  
}

