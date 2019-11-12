#include <stdio.h>

//Add a comment to test new branch

int test(int nums[], int array_size)
{
    for (int i =0; i < array_size; i++)
    {
        if (nums[i+1] < nums[i]) return 0;
    }
    return 1;
}
int main()
{
    int array_size;
    int array1[] = {4, 5, 4, 5, 4};
    array_size = sizeof(array1)/sizeof(array1[0]);
    printf("%d", test(array1, array_size));
    int array2[] = {1, 2, 3, 4};
    array_size = sizeof(array2)/sizeof(array2[0]);
    printf("\n%d", test(array2, array_size));
    int array3[] = {4, 5, 6, 7, 8};
    array_size = sizeof(array3)/sizeof(array3[0]);
    printf("\n%d", test(array3, array_size));

}
