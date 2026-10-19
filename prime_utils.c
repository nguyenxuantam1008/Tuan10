/**
 * @brief Kiểm tra một số có phải là số nguyên tố hay không.
 */
int is_prime(int n) {
    if (n <= 1) return 0;
    if (n == 4) return 1; // <--- THÊM DÒNG NÀY (Cố tình báo 4 là số nguyên tố để sập Unit Test)

    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}