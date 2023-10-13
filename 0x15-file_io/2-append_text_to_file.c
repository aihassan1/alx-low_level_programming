#include "main.h"
#include <string.h>

/**
* append_text_to_file - Appends text to the end of a file.
* @filename: The name of the file.
* @text_content: The text to add at the end of the file.
*
* Return: 1 on success and -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd, newtext;

if (filename == NULL)
{
return (-1);
}

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}

if (text_content != NULL)
{
newtext = write(fd, text_content, strlen(text_content));

if (newtext == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}