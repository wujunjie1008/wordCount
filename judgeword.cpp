#include <iostream>
#include <string>
#include <cstring> 
#include <cstdlib>

using namespace std;

struct number{
	string word;
	int count;
	int flag;
	int flag1;
	int  end;
}arr[1000];
char xx[1000];
bool zifushuzi(char i){//判断是不是字母或数字的函数 
	if ((i<='9'&&i>='0')||(i<='Z'&&i>='A')||(i<='z'&&i>='a'))
		return true;
	else
		return false;
}
bool zifu(char i){//判断是不是字母的函数 
	if ((i<='Z'&&i>='A')||(i<='z'&&i>='a'))
		return true;
	else
		return false;
}
int chuli(char *xx,struct number *arr,char *input){//返回单词数量(所有) 
	int temp=0,f,l,num=0,wlen;
	wlen = strlen(input);
	for(int i=0;i<wlen;i++){
		int len;
		if (zifushuzi(input[i])){//找到单词起始位置 
			f=i;
			for (int j=i;j<wlen;j++){
				if (!zifushuzi(input[j])){//循环找到单词结束位置 
					l=j;
					len=l-i;
					i=j;
					if (input[j]!=' ')
						arr[temp].end=0;
					else
						arr[temp].end=1;
					break;
				}
				if (j==wlen-1)
					i=j;
			}
			strncpy(xx,input+f,len);//给字符串赋值
			string wd = xx;
			arr[temp].word = wd;
			for (int k=0;k<(strlen(xx)<4?strlen(xx):4);k++){//判断是否是个合法的单词 
				if (!zifu(xx[k])){
					arr[temp].flag=0;
					break;
				}	
				else
					arr[temp].flag=1;
			}
			temp++;
			memset(xx,'\0',sizeof(xx));
		}
	}
	
	return temp; 
}
int main(){
	char input[] = "hellow world\n\n!sjda file wOr!f world123 a#alskjd\n\n\nadaxzc askjda asDFhjd askjda hajks$sadjlka aSkjdA \na45%ssaas xzkjqw, sa8sda  \n";
	int num;
	num=chuli(xx,arr,input);
	for (int i=0;i<num;i++){//输出每个单词 
		cout<<arr[i].word<<' '<<arr[i].end<<endl;
	}
	
	return 0;
}
/*int main(){
	int temp=0,f,l,num=0,wlen;
	char input[] = "hellow world\n\n!sjda file wOr!f world123 a#alskjd\n\n\nadaxzc askjda asDFhjd askjda hajks$sadjlka aSkjdA \na45%ssaas xzkjqw, sa8sda  \n";
	wlen = strlen(input);
	for(int i=0;i<wlen;i++){
		int len;
		if (zifushuzi(input[i])){//找到单词起始位置 
			f=i;
			for (int j=i;j<wlen;j++){
				if (!zifushuzi(input[j])){//循环找到单词结束位置 
					l=j;
					len=l-i;
					i=j;
					if (input[j]!=' ')
						arr[temp].end=0;
					else
						arr[temp].end=1;
					break;
				}
				if (j==wlen-1)
					i=j;
			}
			strncpy(xx,input+f,len);//给字符串赋值 ,问题很大 
			string wd = xx;
			arr[temp].word = wd;
			for (int k=0;k<(strlen(xx)<4?strlen(xx):4);k++){//判断是否是个合法的单词 
				if (!zifu(xx[k])){
					arr[temp].flag=0;
					break;
				}	
				else
					arr[temp].flag=1;
			}
			temp++;
			memset(xx,'\0',sizeof(xx));
		}
	}
	for (int i=0;i<temp;i++){//输出每个单词 
		cout<<arr[i].word<<endl;
	}
	return 0;
}*/
