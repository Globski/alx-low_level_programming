#ifndef MAIN_H
#define MAIN_H

/*
 * Description: Header file containing prototypes for all functions
 * used in the 0x15-file_io project.
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <elf.h>

#define BUFSIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(int code, const char *message, const char *file);
void close_files(int fileDesc_from, int fileDesc_to);

#endif /* MAIN_H */
