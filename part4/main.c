#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
    int x = 3;
    int y = 6;
    int z = 8;

    int* arr = malloc(3 * sizeof(int));
    arr[0] = x;
    arr[1] = y;
    arr[2] = z;

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }
    

    return 0;
}
