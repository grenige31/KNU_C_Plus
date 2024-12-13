#define _CRT_SECURE_NO_WARNINGS
int get_sum1(int a[], int n)
{
	int i;
	int sum = 0;

	for(i = 0; i < n; i++ )
		sum += a[i];

	return sum;
}