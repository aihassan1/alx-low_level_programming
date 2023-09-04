#include "main.h"

/**
* read_textfile - reads a text file and prints
* it to the POSIX standard output
* @filename: name of the file to read
* @letters: number of letters it should read and print
*
* Return: actual number of letters it could read and print
*         0 if the file can not be opened or read, or if filename is NULL
*         0 if write fails or does not write the expected amount of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, size;
char *buffer = (char *) malloc(letters + 1);


if (buffer == NULL)
{
return (0);
}

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buffer);
return (0);
}

size = read(fd, buffer, letters);
if (size == -1)
{
free(buffer);
close(fd);
return (0);
}

if (write(STDOUT_FILENO, buffer, size) != size)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (size);

}
