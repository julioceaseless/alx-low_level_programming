#ifndef _MAIN_H_
#define _MAIN_H_

/* libraries */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/* prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
#endif
