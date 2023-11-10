#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void handle_error(int code, const char *file);

#endif /* MAIN_H */

