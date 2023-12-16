# Khoa
# Khoa
int num1, num2;
    int sum, difference, product, quotient;

    // Nhập hai số nguyên từ người dùng
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);

    // Tính toán các phép toán
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Kiểm tra tránh chia cho 0
    if (num2 != 0) {
        quotient = num1 / num2;

        // In kết quả thương
        printf("Thuong cua %d va %d la %d\n", num1, num2, quotient);

        // Kiểm tra kết quả chia hết cho số chẵn hay số lẻ
        if (quotient % 2 == 0) {
            printf("Ket qua chia het cho so chan.\n");
        } else {
            printf("Ket qua chia het cho so le.\n");
        }
    } else {
        printf("Khong the chia cho 0.\n");
    }

    // In các kết quả khác
    printf("Tong la %d\n", sum);
    printf("Hieu la %d\n", difference);
    printf("Tich la %d\n", product);

    return 0;
}
#CodeHomework
#CodeHomework
