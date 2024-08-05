#include "libasm.h"

void check_write(void)
{
	int fd;

	fd = open("test_write", O_RDWR);
	printf("============================================\n");
	printf("================ Ft_write ==================\n");
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%zd]\n", ft_write(1, "Hello World !", 13));
	printf("errno : %d\n", errno);
	errno = 0;
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n", write(1, "Hello World !", 13));
	printf("errno : %d\n", errno);
	errno = 0;
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%zd]\n", ft_write(-7, "libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test\n", 267));
	printf("errno : %d\n", errno);
	errno = 0;
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n", write(-7, "libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test\n", 267));
	printf("errno : %d\n", errno);
	errno = 0;
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%zd]\n", ft_write(fd, "libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test\n", 268));
	printf("errno : %d\n", errno);
	errno = 0;
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n", write(fd, "libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test\n", 268));
	printf("errno : %d\n", errno);
	errno = 0;
	close(fd);
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%zd]\n", ft_write(1, "ychun42", 7));
	printf("errno : %d\n", errno);
	errno = 0;
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n", write(1, "ychun42", 7));
	printf("errno : %d\n", errno);
	errno = 0;
}

void check_read(void)
{
	ssize_t ret_read;
	int fd;
	char buf[5000];
	off_t	offset = 0;

	fd = open("test_write", O_RDONLY);
	printf("============================================\n");
	printf("================= Ft_read ==================\n");
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	ret_read = ft_read(fd, buf, 42);
	buf[ret_read] = '\0';
	printf("%s\nreturn : [%zd]\n", buf, ret_read);
	printf("errno : %d\n", errno);
	errno = 0;
	lseek(fd, offset, SEEK_SET);
	printf("\033[36mresultat : libc\033[00m\n");
	ret_read = read(fd, buf, 42);
	buf[ret_read] = '\0';
	printf("%s\nreturn : [%zd]\n", buf, ret_read);
	printf("errno : %d\n", errno);
	errno = 0;
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	ret_read = 0;
	ret_read = ft_read(-7, buf, 2000);
	buf[ret_read] = '\0';
	printf("%s\nreturn : [%zd]\n", buf, ret_read);
	printf("errno : %d\n", errno);
	errno = 0;
	close(fd);
	printf("\033[36mresultat : libc\033[00m\n");
	ret_read = 0;
	ret_read = read(-7, buf, 2000);
	buf[ret_read] = '\0';
	printf("%s\nreturn : [%zd]\n", buf, ret_read);
	printf("errno : %d\n", errno);
	errno = 0;
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	ret_read = 0;
	ret_read = ft_read(0, buf, 2000);
	buf[ret_read] = '\0';
	printf("%sreturn : [%zd]\n", buf, ret_read);
	printf("errno : %d\n", errno);
	errno = 0;
	printf("\033[36mresultat : libc\033[00m\n");
	ret_read = 0;
	ret_read = read(0, buf, 2000);
	buf[ret_read] = '\0';
	printf("%sreturn : [%zd]\n", buf, ret_read);
	printf("errno : %d\n", errno);
	errno = 0;
}

void check_strlen(void)
{
	printf("============================================\n");
	printf("================ Ft_strlen =================\n");
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n", strlen("Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word,Hello word"));
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen(""));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n", strlen(""));
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("test"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n", strlen("test"));
}

void check_strcpy(void)
{
	char str1[] = "Bonjour";
	char str2[] = "Hello";
	char str3[] = "je suis yugeon";
	char str4[] = "libasm is for the ";
	char str5[] = "petit";
	char str6[] = "grand";
	char str7[] = "";
	printf("============================================\n");
	printf("================ Ft_strcpy =================\n");
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str1, str2));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n", strcpy(str1, str2));
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str3, str4));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n", strcpy(str3, str4));
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str5, str6));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n", strcpy(str5, str6));
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str6, str7));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n", strcpy(str6, str7));
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str7, str6));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n", strcpy(str7, str6));
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str7, ""));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n", strcpy(str7, ""));
}

void check_strcmp(void)
{
	char strcmp1[] = "";
	char strcmp2[] = "Hello World !";
	char strcmp3[] = "ychun42";
	char strcmp4[] = "abcd";
	char strcmp5[] = "a";
	printf("============================================\n");
	printf("================ Ft_strcmp =================\n");
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : [%d]\n", ft_strcmp(strcmp3, strcmp3));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : [%d]\n", strcmp(strcmp3, strcmp3));
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : [%d]\n", ft_strcmp(strcmp1, strcmp4));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : [%d]\n", strcmp(strcmp1, strcmp4));
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : [%d]\n", ft_strcmp(strcmp4, strcmp1));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : [%d]\n", strcmp(strcmp4, strcmp1));
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : [%d]\n", ft_strcmp(strcmp1, strcmp1));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : [%d]\n", strcmp(strcmp1, strcmp1));
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : [%d]\n", ft_strcmp(strcmp4, strcmp5));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : [%d]\n", strcmp(strcmp4, strcmp5));
}


void check_strdup(void)
{
	char dup[] = "New Malloc";
	char dup1[] = "little";
	char dup2[] = "Very big malloc, libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test !";
	printf("============================================\n");
	printf("================ Ft_strdup =================\n");
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strdup(dup));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n", strdup(dup));
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strdup(dup1));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n", strdup(dup1));
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strdup(dup2));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n", strdup(dup2));
	printf("============================================\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strdup(""));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n", strdup(""));
}

int main(void)
{
	check_write();
	check_read();
	check_strlen();
	check_strcpy();
	check_strcmp();
	check_strdup();

	return (0);
}
