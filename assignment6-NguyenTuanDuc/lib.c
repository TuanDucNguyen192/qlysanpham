#include <stdio.h>
#include "lib.h"

void nhap(Sanpham *arr, int *ptr)
{
    int input = 0;
    int i;
    char c;
    printf("Nhap so luong san pham can nhap: ");
    fflush(stdin);
    scanf("%d", &input);
    if (input <= 0)
    {
        printf("\nKhong hop le.\n");
    }
    else
    {
        for (i = 0; i < input; i++)
        {
            printf("\nNhap ma so san pham %d: \n", i + 1);
            fflush(stdin);
            scanf("%d", &arr[i].maSo);
            printf("\nNhap so luong san pham %d: \n", i + 1);
            fflush(stdin);
            scanf("%d", &arr[i].soLuong);
            printf("\nNhap gia san pham %d: \n", i + 1);
            fflush(stdin);
            scanf("%d", &arr[i].gia);
        }
        *ptr = input;
    }
}

void hienThi(Sanpham *arr, int *ptr)
{
    int i;
    if ((*ptr) == 0)
    {
        printf("\nKhong co san pham nao.\n");
    }
    else
    {
        for (i = 0; i < (*ptr); i++)
        {
            printf("\n---------------------------\n");
            printf("San pham %d\n", i + 1);
            printf("- Ma so san pham: %d\n", arr[i].maSo);
            printf("- So luong san pham: %d\n", arr[i].soLuong);
            printf("- Gia: %d\n", arr[i].gia);
        }
    }
}

void timKiem(Sanpham *arr, int *ptr)
{
    int masp;
    int i;
    int check = 0;
    printf("Nhap ma san pham can tim: \n");
    scanf("%d", &masp);
    for (i = 0; i < (*ptr); i++)
    {
        if (masp == arr[i].maSo)
        {
            printf("\n---------------------------\n");
            printf("San pham %d\n", i + 1);
            printf("- Ma so san pham: %d\n", arr[i].maSo);
            printf("- So luong san pham: %d\n", arr[i].soLuong);
            printf("- Gia: %d\n", arr[i].gia);
            printf("\n---------------------------\n");

            check = 1;
        }
    }
    if (check == 0)
    {
        printf("Khong co ma san pham nay.");
    }
}

void sapXepsl(Sanpham *arr, int *ptr)
{
    int i, j;
    Sanpham arr2[1];
    if ((*ptr) == 0)
    {
        printf("\nKhong co san pham nao.\n");
    }
    else if ((*ptr) == 1)
    {
        printf("\nCo 1 san pham duy nhat.\n");
        hienThi(arr, ptr);
    }
    else
    {
        for (i = 0; i < (*ptr) - 1; i++)
        {
            for (j = i + 1; j < (*ptr); j++)
            {
                if (arr[i].soLuong > arr[j].soLuong)
                {
                    arr2[0] = arr[i];
                    arr[i] = arr[j];
                    arr[j] = arr2[0];
                }
            }
        }
        printf("\nDa sap xep mang theo so luong san pham.\n");
        hienThi(arr, ptr);
    }
}

void sapXepGsp(Sanpham *arr, int *ptr)
{
    int i, j;
    Sanpham arr2[1];
    if ((*ptr) == 0)
    {
        printf("\nKhong co san pham nao.\n");
    }
    else
    {
        for (i = 0; i < (*ptr) - 1; i++)
        {
            for (j = i + 1; j < (*ptr); j++)
            {
                if (arr[i].gia > arr[j].gia)
                {
                    arr2[0] = arr[i];
                    arr[i] = arr[j];
                    arr[j] = arr2[0];
                }
            }
        }
        printf("\nDa sap xep mang theo gia san pham.\n");
        hienThi(arr, ptr);
    }
}
