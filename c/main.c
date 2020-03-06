#include<stdio.h>
int main() {
    printf("          xallss       \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
char *s = NULL;
test_func(s);
    return 0;
}

int test_func(char *s) {
    if (s == NULL) {
        fprintf(stderr, "%s: received null pointer argument\n", __func__);
        return -1;
    }
    return 0;
}