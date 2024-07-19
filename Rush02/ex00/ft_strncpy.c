
char *ft_strncpy(char *dest, const char *src, int n)
{
    char *original_dest;

    original_dest = dest;
    while (*src && n > 0)
    {
        *dest++ = *src++;
        n--;
    }
    while (n > 0)
    {
        *dest++ = '\0';
        n--;
    }
    return original_dest;
}
