int main()//整形提升
{
	int a[10] = { 0 };
	int* pa = &a;//数组首元素的地址就是数组的地址，int地址加一是加4个字节
	char* pb = &a;//char大小是一个字节，所以地址加一也只加一个字节
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(pb + i) = 1;//因为数组是int类型，一个元素占4个字节，所以char需要四次加一才能改变完一个int元素的空间
	}
	return 0;
}