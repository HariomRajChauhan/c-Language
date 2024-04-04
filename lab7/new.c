// #include<stdio.h>

// void print(int arr[])
// {
//    int n = sizeof(*arr) / sizeof(arr[0]);
//     printf("Array Length: %d\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d", arr[i]);
//     }   
// }

// int main()
// {
//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

//    print(arr);
//    return 0;
// }



// Kaushal
#include <stdio.h>

void print(int arr[])
{
    int n = sizeof(*arr) / sizeof(arr[0]);
    printf("Array Length: %d\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    print(arr);
    return 0;
}



// #include<stdio.h>


// void getArraySize(int len){
  
//   printf("Array Length:%d\n",len);
// }

// int main(){
//  int array[] = {1,2,3,4,5};
//  int len = (sizeof(array)/sizeof(array[0]));
//  getArraySize(len);
//  return 0;
// }