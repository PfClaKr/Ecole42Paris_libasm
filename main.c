#include "libasm.h"

void		ft_check_write(void)
{
	printf("============================================\n");
	printf("================ Ft_write ==================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%zd]\n", ft_write(1, "Hello World !", 13));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n\n", write(1, "Hello World !", 13));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%zd]\n", ft_write(-7, "libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test", 271));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n\n", write(-7, "libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test", 271));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%zd]\n", ft_write(1, "", 1));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n\n", write(1, "", 1));

}

void		ft_check_read(void)
{
	ssize_t		ret_read;
	int			fd;	
	char		buf[5000];

	fd = open("ft_write.s", O_RDONLY);
	printf("============================================\n");
	printf("================= Ft_read ==================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	ret_read = ft_read(0, buf, 42);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n", buf, ret_read);
	printf("\033[36mresultat : libc\033[00m\n");
	ret_read = read(0, buf, 42);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n\n", buf, ret_read);
	printf("\033[36mresultat : libasm\033[00m\n");
	ret_read = 0;
	ret_read = ft_read(-7, buf, 2000);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n", buf, ret_read);
	close(fd);
	fd = open("ft_write.s", O_RDONLY);
	printf("\033[36mresultat : libc\033[00m\n");
	ret_read = 0;
	ret_read = read(-7, buf, 2000);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n\n", buf, ret_read);
	close(fd);
}

void		ft_check_strlen(void)
{
	printf("============================================\n");
	printf("================ Ft_strlen =================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("Hello word"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("Hello word"));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("a"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("a"));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("test"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("test"));
}

void		ft_check_strcmp(void)
{
	char	strcmp1[] = "";
	char	strcmp2[] = "Hello World !";
	printf("============================================\n");
	printf("================ Ft_strcmp =================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : [%d]\n", ft_strcmp("Hello", "Hello"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : [%d]\n\n", strcmp("Hello", "Hello"));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : [%d]\n", ft_strcmp("abcd", "abce"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : [%d]\n\n", strcmp("abcd", "abce"));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : [%d]\n", ft_strcmp(strcmp2, strcmp1));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : [%d]\n\n", strcmp(strcmp2, strcmp1));
}

void		ft_check_strcpy(void)
{
	char	str1[] = "Bonjour";
	char	str2[] = "Hello";
	char	str3[] = "libc most power full";
	char	str4[] = "libasm is for the ";
	char	str5[] = "petit";
	char	str6[] = "grand";
	char	str7[] = "";
	printf("============================================\n");
	printf("================ Ft_strcpy =================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str1, str2));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str1, str2));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str3, str4));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str3, str4));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str5, str6));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str5, str6));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str6, str7));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str6, str7));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str7, str6));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str7, str6));
}

void		ft_check_strdup(void)
{
	char	dup[] = "New Malloc";
	char	dup1[] = "little";
	char	dup2[] = "Very big malloc, libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test !";
	printf("============================================\n");
	printf("================ Ft_strdup =================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strdup(dup));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strdup(dup));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strdup(dup1));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strdup(dup1));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strdup(dup2));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strdup(dup2));
}

int			main(void)
{
	ft_check_write();
	ft_check_read();
	ft_check_strlen();
	ft_check_strcpy();
	ft_check_strcmp();
	ft_check_strdup();
	return (0);
}	

// void		ft_main_strlen(void)
// {
// 	printf("-------------------ft_strlen-------------------\n");
// 	printf("ft_strlen : \n");
// 	printf("%zd\n", ft_strlen("test12345"));
// 	printf("strlen : \n");
// 	printf("%zd\n", strlen("test12345"));
// 	printf("----------\n");
// 	printf("ft_strlen : \n");
// 	printf("%zd\n", ft_strlen("1"));
// 	printf("strlen : \n");
// 	printf("%zd\n", strlen("1"));
// 	printf("----------\n");
// 	printf("ft_strlen : \n");
// 	printf("%zd\n", ft_strlen("test"));
// 	printf("strlen : \n");
// 	printf("%zd\n", strlen("test"));
// 	printf("----------\n");
// 	printf("ft_strlen : \n");
// 	printf("%zd\n", ft_strlen(""));
// 	printf("strlen : \n");
// 	printf("%zd\n", strlen(""));
// 	printf("----------\n");
// 	printf("ft_strlen : \n");
// 	printf("%zd\n", ft_strlen("\n"));
// 	printf("strlen : \n");
// 	printf("%zd\n", strlen("\n"));
// 	printf("----------\n");
// 	printf("ft_strlen : \n");
// 	printf("%zd\n", ft_strlen("zzzzzzzzzzzzzzzzzzzzzzzz hey"));
// 	printf("strlen : \n");
// 	printf("%zd\n", strlen("zzzzzzzzzzzzzzzzzzzzzzzz hey"));
// }

// void		ft_main_strcpy(void)
// {
// 	char	str1[] = "COUCOU";
// 	char	str2[] = "HEY";
// 	char	str3[] = "weshhhh";
// 	char	str4[] = " ";
// 	char	str5[] = "lol";
// 	char	str6[] = "hih";
// 	char	str7[] = "mdr";
// 	printf("-------------------ft_strcpy-------------------\n");
// 	printf("ft_strcpy : \n");
// 	printf("%s\n", ft_strcpy(str1, str2));
// 	printf("strcpy : \n");
// 	printf("%s\n", strcpy(str1, str2));
// 	printf("----------\n");
// 	printf("ft_strcpy : \n");
// 	printf("%s\n", ft_strcpy(str3, str4));
// 	printf("strcpy : \n");
// 	printf("%s\n", strcpy(str3, str4));
// 	printf("----------\n");
// 	printf("ft_strcpy : \n");
// 	printf("%s\n", ft_strcpy(str5, str6));
// 	printf("strcpy : \n");
// 	printf("%s\n", strcpy(str5, str6));
// 	printf("----------\n");
// 	printf("ft_strcpy : \n");
// 	printf("%s\n", ft_strcpy(str6, str7));
// 	printf("strcpy : \n");
// 	printf("%s\n", strcpy(str6, str7));
// 	printf("----------\n");
// 	printf("ft_strcpy : \n");
// 	printf("%s\n", ft_strcpy(str7, str4));
// 	printf("strcpy : \n");
// 	printf("%s\n", strcpy(str7, str4));
// }

// void		ft_main_strdup(void)
// {
// 	printf("-------------------ft_strdup-------------------\n");
//     	printf("ft_strdup : \n");
// 	printf("%s\n", ft_strdup("test12345"));
//     	printf("strdup : \n");
// 	printf("%s\n", strdup("test12345"));
// 	printf("----------\n");
//     	printf("ft_strdup : \n");
// 	printf("%s\n", ft_strdup("a"));
//     	printf("strdup : \n");
// 	printf("%s\n", strdup("a"));
// 	printf("----------\n");
//     	printf("ft_strdup : \n");
// 	printf("%s\n", ft_strdup("test"));
//     	printf("strdup : \n");
// 	printf("%s\n", strdup("test"));
// 	printf("----------\n");
// 	printf("ft_strdup : \n");
// 	printf("%s\n", ft_strdup(""));
//     	printf("strdup : \n");
// 	printf("%s\n", strdup(""));
// 	printf("----------\n");
// 	printf("ft_strdup : \n");
// 	printf("%s\n", ft_strdup("\n"));
//     	printf("strdup : \n");
// 	printf("%s\n", strdup("\n"));
// 	printf("----------\n");
// 	printf("ft_strdup : \n");
// 	printf("%s\n", ft_strdup(""));
//     	printf("strdup : \n");
// 	printf("%s\n", strdup(""));
// 	printf("----------\n");
// 	printf("ft_strdup : \n");
// 	printf("%s\n", ft_strdup("abc"));
//     	printf("strdup : \n");
// 	printf("%s\n", strdup("abc"));
// 	printf("----------\n");
// 	printf("ft_strdup : \n");
// 	printf("%s\n", ft_strdup("asl;fjl;asdjfjkasdl;fjadjsf"));
//     	printf("strdup : \n");
// 	printf("%s\n", strdup("asl;fjl;asdjfjkasdl;fjadjsf"));
// 	printf("----------\n");
// 	printf("ft_strdup : \n");
// 	printf("%s\n", ft_strdup("yope\0la"));
//     	printf("strdup : \n");
// 	printf("%s\n", strdup("yope\0la"));
// 	printf("----------\n");
// 	printf("ft_strdup : \n");
// 	printf("%s\n", ft_strdup("Lorem ipsum dolor sit amet, consectetur adipiscingelit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquambibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Crasvolutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisifelis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellusac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posueretortor, sit amet consequat amet."));
//     	printf("strdup : \n");
// 	printf("%s\n", strdup("Lorem ipsum dolor sit amet, consectetur adipiscingelit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquambibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Crasvolutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisifelis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellusac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posueretortor, sit amet consequat amet."));


// }

// void		ft_main_strcmp(void)
// {
// 	printf("-------------------ft_strcmp-------------------\n");
// 	printf("ft_strcmp : \n");
// 	printf("%d\n", ft_strcmp("", "coucouu"));
// 	printf("strcmp : \n");
// 	printf("%d\n", strcmp("", "coucouu"));
// 	printf("----------\n");
// 	printf("ft_strcmp : \n");
// 	printf("%d\n", ft_strcmp("lol", "coucouu"));
// 	printf("strcmp : \n");
// 	printf("%d\n", strcmp("lol", "coucouu"));
// 	printf("----------\n");
// 	printf("ft_strcmp : \n");
// 	printf("%d\n", ft_strcmp("hohohoho", "coucouu"));
// 	printf("strcmp : \n");
// 	printf("%d\n", strcmp("hohohoho", "coucouu"));
// 	printf("----------\n");
// 	printf("ft_strcmp : \n");
// 	printf("%d\n", ft_strcmp("", "bonjour"));
// 	printf("strcmp : \n");
// 	printf("%d\n", strcmp("", "bonjour"));
// 	printf("----------\n");
// 	printf("ft_strcmp : \n");
// 	printf("%d\n", ft_strcmp("bonjour", "bonjour"));
// 	printf("strcmp : \n");
// 	printf("%d\n", strcmp("bonjour", "bonjour"));
// }

// #ifdef __linux__
// #define OPEN_MAX FOPEN_MAX
// #endif

// void		ft_main_write(void)
// {
// 	int tmp[2];
// 	printf("-------------------ft_write-------------------\n");
//  	printf("ft_write : \n");
// 	printf("\nreturn = %zd\n", ft_write(0, "coucou", 6));
//  	printf("write : \n");
// 	printf("\nreturn = %zd\n", write(0, "coucou", 6));
// 	printf("----------\n");
// 	printf("ft_write : \n");
// 	printf("\nreturn = %zd\n", ft_write(0, "test", 2));
//  	printf("write : \n");
// 	printf("\nreturn = %zd\n", write(0, "test", 2));
// 	printf("----------\n");
// 	printf("ft_write : \n");
// 	printf("\nreturn = %zd\n", ft_write(0, "test", 1));
//  	printf("write : \n");
// 	printf("\nreturn = %zd\n", write(0, "test", 1));
// 	printf("----------\n");
// 	printf("ft_write : \n");
// 	printf("\nreturn = %zd\n", ft_write(1, "yeslolol", 9));
//  	printf("write : \n");
// 	printf("\nreturn = %zd\n", write(1, "yeslolol", 9));
// 	printf("----------\n");
// 	printf("ft_write : \n");
// 	printf("\nreturn = %zd\n", ft_write(300, "yeslolol", 9));
//  	printf("errno : %d\n", errno);
// 	printf("write : \n");
// 	errno = 0;
// 	printf("\nreturn = %zd\n", write(300, "yeslolol", 9));
//  	printf("errno : %d\n", errno);
// 	printf("----------\n");
// 	printf("ft_write : \n");
// 	printf("\nreturn = %zd\n", ft_write(1, NULL, 9));
//  	printf("errno : %d\n", errno);
// 	errno = 0;
//  	printf("write : \n");
// 	printf("\nreturn = %zd\n", write(1, NULL, 9));
//  	printf("errno : %d\n", errno);
// 	printf("----------\n");
// 	printf("ft_write : \n");
// 	printf("\nreturn = %zd\n", ft_write(-1, "test", 5));
//  	printf("errno : %d\n", errno);
// 	errno = 0;
//  	printf("write : \n");
// 	printf("\nreturn = %zd\n", write(-1, "test", 5));
//  	printf("errno : %d\n", errno);
// 	printf("----------\n");
// 	printf("ft_write : \n");
// 	printf("\nreturn = %zd\n", ft_write(tmp[1], NULL, 5));
//  	printf("errno : %d\n", errno);
// 	errno = 0;
//  	printf("write : \n");
// 	printf("\nreturn = %zd\n", write(tmp[1], NULL, 5));
//  	printf("errno : %d\n", errno);
// 	printf("----------\n");
// 	printf("ft_write : \n");
// 	printf("\nreturn = %zd\n", ft_write(-1, "tt", 2));
//  	printf("errno : %d\n", errno);
// 	errno = 0;
//  	printf("write : \n");
// 	printf("\nreturn = %zd\n", write(-1, "tt", 2));
//  	printf("errno : %d\n", errno);
// 	printf("----------\n");
// 	printf("ft_write : \n");
// 	printf("\nreturn = %zd\n", ft_write(OPEN_MAX + 1, "tt", 2));
//  	printf("errno : %d\n", errno);
// 	errno = 0;
//  	printf("write : \n");
// 	printf("\nreturn = %zd\n", write(OPEN_MAX + 1, "tt", 2));
//  	printf("errno : %d\n", errno);
// }

// void		ft_main_read(void)
// {
//     printf("-------------------ft_read-------------------\n");
//     char		buff[100];
//     int         fd;
//     ssize_t     ret;

// 	printf("ft_read : \n");   
//     	fd = open("test.txt", O_RDONLY);
//     	ret = ft_read(fd, buff, 10);
//     	buff[ret] = '\0';
// 	printf("buff = %sret = %zd\n", buff, ret);
// 	close(fd);

// 	printf("read : \n");
// 	fd = open("test.txt", O_RDONLY);
// 	ret = read(fd, buff, 10);
// 	buff[ret] = '\0';
// 	printf("buff = %sret = %zd\n", buff, ret);
//     	close(fd);
// 	printf("----------\n");
// 	printf("ft_read : \n");
//     	fd = open("lol.txt", O_RDONLY);
//     	ret = ft_read(fd, buff, 10);
//  	printf("errno : %d\n", errno);
//     	buff[ret] = '\0';
// 	printf("buff = %sret = %zd\n", buff, ret);
// 	close(fd);

// 	errno = 0;
// 	printf("read : \n");
// 	fd = open("lol.txt", O_RDONLY);
// 	ret = read(fd, buff, 10);
//  	printf("errno : %d\n", errno);
// 	buff[ret] = '\0';
// 	printf("buff = %sret = %zd\n", buff, ret);
//     	close(fd);
// 	printf("----------\n");
// 	char	buf_read[2048];
// 	int tmp[2];

// 	printf("ft_read : \n");
//     	ret = ft_read(-1, buf_read, 2);
//  	printf("errno : %d\n", errno);
// 	printf("buf: %s, ret = %zd\n", buf_read, ret);
// 	close(fd);
// 	errno = 0;
// 	printf("read : \n");
// 	ret = read(-1, buf_read, 2);
//  	printf("errno : %d\n", errno);
// 	printf("buf: %s, ret = %zd\n", buf_read, ret);
// 	printf("----------\n");
// 	printf("ft_read : \n");
//     	ret = ft_read(tmp[0], NULL, 2);
//  	printf("errno : %d\n", errno);
// 	printf("buf: %s, ret = %zd\n", buf_read, ret);
// 	close(fd);
// 	errno = 0;
// 	printf("read : \n");
// 	ret = read(tmp[0], NULL, 2);
//  	printf("errno : %d\n", errno);
// 	printf("buf: %s, ret = %zd\n", buf_read, ret);
// 	printf("----------\n");
// 	printf("ft_read : \n");
//     	ret = ft_read(OPEN_MAX + 1, buf_read, 2);
//  	printf("errno : %d\n", errno);
// 	printf("buf: %s, ret = %zd\n", buf_read, ret);
// 	close(fd);
// 	errno = 0;
// 	printf("read : \n");
// 	ret = read(OPEN_MAX + 1, buf_read, 2);
//  	printf("errno : %d\n", errno);
// 	printf("buf: %s, ret = %zd\n", buf_read, ret);
// }

// int     main()
// {
// 	ft_main_strlen();
// 	ft_main_strcpy();
// 	ft_main_strcmp();
//     ft_main_write();
// 	ft_main_read();
// 	ft_main_strdup();
// }