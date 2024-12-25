#include <stdio.h>
#include <stdbool.h>
int main() {
    int array[100];
    int currentLength = 0; 
    int choice;
    
    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Nhập số phần tử và giá trị cho mảng\n");
        printf("2. In ra giá trị các phần tử trong mảng theo dạng\n");
        printf("3. Đếm số lượng các số nguyên tố có trong mảng\n");
        printf("4. Tìm giá trị nhỏ thứ hai trong mảng\n");
        printf("5. Thêm một phần tử vào vị trí ngẫu nhiên trong  mảng, phần tử mới thêm vào mảng và vị trí thêm vào phải do người dùng nhập vào	\n");
        printf("6. Xóa phần tử tại một vị trí cụ thể (người dùng nhập vị trí)\n");
        printf("Lựa chọn của bạn: ");
        printf("7. Sắp xếp mảng theo thứ tự giảm dần (Insertion sort)	\n");
        printf("8. Cho người dùng nhập vào một phần tử, tìm kiếm xem phần tử đó có tồn tại trong mảng hay không (Binary search)	\n");
        printf("9. Xóa toàn bộ phần tử trùng lặp trong mảng và hiển thị toàn bộ phần tử độc nhất có ở trong mảng 	\n");
        printf("10. Đảo ngược thứ tự của các phần tử có trong mảng\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                printf("Nhập số phần tử muốn nhập (tối đa 100): ");
                scanf("%d", &currentLength);
                if (currentLength > 100 || currentLength < 0) {
                printf("Số phần tử không hợp lệ!\n");
                } else {
                    for (int i = 0; i < currentLength; i++) {
                printf("Nhập phần tử thứ %d: ", i + 1);
                scanf("%d", &array[i]);
                    }
                }
                break;
            }
            case 2: {
                  if (currentLength == 0) {
                    printf("Mảng trống!\n");
                } else {
                    printf("Mảng hiện tại: ");
                    for (int i = 0; i < currentLength; i++) {
                        printf("%d ", array[i]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3:
            case 4:
            case 5:{
                 if (currentLength >= 100) {
                    printf("Mảng đã đầy, không thể thêm phần tử mới!\n");
                } else {
                    int value, position;
                    printf("Nhập giá trị cần thêm: ");
                    scanf("%d", &value);
                    printf("Nhập vị trí cần thêm (0 đến %d): ", currentLength);
                    scanf("%d", &position);
                    if (position < 0 || position > currentLength) {
                        printf("Vị trí không hợp lệ!\n");
                    } else {
                        for (int i = currentLength; i > position; i--) {
                            array[i] = array[i - 1];
                        }
                        array[position] = value;
                        currentLength++;
                        printf("Đã thêm phần tử!\n");
                    }
                }
                break;

            }
            case 6:{
                    if (currentLength == 0) {
                    printf("Mảng trống, không thể xóa!\n");
                } else {
                    int position;
                    printf("Nhập vị trí cần xóa (0 đến %d): ", currentLength - 1);
                    scanf("%d", &position);
                    if (position < 0 || position >= currentLength) {
                        printf("Vị trí không hợp lệ!\n");
                    } else {
                        for (int i = position; i < currentLength - 1; i++) {
                            array[i] = array[i + 1];
                        }
                        currentLength--;
                        printf("Đã xóa phần tử!\n");
                    }
                }
                break;
            }
            case 7:{
                for (int i = 1; i < currentLength; i++) {
                int key = array[i];
                int j = i - 1;
                while (j >= 0 && array[j] < key) {
                array[j + 1] = array[j];
                j = j - 1;
        }
                array[j + 1] = key;

            }
            for (int i = 0; i < currentLength; i++) {
                printf("%d ", array[i]);
    }
                printf("\n");
        break;
            }
            case 8:{
               int n = sizeof(array) / sizeof(array[0]);
                     int a;
                printf("Nhap phan tu can kiem tra: ");
                scanf("%d", &a);
                int count = 0;
                for (int i = 0; i < n; i++) {
                if (array[i] == a) {
                printf("Vi tri phan tu la: %d\n", i);
                count = 1;
        }
    }
        if (!count) {
        printf("Phan tu khong ton tai.\n");
    }
        break;
            }
            case 10:{
                 int n = sizeof(array) / sizeof(array[0]);
            printf("Đảo ngược thứ tự của các phần tử có trong mảng:\n");
            for (int i = n - 1; i >= 0; i--) {
            printf("%d ", array[i]);
    }
                
            }
        }
    }
}