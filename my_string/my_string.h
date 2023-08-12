#ifndef _MY_STRING_H_
#define _MY_STRING_H_

void *my_memchr(const void *StrAddress, unsigned char c, unsigned int Length);
int my_memcmp(const void *FAddress, const void *SAddress, unsigned int Length);
void *my_memcpy(void *DestAddress, const void *SrceAddress, unsigned int Length);
void *my_memmove(void *DestAddress, const void *SrceAddress, unsigned int Length);
void *my_memset(void *StartAddress, unsigned char Value, unsigned int Length);
char *my_strcat(unsigned char *FAddress, const unsigned char *SAddress);
char *my_strchr(const void *StrAddress, unsigned char c);
int my_strcmp(const char *str1, const char *str2);
char *my_strcpy(char  *DestAddress, const char *SrceAddress);
unsigned int my_strlen(const char *StrAddress);
char *my_strncat(char *DestAddress, const char *SrcAddress, unsigned int Length);
int my_strncmp(const char *FAddress, const char *SAddress, unsigned int Length);
void *my_strncpy(void *DestAddress, const void *SrceAddress, unsigned int Length);
char *my_strpbrk(const char *FAddress, const char *SAddress);
char *my_strrchr(const void *StrAddress, unsigned char c);
unsigned int my_strspn(const char *FAddress, const char *SAddress);
char *my_strstr(const char *haystack, const char *needle);
int my_strxfrm(char *FAddress, const char *SAddress, unsigned int Length);



#endif _MY_STRING_H_
