#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>  /** Pour size_t */
#include <sys/types.h> /** Pour ssize_t */
#include <fcntl.h>  /** pour open */
#include <unistd.h> /** pour read, write et close */
#include <stdlib.h> /** pour malloc et free */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif

