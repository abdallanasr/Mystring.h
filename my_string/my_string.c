#include <stdio.h>
#include <string.h>

#include "my_string.h"


int main()
{

}

void *my_memchr(const void *StrAddress, unsigned char c, unsigned int Length)
{
    unsigned char *TempStrAddress = (unsigned char *)StrAddress;
    unsigned char *RetValue = NULL;

    if(NULL == StrAddress)
    {
        printf("There is parameter equal NULL \n");
    }
    else
    {
        while(Length--)
        {
            if(*TempStrAddress == c)
            {
                RetValue = TempStrAddress;
                break;
            }
            else
            {
                TempStrAddress++;
            }
        }
    }

    return RetValue;
}

int my_memcmp(const void *FAddress, const void *SAddress, unsigned int Length)
{
    unsigned char *TempFAddress = FAddress;
    unsigned char *TempSAddress = SAddress;
    unsigned int RetValue = 0;

    if(NULL == FAddress || NULL == SAddress)
    {
        printf("There is parameter equal NULL \n");
    }
    else
    {
        if(FAddress == SAddress)
        {
            RetValue = 0;
        }
        else
        {
            while(Length--)
            {
                if(*TempFAddress != *TempSAddress)
                {
                    RetValue = (*TempFAddress < *TempSAddress) ? -1 : 1;
                    break;
                }
                else
                {
                    TempFAddress++;
                    TempSAddress++;
                }
            }

        }
    }

    return RetValue;
}

void *my_memcpy(void *DestAddress, const void *SrceAddress, unsigned int Length)
{
    unsigned char *TempDestAddress = DestAddress;
    unsigned char *TempSrceAddress = SrceAddress;

    if(NULL == DestAddress || NULL == SrceAddress)
    {
        printf("There is parameter equal NULL \n");
    }
    else
    {
        while (Length--)
        {
            *TempDestAddress = *TempSrceAddress;
            TempDestAddress++;
            TempSrceAddress++;
        }

    }

    return DestAddress;
}

void *my_memmove(void *DestAddress, const void *SrceAddress, unsigned int Length)
{
    unsigned char *TempDestAddress = DestAddress;
    unsigned char *TempSrceAddress = SrceAddress;

    if(NULL == DestAddress || NULL == SrceAddress)
    {
        printf("There is parameter equal NULL \n");
    }
    else
    {
        while (Length--)
        {
            *TempDestAddress++ = *TempSrceAddress++;
        }

    }

    return DestAddress;
}

void *my_memset(void *StartAddress, unsigned char Value, unsigned int Length)
{
    unsigned char *TempPtr = StartAddress;

    unsigned int counter = 0;

    if(NULL == StartAddress)
    {
        printf("There is parameter equal NULL \n");
    }
    else
    {
        while (Length--)
        {
            *TempPtr = Value;
            *TempPtr++;
        }
    }

    return StartAddress;
}

char *my_strcat(unsigned char *FAddress, const unsigned char *SAddress)
{
    unsigned char *TempFAddress = FAddress;
    unsigned char *TempSAddress = SAddress;

    if((NULL == FAddress) || (NULL == SAddress))
    {
        printf("There is parameter equal NULL \n");
    }
    else
    {
        while(*TempFAddress != '\0')
        {
            TempFAddress++;
        }
        while(*TempSAddress != '\0')
        {
           *TempFAddress = *TempSAddress;
            TempFAddress++;
            TempSAddress++;
        }

        *TempFAddress = '\0';

    }

    return FAddress;
}

char *my_strchr(const void *StrAddress, unsigned char c)
{
    unsigned char *TempStrAddress = (unsigned char *)StrAddress;
    unsigned char *RetValue = NULL;

    if(NULL == StrAddress)
    {
        printf("There is parameter equal NULL \n");
    }
    else
    {
        while(*TempStrAddress != '\0')
        {
            if(*TempStrAddress == c)
            {
                RetValue = TempStrAddress;
                break;
            }
            else
            {
                TempStrAddress++;
            }
        }

    }

    return RetValue;
}

int my_strcmp(const char *FAddress, const char *SAddress)
{
    unsigned char *TempFAddress = FAddress;
    unsigned char *TempSAddress = SAddress;
    int RetValue = 0;

    if(NULL == FAddress || NULL == SAddress)
    {
        printf("There is parameter equal NULL \n");
    }
    else
    {
        while (*TempFAddress != '\0' || *TempSAddress != '\0')
        {
            if(*TempFAddress == *TempSAddress)
            {
                RetValue = 0;
            }
            else if(*TempFAddress != *TempSAddress)
            {
                RetValue = (*TempFAddress < *TempSAddress) ? -1 : 1;
                break;
            }
            TempFAddress++;
            TempSAddress++;
        }
    }

    return RetValue;
}

char *my_strcpy(char  *DestAddress, const char *SrceAddress)
{
    unsigned char *TempDestAddress = DestAddress;
    unsigned char *TempSrceAddress = SrceAddress;

    if(NULL == DestAddress || NULL == SrceAddress)
    {
        printf("There is parameter equal NULL \n");
    }
    else
    {
        while (*TempSrceAddress != '\0')
        {
            *TempDestAddress = *TempSrceAddress;
            TempDestAddress++;
            TempSrceAddress++;
        }
        *TempDestAddress = '\0';
    }

    return DestAddress;
}

unsigned int my_strlen(const char *StrAddress)
{
    unsigned char *TempStrAddress = StrAddress;
    unsigned int Length = 0;
    if(NULL == StrAddress)
    {
        printf("NULL \n");
        return 0;
    }
    else
    {
        while(*TempStrAddress != '\0')
        {
            Length++;
            TempStrAddress++;
        }
    }
    return Length;
}

char *my_strncat(char *DestAddress, const char *SrcAddress, unsigned int Length)
{
    unsigned char *TempDestAddress = DestAddress;
    unsigned char *TempSrcAddress = SrcAddress;

    if((NULL == DestAddress) || (NULL == SrcAddress))
    {
        printf("There is parameter equal NULL \n");

    }
    else
    {
        while(*TempDestAddress != '\0')
        {
            TempDestAddress++;
        }
        while(Length--)
        {
            if(*TempSrcAddress != '\0')
            {
                *TempDestAddress = *TempSrcAddress;
                TempDestAddress++;
                TempSrcAddress++;
            }
            else
            {
                break;
            }
        }


        *TempDestAddress = '\0';

    }

    return DestAddress;
}

int my_strncmp(const char *FAddress, const char *SAddress, unsigned int Length)
{
    unsigned char *TempFAddress = FAddress;
    unsigned char *TempSAddress = SAddress;
    int RetValue = 0;

    if(NULL == FAddress || NULL == SAddress)
    {
        printf("There is parameter equal NULL \n");
    }
    else
    {

        while (Length-- && (*TempFAddress != '\0' || *TempSAddress != '\0'))
        {
            if(*TempFAddress == *TempSAddress)
            {
                RetValue = 0;
            }
            else if(*TempFAddress != *TempSAddress)
            {
                RetValue = (*TempFAddress < *TempSAddress) ? -1 : 1;
                break;
            }

            TempFAddress++;
            TempSAddress++;
        }


    }

    return RetValue;
}

void *my_strncpy(void *DestAddress, const void *SrceAddress, unsigned int Length)
{
    unsigned char *TempDestAddress = DestAddress;
    unsigned char *TempSrceAddress = SrceAddress;

    if(NULL == DestAddress || NULL == SrceAddress)
    {
        printf("There is parameter equal NULL \n");
    }
    else
    {
        while (Length-- && *TempSrceAddress != '\0')
        {
            *TempDestAddress = *TempSrceAddress;
            TempDestAddress++;
            TempSrceAddress++;
        }

        *TempDestAddress = '\0';

    }

    return DestAddress;
}

char *my_strpbrk(const char *FAddress, const char *SAddress)
{
    char *TempFAddress = FAddress;
    char *TempSAddress = SAddress;
    char *Ret_Value = NULL;

    if(NULL == FAddress || NULL == SAddress)
    {
        printf("There is parameter equal NULL \n");
    }
    else
    {
        for(TempFAddress = FAddress ; *TempFAddress != '\0' ; TempFAddress++)
        {
            for(TempSAddress = SAddress ; *TempSAddress != '\0' ; TempSAddress++)
            {
                if(*TempFAddress == *TempSAddress)
                {
                    Ret_Value = TempFAddress;
                    return Ret_Value;
                }
            }
        }
    }
    return Ret_Value;
}

char *my_strrchr(const void *StrAddress, unsigned char c)
{
    unsigned char *TempStrAddress = (unsigned char *)StrAddress;
    unsigned char *RetValue = NULL;
    unsigned int Length = 0;

    if(NULL == StrAddress)
    {
        printf("There is parameter equal NULL \n");
    }
    else
    {
        while (*TempStrAddress != '\0')
        {
            TempStrAddress++;
            Length++;
        }

        while(Length--)
        {
            if(*TempStrAddress == c)
            {
                RetValue = TempStrAddress;
                break;
            }
            else
            {
                TempStrAddress--;
            }
        }
        if(NULL == RetValue)
        {
            printf("The Character is not exist \n");
        }

    }

    return RetValue;
}

unsigned int my_strspn(const char *FAddress, const char *SAddress)
{
    const char *TempFAddress = FAddress;
    const char *TempSAddress = SAddress;

    unsigned int Length = 0;

    if(NULL == FAddress || NULL == SAddress)
    {
        printf("There is parameter equal NULL \n");
    }
    {
        while(*TempFAddress != '\0' && *TempSAddress != '\0')
        {
            if(*TempFAddress == *TempSAddress)
            {
                Length++;
            }
            TempFAddress++;
            TempSAddress++;
        }
    }

    return Length;
}

char *my_strstr(const char *haystack, const char *needle) {
    if (NULL == haystack || NULL == needle) {
        printf("There is a parameter equal to NULL\n");
    } else {
        while (*haystack != '\0') {
            const char *TempHaystack = haystack;
            const char *TempNeedle = needle;

            while (*TempNeedle != '\0' && *TempHaystack == *TempNeedle) {
                TempHaystack++;
                TempNeedle++;
            }

            if (*TempNeedle == '\0') {
                return (char *)needle;
            }

            haystack++;
        }
    }
    return NULL;
}

int my_strxfrm(char *FAddress, const char *SAddress, unsigned int Length)
{
    unsigned char *TempFAddress = FAddress;
    const unsigned char *TempSAddress = SAddress;
    unsigned int TempLength = 0;
    if(NULL == FAddress || NULL == SAddress)
    {
        printf("There is parameter equal NULL \n");
    }
    else
    {
        while (Length-- && *TempSAddress != '\0')
        {
            *TempFAddress++ = *TempSAddress++;
            TempLength++;
        }
        *TempFAddress = '\0';
    }

    return TempLength;
}

