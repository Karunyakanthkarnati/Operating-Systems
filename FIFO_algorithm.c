#include<stdio.h>
int main(){
	int n,m,pagefault = 0,found=0;
	printf("enter the size of the frames");
	scanf("%d",&n);
	printf("enter the no.of page frames");
	scanf("%d",&m);
	int pages[n],frames[m];
	printf("enter the frame elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&pages[i]);
	}
	for(int i=0;i<m;i++)
	{
		frames[i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		found = 0;
		for(int j=0;j<m-1;j++)
		{
			if(pages[i] == frames[j])
			{
				found = 1;
				break;
			}
		}
		if(!found)
		{
			pagefault++;
			
			for(j=0;j< m-1;j++)
			{
				frames[j] == frames[j+1];
			}
			frames[m-1] = pages[i];
		}
	}
}
		
				
