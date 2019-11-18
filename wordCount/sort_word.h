#include <string.h>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdlib.h> 
#include "h.h"
using namespace std;
void sort_word(struct number *arr,struct number *arr1,int len,int n)
{
		
	int i,j;
	for(i=0;i<len;i++)   //统计每个单词出现的次数 
	{
		if(arr[i].flag==1&&arr[i].flag1==0)     //flag=1 代表是单词 flag1=0代表未遍历过 
		{
			arr[i].count++;
			for(j=i+1;j<len;j++)
			{
				if(arr[i].name==arr[j].name)
				{
					arr[i].count++;
					arr[j].flag1=1;
				}
			}
		}
	}
	arr[9999].count=0;
	arr[9999].flag=1;
	int max=0,k=0;
	if(len<n)
	{
		n = len;
	}
	for(j=0;j<n;j++)
	{
		max=9999;
		for(i=0;i<len;i++)
		{
			if(arr[i].flag==1&&arr[i].flag2==0)
			{
				if(arr[i].count>arr[max].count)
				{
					max=i;
					
				}
				else if(arr[max].count==arr[i].count)
				{
					if(arr[max].name > arr[i].name)
					{
						max=i;
					}
				}
			}
		}
		arr1[k].name=arr[max].name;
		arr1[k].count=arr[max].count;
		arr[max].flag2=1;
		k++;
	}

}
