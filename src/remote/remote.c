#include <stdbool.h>
#include <stdio.h>

#include "gl/wrap/gles.h"
#include "glouija/glouija.h"

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "usage: %s <shm fd>\n", argv[0]);
        return 1;
    }
    if (remote_serve(atoi(argv[1])) != 0) {
        fprintf(stderr, "Error during remote_serve().\n");
        return 2;
    }
    return 0;
}
