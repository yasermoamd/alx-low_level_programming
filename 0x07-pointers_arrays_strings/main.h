#ifndef MAIN_H
#define MAIN_H

char *_memset(char *s, char b, int n);
char *_memcpy(char *dest, char *src, int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);

#endif

