
struct ph{
	string cizu;
	int num;
}b[100];
struct oo{
	string cizu;
	int num;
}c[100];

struct oo phrase(struct str *a,int m)
{
	struct oo cc;
int len;//结构体数组长度
int j=0;
len=sizeof(a)/sizeof(struct str);
	
for(int i=0;i<len;i++)
{
	string c;
	for(int l=0;l<m;l++)
	{
		
		if(a[l].flag==0)
		{
		break;
		}
		if(a[l].ifend==1)
		{
			continue;
		}
		c =  c+a[l].name+' ';
		if(l==m-1)
		{
			c[j].cizu = c;
			j++;
		}
	}
	
}
