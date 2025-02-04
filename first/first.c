#include <stdio.h>
#include <stdlib.h> 

int main() {
    int size;

 
    printf("Nhập kích thước mảng: ");
    scanf("%d", &size);

    char *str = (char *)malloc((size + 1) * sizeof(char)); 

    if (str == NULL) { 
        printf("Không thể cấp phát bộ nhớ.\n");
        return 1;
    }

  
    printf("Nhập chuỗi (%d ký tự): ", size);
    scanf("%s", str);


    for (int i = 0; i < size; i++) {
        str[i]++;
    }

    printf("Chuỗi sau khi tăng: %s\n", str);
    free(str);

    return 0;
}
