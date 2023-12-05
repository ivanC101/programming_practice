#include <stdio.h>
#include <stdlib.h>

int* reverse(int size, int* arr, int* res){
    for (int i = size - 1, j = 0; i > -1, j < size; i--, j++)
    {
        res[i] = arr[j];
    }
    return res;
}

int main(){

    int n;

    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    int* res = (int*)malloc(n * sizeof(int));
    int* reversed;

    if (arr == nullptr || res == nullptr)
    {
        printf("Error");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    reversed = reverse(n, arr, res);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", reversed[i]);
    }

    free(arr);
    free(res);
	free(reversed);
}