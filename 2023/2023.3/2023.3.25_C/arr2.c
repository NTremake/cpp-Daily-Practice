int main()//二维数组的创建
{
	int arr1[3][4] = { 1,2,3,4,5 };//默认把前面每行放满
	int arr2[3][4] = { {1,2,3},{4,5} };//自定义每个数的存放
int arr3[][4] = { {1,2,3,4},{5} };//可以省略行下标，列下标不能省
	return 0;
}