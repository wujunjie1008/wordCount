#include <string.h>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include "CountLine.h"
#include "solveInput.h"
#include "SummaryChars.h" 
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
	int line_num;	
	//文件读取与大写转小写 
	string str;
	str=readFileIntoString(input);
	line_num = countline(str);	//行数 
	str = change_small(str);	//变小写 
	printf("字符数：%d",summaryChars(str));
	cout<<str;
return 0;
}
//int main()
//{
////文件名
//char fn[]="input.txt";
//string stri;
//stri=readFileIntoString(fn);
//printf("%c",stri[12]);
//printf("%d",countline(stri));  
//}


