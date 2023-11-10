#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: name of the file
* @letters: number of letters to read and print
*
* Return: actual number of letters it could read and print
*         0 if file can't be opened or read, filename is NULL, or write fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t n;
int fd;
char *buf;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
close(fd);
return (0);
}

n = read(fd, buf, letters);
if (n == -1)
{
free(buf);
close(fd);
return (0);
}

n = write(STDOUT_FILENO, buf, n);
if (n == -1)
{
free(buf);
close(fd);
return (0);
}

free(buf);
close(fd);
return (n);
}

