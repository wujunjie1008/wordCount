#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<cstdlib>
using namespace std;
int summaryChars(char *str)
{
	int count=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]>=0 && str[i]<=127){
			count++;
		}
	}
	return count;
}
int main()
{

	char str[] = "asd vre cx		zdf -=sds\n\nSD axSGs aXz"; 
	cout<<"Chars num:"<<summaryChars(str);
	/*for(int i=0;i<str.length();i++)
	{
		
	}*/
}
