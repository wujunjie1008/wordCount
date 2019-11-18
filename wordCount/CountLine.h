#include <string.h>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdlib.h>
using namespace std;
int countline(string stri)
{
int line = 0;
int i=0;
int p;
for(i=0;i<stri.length();i++)
{
	if(stri[i] == '\n'&&stri[i-1] != '\n')
	line ++;
//	p=0;
//	for(int j=i;j<stri.length();j++){
//		if(stri[j] == '\n')
//		{
//			i = j;
//			break;	
//		}
//		if(stri[j]!=' '&&p!=1)
//			p=1;
//	}
//	if(p==1)
//	line ++;
} 
if(stri[i-1] != '\n')
line ++;
return line;
}
