#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* directives and libraries */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/* macro definitons */
#define BUFFER_SIZE 1024

/* function prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_message(int, ...);

#endif /* _HOLBERTON_H_ */
