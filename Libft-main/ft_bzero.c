
void ft_bzero(void *s, size_t n)
{
    char *s1;

    s1 = s;
   
    while(n > 0)
    {
        *s1 = 0;
        s1++;
		n--;
    }
}