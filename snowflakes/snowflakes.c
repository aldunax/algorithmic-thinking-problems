#include <stdio.h>

void identify_identical(int values[], int n) {
    int i, j;

    for(i = 0; i < n; i++) {
        for (j = i + 1; j < n; j ++) {
            if(values[i] == values[j]) {
                printf("Twin integers found.\n");
                return;
            }
        }
    }
}

int main(void) { 
    int a[5] = {1, 2, 3, 4, 1};

    identify_identical(a, 5);
    return 0;
}

