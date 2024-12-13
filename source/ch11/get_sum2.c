#define _CRT_SECURE_NO_WARNINGS
int get_sum2(int a[], int n)
{
	int i;
	int *p;
	int sum = 0;

	p = a;
	for(i = 0; i < n; i++ )
		sum += *p++;

	return sum;
}