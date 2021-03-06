#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>

/*		Writing		*/
void	ft_putchar(char c);
void	ft_putstr(char const *s);

void	ft_putstr_fd(char const *s, int fd);


/*		String		*/
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strnlen(const char *s, size_t maxlen);
char	*ft_strcat(char s1, const char s2);
char	*ft_strncat(char s1, const char s2, size_t n);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(const *dst, const char *src, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_strndup(const char *s1, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);



/*		Memory		*/
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void src, size_t n);
void	*ft_memccpy(void dst, const void src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);




/*		Memory		*/




#endif
