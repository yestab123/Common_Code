#ifndef _HEAD_CONFIG_
#define _HEAD_CONFIG_

#include <stdio.h>

int   bb_config_load(char *conf_file_path);
int   bb_config_get_string(char *key, char *value, int length);
int   bb_config_get_int(char *key, int *value);
char *bb_config_get_string_malloc(char *key);

#define log(...)   do {                        \
        printf(__VA_ARGS__);                    \
        printf("\n");                           \
    } while(0)

#endif
