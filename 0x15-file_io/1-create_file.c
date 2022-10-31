#include "main.h"

/**
 * create_file - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to text in a file
 * @text_content: number of letters
 * Return: the actual number of letters it could read and print
 */
int create_file(const char *filename, char *text_content);
{
int file, fwrite, i;

if (text_content == NULL)
text_content = "";
if (filename == NULL)
return (-1);

file = open(filename,  O_CREAT | O_TRUNC | O_WRONLY, 0600);
if (file == -1)
return (-1);
if (text_content != NULL)
{
for (i = 0; text_content[i]; i++)
;
fwrite = write(file, text_content, i);
if (fwrite == -1)
return (-1);
}
close(file);
return (1);
}
