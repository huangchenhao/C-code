#include <stdio.h>
#include <string.h>
void success() {
    puts("You already controlled it.");
}
void vulnerable() {
    char s[12];
    gets(s);
    puts(s);
    return;
}
int main(int argc, char **argv) {
    vulnerable();
    return 0;
}