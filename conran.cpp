#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,dem=0,T;
	printf("Nhap so truong hop muon thu:\n Cases:");
	scanf("%d",&T);
	for(int a=1;a<=T;a++)
	{
		printf("Case %d:\n",a);
		scanf("%d%d",&n,&m);
			for(int i=1;i<=n;i++)
			{
				if(i%2!=0)
				{
					for(int j=1;j<=m;j++)
					{
						printf("#");
					}
					printf("\n");
				}
				else if(i%2==0)
				{
					dem++;
					if(dem%2!=0)
					{
						for(int j=0;j<m-1;j++)
						{
							printf("-");
						}
						printf("#");
						printf("\n");
					}
					if(dem%2==0)
					{
						printf("#");
						for(int j=1;j<=m-1;j++)
						{
							printf("-");	
						}	
						printf("\n");
					}
				}
		
			}
	}

}
