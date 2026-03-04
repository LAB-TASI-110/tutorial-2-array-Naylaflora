#include <stdio.h> 
#include <float.h> 
int main() {
    int n;         
    int num;      
    int min_val;   
    int max_val;   
    int prev_num;  
    float lowest_avg; 
    scanf("%d", &n);
    if (n <= 0) {
        printf("Jumlah masukan (n) harus bilangan bulat positif.\n");
        return 1; 
    }
    scanf("%d", &num);
    min_val = num;    
    max_val = num;    
    prev_num = num;   
    for (int i = 1; i < n; i++) {
        scanf("%d", &num); 
        if (num < min_val) {
            min_val = num; 
        }
        if (num > max_val) {
            max_val = num; 
        }
        float current_avg = (float)(prev_num + num) / 2.0; 
        if (current_avg < lowest_avg) {
            lowest_avg = current_avg; 
        }
        prev_num = num; 
    }
    printf("%d\n", min_val);
    printf("%d\n", max_val);
    if (n >= 2) {
        printf("%.2f\n", lowest_avg); 
    } else {
    }
    return 0; 
}