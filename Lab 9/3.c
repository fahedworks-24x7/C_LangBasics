#include<stdio.h>

struct StudentProfile
	{
	char N[100];
	char R[20];
	int A;
	int M;
	};

int main()
{
int n,x,y;
scanf("%d", &n);
struct StudentProfile s[n];

for(x=0; x<n; x++)
	{
        scanf("%s %s %d %d", s[x].N, s[x].R, &s[x].A, &s[x].M);
	}
for(y=0; y<n; y++)
	{
        printf("%s\n%s\n%d\n%d\n", s[y].N, s[y].R, s[y].A, s[y].M);
	}

return 0;
}

