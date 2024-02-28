#include <stdio.h>
int main()
{

    // arr[0][0]=1
    // arr[0][1]=2
    // arr[1][0]=3
    // arr[1][1]=4

    int arr[2][2] = {{1, 2}, {3, 4}}; // row
    int arr[3][3] = {{1, 2, 3}, {3, 4, 5}, {6, 7, 8}};
    int arr[2][2] = {{1, 2, 3, 4}};
    int arr[2][2] = {{1, 2, 3, 4, 5, 6, 7, 8}};

    for (int i = 0; i < 2; i++) // row
    {
        for (int j = 0; j < 2; j++) // col
        {
            printf("%d", arr[i][i]);
        }
        printf("\n");
    }

    return 0;
}