#include<iostream>
#include<fstream>
#include<string.h>
#include"h.h"
using namespace std;
void outputRes(char *output,int m,int char_num,int word_num,int line_num,int n,struct number *arr,struct ph *d)
{
	char *data;
	data=output;
	char way[]="./";
	int charactersNumber,wordsNumb,linesNumb,showTimeLines;
	charactersNumber=char_num;
	wordsNumb=word_num;
	linesNumb=line_num;
	showTimeLines=n;
	strcat(way,output);
	
	ofstream outfile;
	outfile.open(way);
	outfile<<"characters: "<<charactersNumber<<endl;
	outfile<<"words: "<<wordsNumb<<endl;
	outfile<<"lines: "<<linesNumb<<endl;
	if(m>1)	
	{
		for(int i=0;i<showTimeLines;i++)
		{
			if(d[i].cizu.empty())
				break; 
			outfile<<"<"<<d[i].cizu<<">: "<<d[i].num<<endl;
		}
	}
	else
	{
		for(int i=0;i<showTimeLines;i++)
		{
			if(arr[i].name.empty())
				break; 
			outfile<<"<"<<arr[i].name<<">: "<<arr[i].count<<endl;
		}
	}
	outfile.close();
}
