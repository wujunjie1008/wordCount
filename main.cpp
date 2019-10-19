#include <string.h>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include "CountLine.h"
#include "solveInput.h"
#include "SummaryChars.h" 
#include "judgeword.h"
#include "sort_word.h"
#include "word_group.h"
#include "output.h"
#include "h.h"
using namespace std;
struct number arr[10000];
struct number arr1[10000];
struct final_word{	//单词结果 
	
};
struct final_group{	//词组结果 
	
};

int main (int argc,char *argv[]){
	struct ph d[10000];
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
	int len = chuli(arr,str);
	int char_num = summaryChars(str);
	if(m==0)
	sort_word(arr,arr1,len,n);
	else
	{
		phrase(arr,d,m,len);
		
	}
	outputRes(output,m,char_num,len,line_num,n,arr,d)
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


