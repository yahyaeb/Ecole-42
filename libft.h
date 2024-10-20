#include <stdlib.h>
#include <unistd.h>

typedef struct s_list {
    void *content;    
    struct s_list *next;
} t_list;
int	ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
int	ft_strlen(char *str);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	ft_memset(void *s, int c, size_t n);
int	str_len(char *str);
void	ft_putchar(char c);
void	to_upper(char *str);
void	to_lower(char *str);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void	ft_putnbr(int nb, int fd);
char* ft_itoa(int num);
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *restrict dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *restrict dst, const char *src, size_t dstsize);
char * ft_strjoin(char const *s1, char const *s2);
char *ft_strchr(const char *str, int c);
char *ft_strtrim(const char *s1, const char *set);
char	*ft_strncpy(char *dest, const char *src, size_t n);
int ft_wordcount(char const *s, char c);
char **ft_split(char const *s, char c);
int ft_wordsize(char const *str, char c);
t_list *ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void*));
void ft_lstclear(t_list **lst, void (*del)(void*));
void ft_lstiter(t_list *lst, void (*f)(void *));