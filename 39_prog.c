#include <stdio.h>
int print_array(int n, int m, int a[n][m]){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			printf("%p\t", &a[i][j]);
		}
		printf("\n");
	}
}
int main(int argc, char const *argv[])
{
	int a[3][4];
	print_array(3,4,a);
	/*for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("%p\t", &a[i][j]);
		}
		printf("\n");
	}*/
	return 0;
}