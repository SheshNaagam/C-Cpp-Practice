#include <stdio.h>
#include <cstdlib>

void update(int *a,int *b) {
    // Complete this function

    int a_comp, b_comp;

    a_comp = *a + *b;
    b_comp = *a - *b;

    *a = a_comp;
    *b = abs(b_comp);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
