#include <sys/types.h>
#ifndef MAIN_h
#define MAIN_h

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
void print_error_and_exit(const char *error_message);

#endif
