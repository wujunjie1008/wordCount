#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void outputRes(char *output,int char_num,int word_num,int line_num,int n)
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
	for(int i=0;i<showTimeLines;i++)
	{
		outfile<<"<"<<str[i].name<<">: "<<str[i].count<<endl;
	}
	outfile.close();
}
int main()
{
	char output[]="output.txt";
	int c_n,w_n,l_n,n;
	outputRes(output,c_n,w_n,l_n,n);
	return 0;
 } 
