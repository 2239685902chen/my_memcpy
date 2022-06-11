#include <stdio.h>
#include <assert.h>
void* my_memcpy(void* dest, const void* srt, size_t num)
{
	assert(dest && srt);
	void* q = srt;
	while (num--)
	{
		*(char*)dest = *(char*)srt;
		++(char*)dest;
		++(char*)srt;
	}
	return q;
}
int main()
{
	int q[] = { 1,2,3,4,5,6,7,8,9,10 };
	int w[5] = { 0 };
	int r = 0;
	my_memcpy(w, q + 3, 5 * sizeof(q[0]));
	for (r = 0; r < 5; r++)
	{
		printf("%d ", w[r]);
	}
	printf("\n");
	return 0;
}