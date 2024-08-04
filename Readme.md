# Libasm
어셈블리어로 c함수 lib 구현
***
### register
x86-64 아키텍처와 cpu의 동작방식에 대해서 이해가 깊어짐. \
특히 함수 혹은 프로그램이 어떤식으로 cpu에게 명령을 전달하는지 전반적인 그림을 볼 수 있음.

<img src="https://i.sstatic.net/WgcQv.png" 
	width="500"
	/>
<img src="https://imgur.com/nHMUcng.png" 
	width="500"
/> \
<img src="https://s3.amazonaws.com/ebooks.syncfusion.com/LiveReadOnlineFiles/Assembly_Language_Succinctly/Images/figure-14.png" 
	width="500"
/> \
우리는 Linux계열로써 System V application Binary interface 참조 한다.

### Function Reference
***
```c
ssize_t	ft_read(int fd, void *buf, size_t count);
int	ft_strcmp(const char* s1, const char* s2);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
sszie_t	ft_write(int fd, const void *buf, size_t count);
```
***

## 참조
[레지스터 메모리](https://www.syncfusion.com/succinctly-free-ebooks/assemblylanguage/memory-spaces)