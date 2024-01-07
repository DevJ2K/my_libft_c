/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tajavon <tajavon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:49:09 by tajavon           #+#    #+#             */
/*   Updated: 2024/01/07 22:18:00 by tajavon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/// @brief The ft_atoi() function converts the initial portion of the string
/// pointed to by str to int representation.
/// @param str The string you want to convert to int.
/// @return The string convert to int.
int		ft_atoi(const char *str);

/// @brief The ft_bzero() function writes n zero bytes to the string s.
/// If n is zero, ft_bzero() does nothing.
/// @param s The pointer to the memory of the string.
/// @param n The number of zero you want to write to the string s.
void	ft_bzero(void *s, size_t n);

/// @brief The ft_calloc() function allocates enough space
/// for count objects that are size bytes of memory each and returns
/// a pointer to the allocated memory. The allocated memory is filled
/// with bytes of value zero.
/// @param nmemb The number of elements of your allocatio.
/// @param size The sizeof() each element.
/// @return The pointer to the allocated memory. NULL if memory allocation fails
/// or size is equal to 0.
void	*ft_calloc(size_t nmemb, size_t size);

/// @brief Check if a character is a letter or a number.
/// @param c The character you want to check.
/// @return 1 if is a letter or a number, otherwise 0
int		ft_isalnum(int c);

/// @brief Check if a character is a letter.
/// @param c The character you want to check.
/// @return 1 if is a letter, otherwise 0
int		ft_isalpha(int c);

/// @brief Check if a character is an ascii.
/// @param c The character you want to check.
/// @return 1 if is an ascii, otherwise 0
int		ft_isascii(int c);

/// @brief Check if a character is a digit.
/// @param c The character you want to check.
/// @return 1 if is a digit, otherwise 0
int		ft_isdigit(int c);

/// @brief Check if a character is a printable.
/// @param c The character you want to check.
/// @return 1 if is a printable, otherwise 0
int		ft_isprint(int c);

/// @brief The ft_itoa() function constructs a string representation
/// of an integer.
/// @param n Is the integer to be converted to string representation.
/// @return The function ft_itoa() returns the value string.
/// NULL is memory allocation fails.
char	*ft_itoa(int n);

/// @brief The ft_memchr() function locates the first occurrence of c
/// (converted to an unsigned char) in string s.
/// @param s The pointer to the string.
/// @param c The character you want to locate.
/// @param n The n bytes you will check.
/// @return The ft_memchr() function returns a pointer to the byte located,
/// or NULL if no such byte exists within n bytes.
void	*ft_memchr(const void *s, int c, size_t n);

/// @brief The ft_memcmp() function compares byte string s1 against byte
/// string s2.
/// Both strings are assumed to be n bytes long.
/// @param s1 The string you want to compare against the s2.
/// @param s2 The string you want to compare against the s1.
/// @param n The n bytes you want to compare.
/// @return The ft_memcmp() returns zero if the two strings are identical.
/// Otherwise returns a negative number if s2 is greater than s1 or a positive
/// number if s1 is greater than s2.
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/// @brief The memcpy() function copies n bytes from memory area
/// src to memory area dst. If dst and src overlap, behavior is undefined.
/// @param dest The dest of the copie.
/// @param src The source of the copie.
/// @param n The n bytes you want to copie.
/// @return The memcpy() function returns the original value of dst.
void	*ft_memcpy(void *dest, const void *src, size_t n);

/// @brief The memmove() function copies len bytes from string src to
/// string dst.
/// The two strings may overlap; the copy is always done in a non-destructive
/// manner.
/// @param dest The dest of the copie.
/// @param src The source of the copie.
/// @param n The n bytes you want to copie.
/// @return The memmove() function returns the original value of dst.
void	*ft_memmove(void *dest, const void *src, size_t n);

/// @brief The memset() function writes n bytes of value c
/// (converted to an unsigned char) to the string c.
/// @param s The string you want to fill.
/// @param c The character you want to set.
/// @param n The n bytes you want to set.
/// @return The memset() function returns its first argument.
void	*ft_memset(void *s, int c, size_t n);

/// @brief The function writes a character in a file descriptor.
/// @param c The character you want to write.
/// @param fd The file descriptor.
void	ft_putchar_fd(char c, int fd);

/// @brief The function writes a string with a newline at the end
/// in a file descriptor.
/// @param s The string you want to write.
/// @param fd The file descriptor.
void	ft_putendl_fd(char *s, int fd);

/// @brief The function writes a number in a file descriptor.
/// @param n The number you want to write.
/// @param fd The file descriptor.
void	ft_putnbr_fd(int n, int fd);

/// @brief The function writes a string in a file descriptor.
/// @param c The string you want to write.
/// @param fd The file descriptor.
void	ft_putstr_fd(char *s, int fd);

/// @brief Allocates (with malloc(3)) and returns an array
/// of strings obtained by splitting ’s’ using the
/// character ’c’ as a delimiter. The array must end
/// with a NULL pointer.
/// @param s The string to be split.
/// @param c The delimiter character.
/// @return The array of new strings resulting from the split.
/// NULL if the allocation fails.
char	**ft_split(char const *s, char c);

/// @brief The ft_strchr() function locates the first occurrence of c
/// (converted to a char) in the string pointed to by s.  The terminating
/// null character is considered to be part of the string; therefore if c
/// is ‘\0’, the functions locate the terminating ‘\0’.
/// @param s The string you want to check.
/// @param c The character you want to locate.
/// @return The ft_strchr() function returns a pointer to the byte located,
/// or NULL if no such byte exists within n bytes.
char	*ft_strchr(const char *s, int c);

/// @brief The ft_strdup() function allocates sufficient memory for a
/// copy of the string s, does the copy, and returns a pointer to it.
/// @param s The string you want to copie.
/// @return A pointer to the string.
char	*ft_strdup(const char *s);

/// @brief Applies the function ’f’ on each character of
/// the string passed as argument, passing its index
/// as first argument. Each character is passed by
/// address to ’f’ to be modified if necessary.
/// @param s The string on which to iterate.
/// @param f The function to apply to each character.
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/// @brief Allocates (with malloc(3)) and returns a new
/// string, which is the result of the concatenation
/// of ’s1’ and ’s2’.
/// @param s1 The prefix string.
/// @param s2 The suffix string.
/// @return The new string. NULL if the allocation fails.
char	*ft_strjoin(char const *s1, char const *s2);

/// @brief The ft_strncat() function append a copy of the null-terminated
/// string src to the end of the null-terminated string dest, then add
/// a terminating ‘\0’.  The string dest must have sufficient space
/// to hold the result. The ft_strncat() function appends not more than
/// nb characters from src, and then adds a terminating ‘\0’.
/// @param dest The destination of the concatenation.
/// @param src The source string.
/// @param nb The nb char you wants to add from src
/// @return The strncat() functions return the pointer dest.
char	*ft_strncat(char *dest, char *src, size_t nb);

/// @brief strlcat() appends string src to the end of dst. It will
/// append at most dstsize - strlen(dst) - 1 characters.  It will then
/// NUL-terminate, unless dstsize is 0 or the original dst string was longer
/// than dstsize (in practice this should not happen as it means that either
/// dstsize is incorrect or that dst is not a proper string).
/// @param dst The destination of the concatenation.
/// @param src The source string.
/// @param size The full size of destination buffer.
/// @return The size of concatenation.
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/// @brief The ft_strcpy() functions copy the string src to dst.
/// @param dest The destination of the copie.
/// @param src The source of the copie
/// @return The destination.
char	*ft_strcpy(char *dest, char *src);

/// @brief strlcpy() copies up to dstsize - 1 characters from the string
/// src to dst, NUL-terminating the result if dstsize is not 0.
/// @param dest The destination of the copie.
/// @param src The source string.
/// @param size The full size of destination buffer.
/// @return The len of src.
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

/// @brief The length of the string.
/// @param s The string you want to get length.
/// @return The length of the string.
size_t	ft_strlen(const char *s);

/// @brief Applies the function ’f’ to each character of the
/// string ’s’, and passing its index as first argument
/// to create a new string (with malloc(3)) resulting
/// from successive applications of ’f’.
/// @param s The string on which to iterate.
/// @param f The function to apply to each character.
/// @return The string created from the successive applications of ’f’.
/// Returns NULL if the allocation fails.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/// @brief ft_strncmp() functions lexicographically compare the
/// null-terminated strings s1 and s2. The ft_strncmp() function
/// compares not more than n characters
/// @param s1 The first string to compare.
/// @param s2 The second string to compare.
/// @param n The number of characters you wants to compare.
/// @return The ft_strncmp() functions return an integer greater than,
/// equal to, or less than 0, according as the string s1 is greater
/// than, equal to, or less than the string s2.
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/// @brief The strnstr() function locates the first occurrence of the
/// null-terminated string s2 in the string s1, where not more than
/// len characters are searched.
/// @param s1 The initial string.
/// @param s2 The string you want to search in.
/// @param n The n bytes you want to try.
/// @return If s2 is an empty string, s1 is returned; if s2 occurs
/// nowhere in s1, NULL is returned; otherwise a pointer to the first
/// character of the first occurrence of s2 is returned.
char	*ft_strnstr(const char *s1, const char *s2, size_t n);

/// @brief The ft_strrchr() function is identical to ft_strchr(),
/// except it locates the last occurrence of c.
/// @param s The string you want to check.
/// @param c The character you want to locate.
/// @return The ft_strrchr() function returns a pointer to the byte located,
/// or NULL if no such byte exists within n bytes.
char	*ft_strrchr(const char *s, int c);

/// @brief Allocates (with malloc(3)) and returns a copy of
/// ’s1’ with the characters specified in ’set’ removed
/// from the beginning and the end of the string.
/// @param s1  The string to be trimmed.
/// @param set The reference set of characters to trim.
/// @return The trimmed string. NULL if the allocation fails.
char	*ft_strtrim(char const *s1, char const *set);

/// @brief Allocates (with malloc(3)) and returns a substring from the
/// string ’s’. The substring begins at index ’start’ and is of maximum
/// size ’len’.
/// @param s The string from which to create the substring.
/// @param start The start index of the substring in the string ’s’.
/// @param len The maximum length of the substring.
/// @return The substring. NULL if the allocation fails.
char	*ft_substr(char const *s, unsigned int start, size_t len);

/// @brief The ft_tolower() function converts an upper-case letter
/// to the corresponding lower-case letter.
/// @param c The character you want to convert.
/// @return If the argument is an upper-case letter, the tolower()
/// function returns the corresponding lower-case letter if there
/// is one; otherwise, the argument is returned unchanged.
int		ft_tolower(int c);

/// @brief The ft_toupper() function converts an lower-case letter
/// to the corresponding lower-case letter.
/// @param c The character you want to convert.
/// @return If the argument is an lower-case letter, the toupper()
/// function returns the corresponding upper-case letter if there
/// is one; otherwise, the argument is returned unchanged.
int		ft_toupper(int c);

/// @brief Allocates (with malloc(3)) and returns a new node.
/// The member variable ’content’ is initialized with
/// the value of the parameter ’content’. The variable
/// ’next’ is initialized to NULL.
/// @param content  The content to create the node with.
/// @return The new node.
t_list	*ft_lstnew(void *content);

/// @brief Adds the node ’new’ at the beginning of the list.
/// @param lst The address of a pointer to the first link of a list.
/// @param new The address of a pointer to the node to be added to the list.
void	ft_lstadd_front(t_list **lst, t_list *new);

/// @brief Counts the number of nodes in a list.
/// @param lst The beginning of the list.
/// @return The length of the list.
int		ft_lstsize(t_list *lst);

/// @brief Returns the last node of the list.
/// @param lst The beginning of the list.
/// @return Last node of the list.
t_list	*ft_lstlast(t_list *lst);

/// @brief Adds the node ’new’ at the end of the list.
/// @param lst The address of a pointer to the first link of a list.
/// @param new The address of a pointer to the node to be added to the list.
void	ft_lstadd_back(t_list **lst, t_list *new);

/// @brief Takes as a parameter a node and frees the memory of
/// the node’s content using the function ’del’ given
/// as a parameter and free the node. The memory of
/// ’next’ must not be freed.
/// @param lst The node to free.
/// @param del The address of the function used to delete the content.
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/// @brief Deletes and frees the given node and every
/// successor of that node, using the function ’del’ and free(3).
/// Finally, the pointer to the list must be set to NULL.
/// @param lst The address of a pointer to a node.
/// @param del The address of the function used to delete the content
/// of the node.
void	ft_lstclear(t_list **lst, void (*del)(void *));

/// @brief Iterates the list ’lst’ and applies the function
/// ’f’ on the content of each node.
/// @param lst The address of a pointer to a node.
/// @param f  The address of the function used to iterate on the list.
void	ft_lstiter(t_list *lst, void (*f)(void *));

/// @brief Iterates the list ’lst’ and applies the function
/// ’f’ on the content of each node. Creates a new
/// list resulting of the successive applications of
/// the function ’f’. The ’del’ function is used to
/// delete the content of a node if needed.
/// @param lst The address of a pointer to a node.
/// @param f The address of the function used to iterate on the list.
/// @param del The address of the function used to delete the content
/// of a node if needed.
/// @return The new list. NULL if the allocation fails.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/// @brief Write a function that returns a line read from a
/// file descriptor
/// @param fd The file descriptor to read from
/// @return Read line in correct behavior or
/// NULL if there is nothing else to read, or an error
/// occurred
char	*get_next_line(int fd);

/// @brief Displays error and exits with the errnum you given.
/// @param str The error message you want to display.
/// @param errnum The error number of your error.
void	ft_error(char *str, int errnum);

/// @brief The ft_open() functions use open(), but handle errors.
/// or returns the file descriptor.
/// @param path The path to the file you want to open.
/// @param methods The methods you want to use to open.
/// [r: read | w: write | a: append]
/// @return The file descriptor of the filepath.
int		ft_open(char *path, char methods);

#endif
