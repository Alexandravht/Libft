void *memcpy(void *dest, const void *src, size_t n)
{
    char *cdest;
    char *csrc;
    int i;

    *cdest = (char *)dest; // Typecast void en char
    *csrc = (char *)src; // Typecast void en char
    i = 0;

    while(cdest[i] != '\0' && n > 0)
    {
        cdest[i] = csrc[i];
        i++;
        n--; 
    }

    return(cdest);

    // Copier les donnees de src[] dans dest[]
}