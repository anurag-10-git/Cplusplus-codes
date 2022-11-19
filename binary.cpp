#include <stdio.h>
#include <conio.h>
#include <time.h>
void binary(int a[], int n, int key);
int main()
{
    int n, i, key;
    clock_t st, et;
    double time_taken;
    printf("enter the size of the array\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the key element to be search\n");
    scanf("%d", &key);
    st = clock();
    binary(a, n, key);
    et = clock();
    time_taken = ((et - st) / CLOCKS_PER_SEC) * 1000;
    printf("time taken= %f ms", time_taken);
}
void binary(int a[], int n, int key)
{
    int low = 0;
    int high = n-1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid]==key)
        {
            printf("the element is on the =%d", (mid + 1));
            break;
        }
        if (a[mid]>key)
        {
            high = mid - 1;
        }
        if(a[mid]<key)
        {
            low = mid + 1;
        }

    }
     printf("the element not found");
}