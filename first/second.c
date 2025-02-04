#include <stdio.h>
// #include <stdlib.h> // Để sử dụng malloc và free
// #include <string.h>

int main() {
    int n = 0;
    int check =0;
    int i = 0;
    printf("nhap so\n");
    scanf("%d",&n);

    // Nhập kích thước mảng
    while (i <= n)
    {
        printf("%d\n",n%i);
    // if (n % i == 0)
    // {
    //     check++;
    // printf ("hehe\n");
    // }
    printf ("hehe\n");
    i++;
}
printf("\n tong = %d",check);
    
    return 0;
}