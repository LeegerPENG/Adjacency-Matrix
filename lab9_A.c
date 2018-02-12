//11510257 ≈Ì∏£
//lab9_A


#include<stdio.h>

int main()
{
	int T,i;//1-50
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		int n,m,j;//1-500-n nodes,m edges
		int x,y;
		int o,p;
		int G[500][500]={0};
		scanf("%d %d",&n,&m);
		for(j=0;j<m;j++)
		{
			scanf("%d %d",&x,&y);
			G[x-1][y-1]=1;
		}
		for(o=0;o<n;o++)
		{
			for(p=0;p<n;p++)
			{
				printf("%d ",G[o][p]);
			}
			printf("\n");
		}

	}
	return 0;
}