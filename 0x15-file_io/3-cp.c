#include "main.h"
#define BUFFER 1024

/**
 * cp - copies the content of a file to another file
 * @file_from: the source file
 * @file_to: the destination file
 *
 * Return: 0 on success, or one of the error codes on failure
 */
int cp(const char *file_from, const char *file_to)
{
  int fd_from, fd_to;
  ssize_t file_from_input;
  char *buffer = malloc(BUFFER);

  if (buffer == NULL)
    {
      perror("Error: Unable to allocate buffer");
      return 1;
    }

  fd_from = open(file_from, O_RDONLY);
  if (fd_from == -1)
    {
      perror("Error: Unable to open source file");
      free(buffer);
      return 1;
    }

  fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0644);
  if (fd_to == -1)
    {
      perror("Error: Unable to open destination file");
      close(fd_from);
      free(buffer);
      return 1;
    }

  while ((file_from_input = read(fd_from, buffer, BUFFER)) > 0)
    {
      if (write(fd_to, buffer, file_from_input) != file_from_input)
	{
	  perror("Error: Unable to write to destination file");
	  close(fd_from);
	  close(fd_to);
	  free(buffer);
	  return 1;
	}
    }

  if (file_from_input == -1)
    {
      perror("Error: Unable to read from source file");
      close(fd_from);
      close(fd_to);
      free(buffer);
      return 1;
    }

  close(fd_from);
  close(fd_to);
  free(buffer);

  return 0;
}

/**
 * main - entry point
 * @argc: the number of command-line arguments
 * @argv: the command-line arguments
 *
 * Return: 0 on success, or one of the error codes on failure
 */
int main(int argc, char *argv[])
{
  if (argc != 3)
    {
      fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
      return 1;
    }

  return cp(argv[1], argv[2]);
}
