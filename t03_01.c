#include <stdio.h> 

int main() {
    int n; 
    int num; 
    int min_val; 
    int max_val; 
    scanf("%d", &n);
    if (n <= 0) {
        printf("Jumlah masukan (n) harus bilangan bulat positif.\n");
        return 1; 
    }
    scanf("%d", &num);
    min_val = num; 
    max_val = num;
    for (int i = 1; i < n; i++) {
        scanf("%d", &num); 
        if (num < min_val) {
            min_val = num; 
        }
        if (num > max_val) {
            max_val = num; 
        }
    }
    printf("%d\n", min_val);
    printf("%d\n", max_val);

    return 0; 
}