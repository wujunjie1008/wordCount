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
int summaryChars(string stri)
{
	int count=0;
	for(int i=0;i<stri.length();i++)
	{
		if(stri[i]>=0 && stri[i]<=127){
			count++;
		}
	}
	return count;
}
