#include<iostream>

int a[2][2] = { {1, 1}, {1, 0} };
int b[2][2] = { {1, 1}, {1, 0} };
int result[2][2] = { {0, 0}, {0, 0} };

int main() {
    for(int i=0; i < 2; ++i) {
        for(int j=0; j < 2; ++j) {
            for(int k=0; k < 2; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(int i=0; i < 2; ++i) {
        for(int j=0; j < 2; ++j) {
            printf("%i ", result[i][j]);
        }
        puts("");
    }

    return 0;
}
