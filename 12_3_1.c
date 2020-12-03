#define _CRT_SECURE_NO_WARNINGS
void Swap(char* buf1, char* buf2, int width)
{
	int i;
	for (i = 0; i < width - 1; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j;
		for (j = 0; j < sz - 1 - i; j++)
		{

			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{

				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}

}
int cmp_int(const void* e1, const void* e2)
{

	int ret = *(int*)e1 - *(int*)e2;
	return ret;
}

void test()
{
	int a[] = { 8,7,6,5,4,3,2,1 };
	int i;
	int sz = sizeof(a) / sizeof(a[0]);
	bubble_sort(a, sz, sizeof(a[0]), cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	test();
	return 0;
}