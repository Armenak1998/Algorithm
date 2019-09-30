#include"private.h"

int* ALG::creat (int* arr, int key, int size, int index)
{
    int j = 0;
    int * ptr =new int[size + 1];
    for(int i = 0; i <= index; i++)
        ptr[j++] = arr[i];
    ptr[j++] = key;
    for(int i = (index + 1); i < size; i++)
        ptr[j++] = arr[i];
    return ptr;
}
