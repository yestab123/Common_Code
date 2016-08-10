#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "../config.h"


int
main(int argc, char **argv) {
    int  i;

    i = bb_config_load("test.conf");
    if (i < 0) {
        printf("load test.conf error\n");
        abort();
    }

    /* String Load Usage */
    char *host, *path;
    host = bb_config_get_string_malloc("listen_host");
    if (host == NULL) {
        printf("load listen_host error\n");
    } else {
        printf("load listen_host:%s\n", host);
    }
    free(host);

    path = bb_config_get_string_malloc("first_path");
    if (path == NULL) {
        printf("load first_path error\n");
    } else {
        printf("load first_path:%s\n", path);
    }
    free(path);

    char s_path[128];
    i = bb_config_get_string("second_path", s_path, 128);
    if (i < 0) {
        printf("load second_path error\n");
    } else {
        printf("load second_path:%s\n", s_path);
    }


    /* Int Load Usage */
    int port;
    i = bb_config_get_int("listen_port", &port);
    if (i < 0) {
        printf("load listen_port error\n");
    } else {
        printf("load listen_port:%d\n", port);
    }


    /* Config not exist */
    i = bb_config_get_int("test1", &port);
    if (i < 0) {
        printf("load test1 error\n");
    }

    path = bb_config_get_string_malloc("test2");
    if (path == NULL) {
        printf("load test2 error\n");
    }

    i = bb_config_get_string("test3", s_path, 128);
    if (i < 0) {
        printf("load test3 error\n");
    }

}
