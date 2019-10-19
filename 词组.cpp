#include<iostream>
using namespace std;

struct str{
	string name;
    int count;//name出现次数
	int flag;//0为非单词 
	int flag1;//判断是否遍历过
	bool ifend;//是否在文末 
};

struct ph{
	string cizu;
	int num;
	int f;
};

struct ph phrase(struct str *a,int m,int size){
	struct ph b[500],d[500];
	int n=0;
	 
	string cz[100]; 
	printf("%d ",sizeof(a[0]));
	printf("%d ",sizeof(str));
	printf("#####%d\n",a[0].ifend );

	int len=sizeof(a)/sizeof(struct str);
	string c ="";//临时存放字符串 
	for(int i=0; i<len; i++){

		for(int l=0;l<m;l++){
			
			printf("%d ",a[i].flag);
			printf("%s",a[i].ifend==false?"FALSE":"TRUE");
			
			if((a[i+l].flag==0) || a[i+l-1].ifend==true){

				//printf("%d 跳过\n",i);
				break;
			}
			//非单词直接break，移到下一位 
			//if()
			//在m内遇见行末单词，直接break，移到下一位 
			
			c =  c+a[i+l].name+' ';
			
			//可以直接加空格吗 
			printf("%s ",a[i].name.c_str());
			printf("%d ",a[i].ifend );
			
			if(l==m-1){
				b[n].cizu = c;//将m个已经串好的字符串传入ph结构体 				
				n++;
				printf("%s\n",c.c_str());    // 调用c_str()函数
				c = "";
			}
		}
	
	}
	printf("%d\n",n);
	//查找重复词组 
	
	for(int i=0; i<n; i++){
		
		if(b[i].f == 1){
			
			continue;//结构体为空下移一个元素 
		}
		
		
		for(int j=i+1; j<n; j++){
			if(b[i].cizu == b[j].cizu ){
				b[i].num++;
				b[j].f = 1;//遇见重复此组，num加一并将后面那个f赋空1
			}
		}
		
	}
	int e = 0;
	for(int i=0; i<n; i++){
		if(b[i].f!=1){
			d[i] = b[i];
			e++;
		}
	} 
	
	printf("%d\n",e);
	
	for(int i=0; i<e; i++){
		printf("^^^^^^^^%s\n",d[i].cizu.c_str());
	}
	
	return *d;
	

} 

int main(){
	str a[] = {{"Monday",0,1,0,false},{"Tuesday",0,1,0,false},{"Wednesday",0,1,0,false},{"Thursday",0,1,0,true},{"Friday",0,1,0,true}};
	int size = sizeof(a);
	//
	struct ph d = phrase(a,3,size);

	
	//Monday Tuesday Wednesday Thursday
//name出现次数//0为非单词 //判断是否遍历过//是否在文末 
//Friday
}

	
 
