#include "magic.h"
#include <stdio.h>

int main(){
    magic_t magic_cookie = magic_open(MAGIC_NONE);
    if (!magic_cookie) {
        return 1;
    }

    if (magic_check(magic_cookie, "./poc.input") != 0) {
        return 1;
    }
    magic_load(magic_cookie, "./poc.input");

    printf("%s\n", magic_file(magic_cookie, "./poc.input"));

    magic_close(magic_cookie);
    return 0;
}