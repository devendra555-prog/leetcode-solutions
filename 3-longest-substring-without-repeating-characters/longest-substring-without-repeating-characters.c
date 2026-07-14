#include <string.h>

int lengthOfLongestSubstring(char *s)
{
    int lastIndex[256];

    // Initialize all values to -1
    for (int i = 0; i < 256; i++)
    {
        lastIndex[i] = -1;
    }

    int maxLen = 0;
    int start = 0;

    for (int end = 0; s[end] != '\0'; end++)
    {
        if (lastIndex[(unsigned char)s[end]] >= start)
        {
            start = lastIndex[(unsigned char)s[end]] + 1;
        }

        lastIndex[(unsigned char)s[end]] = end;

        int len = end - start + 1;

        if (len > maxLen)
        {
            maxLen = len;
        }
    }

    return maxLen;
}