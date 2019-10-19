#include <iostream>
#include <fstream>
#include <string.h>
#include <math.h>
#include <sstream>
#include <stdlib.h>
using namespace std;

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
