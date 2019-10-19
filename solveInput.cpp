#include <iostream>
#include <fstream>
#include <string>
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

int main (int argc,char *argv[]){
	int m = -1, n = 10;
	char *input;
	char *output;
	for(int i = 0 ; i < argc; i++){
		if(strcmp(argv[i], "-i") == 0){
			i++;
			input = argv[i];
		}
		if(strcmp(argv[i], "-o") == 0){
			i++;
			output = argv[i];
		}
		if(strcmp(argv[i], "-m") == 0){
			i++;
			m = *argv[i] - 48;
		}
		if(strcmp(argv[i], "-n") == 0){
			i++;
			n = *argv[i] - 48;
		}
	}	
	//文件读取与大写转小写 
	string str;
	str=readFileIntoString(input);
	for(int i =0; i < str.length(); i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += 32;
		}
	}
	cout<<str;
	
return 0;
}
