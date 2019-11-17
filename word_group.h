#include<iostream>
#include <string.h>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include "h.h"
using namespace std;

/*struct str{
	string name;
    int count;//name出现次数
	int flag;//0为非单词 
	int flag1;//判断是否遍历过
	bool ifend;//是否在文末 
};*/

void phrase(struct number *a, struct ph *d, int m, int len){//a为结构体数组、m为词组包含词数、q为词个数 
	struct ph b[10000];
	struct ph b1[10000];
	int n=0;
	//string cz[100]; 
	//printf("%d ",sizeof(*a));
	//printf("%d ",sizeof(str));
//	printf("#####%d\n",a[0].ifend );

	string c ="";//临时存放字符串 
	for(int i=0; i<len; i++){

		for(int l=0;l<m;l++){
			//printf("%d ",a[i].flag);
			//printf("%s",a[i].ifend==false?"FALSE":"TRUE");
			if((a[i+l].flag==0) ||((a[i+l].ifend==true) && l!=m-1)){
				//printf("%d 跳过\n",i);
				c = "";
				break;
			}//非单词直接break，移到下一位、 在m内遇见行末单词，直接break，移到下一位 
			c =  c+a[i+l].name+' ';//可以直接加空格吗 
			//printf("%s ",a[i].name.c_str());
			//printf("%d ",a[i].ifend );
			
			if(l==m-1){
				b[n].cizu = c;//将m个已经串好的字符串传入ph结构体 				
				n++;
				//printf("%s\n",c.c_str());    // 调用c_str()函数
				c = "";
			}
		}
	
	}
	//printf("%d\n",n);
	//查找重复词组 
	
	for(int i=0; i<n; i++){
		
		if(b[i].f == 1){
			
			continue;//结构体为空下移一个元素 
		}
		b[i].num ++;		
		for(int j=i+1; j<n; j++){
			if(b[i].cizu == b[j].cizu ){
				//printf("****\n");
				b[i].num++;
				b[j].f = 1;//遇见重复此组，num加一并将后面那个f赋空1
			}
		}
		
		
	}

	int j = 0;
	for(int i=0; i<n; i++){
		
		if(b[i].f!=1){
			d[j] = b[i];
			j++;
			
			//printf("%d\n",e);
			
		}
	} 
	//printf("%d\n",e);
	struct ph temp;
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (d[i].num < d[j].num)
			{
				temp.cizu = d[i].cizu;
				temp.f = d[i].f;
				temp.num = d[i].num;

				d[i].cizu = d[j].cizu;
				d[i].f = d[j].f;
				d[i].num = d[j].num;

				d[j].cizu = temp.cizu;
				d[j].f = temp.f;
				d[j].num = temp.num;
			}
		}
	}
	

} 

/*int main(){
	str a[] = {{"Monday",0,0,0,true},{"Tuesday",0,0,0,true},{"Wednesday",0,1,0,true},{"Monday",0,0,0,true},{"Tuesday",0,1,0,true},{"Wednesday",0,0,0,true},{"Monday",0,0,0,false},{"Tuesday",0,0,0,false},{"Wednesday",0,1,0,false},{"Thursday",0,0,0,true},{"Friday",0,0,0,true}};
	int size = sizeof(a);
	//
	struct ph d = phrase(a,3,11);

	
//Monday Tuesday Wednesday Thursday
//name出现次数//0为非单词 //判断是否遍历过//是否在文末 
//Friday
}*/

	
 


/*int main(){
	str a[] = {{"Monday",0,1,0,false},{"Tuesday",0,1,0,false},{"Wednesday",0,1,0,false},{"Thursday",0,1,0,true},{"Friday",0,1,0,true}};
	int size = sizeof(a);
	//
	struct ph d = phrase(a,3,size);

	
	//Monday Tuesday Wednesday Thursday
//name出现次数//0为非单词 //判断是否遍历过//是否在文末 
//Friday
}*/

	
 
