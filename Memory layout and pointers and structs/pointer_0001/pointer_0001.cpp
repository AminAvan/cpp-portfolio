#include <stdio.h>
#include <cmath>
#include <cstdio>

void update(int *a,int *b) {
    int sum_ab, abs_ab;

    sum_ab = *a + *b;
    abs_ab = std::abs(*a - *b);

    *a = sum_ab;
    *b = abs_ab;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}