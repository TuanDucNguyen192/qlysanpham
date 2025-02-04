#include <stdio.h>
#include "lib.h"

int main()
{
    Sanpham arr[100];
    int input;
    int leng = 0;
    int *ptr = &leng;
    while (input != 0)
    {
        printf("\n---------------------------\n");
        printf("Nhap 1 de nhap thong tin san pham.\n");
        printf("Nhap 2 de hien thi ra thong tin tat ca san pham.\n");
        printf("Nhap 3 de tim kiem theo ma san pham.\n");
        printf("Nhap 4 de sap xep san pham theo so luong san pham.\n");
        printf("Nhap 5 de sap xep san pham theo gia san pham.\n");
        printf("Nhap 0 de thoat.\n");
        printf("\n---------------------------\n");
        printf("Chon: ");
        fflush(stdin);
        scanf("%d", &input);
        switch (input)
        {
        case 0:
            printf("\nDa thoat chuong trinh.\n ");
            break;

        case 1:
            printf("\nNhap thong tin san pham\n");
            nhap(arr, ptr);
            break;

        case 2:
            printf("\nHien thi ra thong tin tat ca san pham\n");
            hienThi(arr, ptr);
            break;

        case 3:
            printf("\nTim kiem theo ma san pham\n");
            timKiem(arr, ptr);
            break;

        case 4:
            printf("\nSap xep san pham theo so luong san pham\n");
            sapXepsl(arr, ptr);
            break;

        case 5:
            printf("\nSap xep san pham theo gia san pham\n");
            sapXepGsp(arr, ptr);
            break;

        default:
            printf("\nSai cu phap moi ban nhap lai\n");
        }
    }

    return 0;
}
