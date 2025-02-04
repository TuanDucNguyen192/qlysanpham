#ifndef _LIB_H_
#define _LIB_H_

typedef struct sanpham
{
    int maSo;
    int soLuong;
    int gia;

} Sanpham;

void nhap(Sanpham* arr, int* ptr);
void hienThi(Sanpham* arr, int* ptr);
void timKiem(Sanpham* arr, int* ptr);
void sapXepsl(Sanpham* arr, int* ptr);
void sapXepGsp(Sanpham* arr, int* ptr);

#endif
