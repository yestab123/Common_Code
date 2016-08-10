Config_load_function
============
Loading config file


Function
===========
int bb_config_load(char *conf_file);
-------------
First call function, if success return 0

int bb_config_get_string(char *key, char *value, int value_length);
-------------
Get string value from config, value need to allocate a buffer first.
If success return 0

char *bb_config_get_string_malloc(char *key);
-------------
Get string value from config.This function will use malloc() to allocate a buffer to save the value.
If success return the pointer point to the value.Else return NULL.

int bb_config_get_int(char *key, int *value);
-------------
Get Int value from config.
If success return 0
