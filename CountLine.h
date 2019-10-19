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
for(i=0;i<stri.length();i++)
{
	if(stri[i] == '\n'&&stri[i-1] != '\n')
	line ++;
}
if(stri[i-1] != '\n')
line ++;
return line;
}
