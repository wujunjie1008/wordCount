#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include <string.h>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdlib.h>
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
