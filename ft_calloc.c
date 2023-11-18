void *ft_calloc(size_t nmemb, size_t size)
{
    // nmemb permet d'indiquer le nombre de bloc de memoire a allouer
    // size permet d'indiquer la taille du bloc de memoire a allouer

    int ptr;
    int calloc;
    int i;

    ptr = (int *)malloc(sizeof(size));
    i = 0;

    while(nmemb >= i)
    {
        calloc = ptr * nmemb;
        i++;
    }
    

    // on creer nmemb blocs de memoire de meme taille
    // in initialise tous les octets a 0
}