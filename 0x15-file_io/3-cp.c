#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
* error_exit - prints error message and exits with a specific status
* @msg: error message to print
* @status: exit status
*/
void error_exit(const char *msg, int status)
{
dprintf(STDERR_FILENO, "%s\n", msg);
exit(status);
}

/**
* main - copies the content of a file to another file
* @ac: argument count
* @av: argument vector
*
* Return: 0 on success
*/
int main(int ac, char **av)
{
int fd_from, fd_to, len_read, len_written;
char buffer[1024];

if (ac != 3)
error_exit("Usage: cp file_from file_to", 97);

fd_from = open(av[1], O_RDONLY);
if (fd_from == -1)
error_exit("Error: Can't read from file", 98);

fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
error_exit("Error: Can't write to file", 99);

while ((len_read = read(fd_from, buffer, sizeof(buffer))) > 0)
{
len_written = write(fd_to, buffer, len_read);
if (len_written != len_read || len_written == -1)
error_exit("Error: Can't write to file", 99);
}

if (len_read == -1)
error_exit("Error: Can't read from file", 98);

if (close(fd_from) == -1 || close(fd_to) == -1)
error_exit("Error: Can't close fd", 100);

return (0);
}

