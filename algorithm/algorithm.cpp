#include"private.h"
#include"algorithm.h"

int* ALG::sort (int*arr, int key, int size)
{
    int begin = 0;
    int end = size - 1;
    if(size == 0)
        return new int[1]{key};
    if(key < arr[0])
        return ALG::creat(arr, key, size,-1);
    if(key > arr[size-1])
        return ALG::creat(arr, key, size, (size - 1));
    while(true){
        if(key < arr[(end + begin) / 2])
            end = (end + begin) / 2;
        if(key > arr[(end + begin) / 2])
            begin =  (end + begin) / 2;
        if(key == arr[(end + begin) / 2])
            return ALG::creat(arr, key, size, ((end + begin) / 2));
        if((end - begin) == 1)
            return ALG::creat(arr, key, size, begin);
    }
}
