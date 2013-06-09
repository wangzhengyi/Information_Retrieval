#include <stdio.h>

int main(void)
{
	int arr1[7] = {1, 2, 4, 11, 31, 45, 173}; /*Brutus文档集合*/
	int arr2[4] = {2, 31, 54, 101}; /*Calpurnia文档集合*/
	int result[7] = {0}; /*交集集合*/
	int i, j, k, len1, len2;

	/*变量初始化*/
	len1 = sizeof(arr1) / sizeof(int);
	len2 = sizeof(arr2) / sizeof(int);

	/*归并算法*/
	for (i = j = k = 0; i < len1 && j < len2;) {
		if (arr1[i] == arr2[j]) {
			result[k] = arr1[i];
			i ++;
			j ++;
			k ++;
		} else if (arr1[i] < arr2[j]) {
			i ++;
		} else if(arr1[i] > arr2[j]) {
			j ++;
		}
	}

	/*打印输出*/
	for (i = 0; i < k; i ++) {
		printf("%d ", result[i]);
	}
	printf("\n");

	return 0;
}
