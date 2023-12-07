// partie 1
int ft_isalpha (int c);
int ft_isdigit (int c);
int ft_isalnum (int c);
int ft_isascii (int c);
int ft_isprint (int c);

int ft_tolower(int c);
int ft_toupper (int c);

int ft_atoi (char *str);

void bzero(void *s, size_t n);

void *calloc(size_t count, size_t size);
char *strdup(const char *s1);

void *memcpy(void *restrict dst, const void *restrict src, size_t n);
void *memmove(void *dst, const void *src, size_t len);
void *memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void *memset(void *b, int c, size_t len);

int ft_strlen (char *str);
char *strstr(const char *haystack, const char *needle);
size_t strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
char *strrchr(const char *s, int c);
char *strchr(const char *s, int c);
char *strnstr(const char *haystack, const char *needle, size_t len);

// partie 2
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);