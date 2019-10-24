//reads a file and displays its info. reads its file through command line


#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <strings.h>
int main(int argc, char* argv[]) {
	if(argc < 2) {
    	perror("Invalid Arguments To Main\n");
        return errno;
    }
    struct data {
    	int age;
    	char name[16];
    };
    struct data v;
    int fd, fn, i, sn, tn, vi,  p = 0;
    char s;
    fd = open(argv[1], O_RDONLY, S_IRUSR|S_IWUSR);
    read(fd, &fn, sizeof(int));
    for(i = 0; i < fn; i++) {
    	read(fd, &vi, sizeof(int));
    	printf("%d\n", vi);
    }
    read(fd, &sn, sizeof(int));
    for(i = 0; i < sn; i++) {
    	read(fd, &v.age, sizeof(int));
    	printf("%d ", v.age);
    	read(fd, v.name, 16);
    	printf("%s\n", v.name);
    }
    read(fd, &tn, sizeof(int));
    for(i = 0; p != tn; i++) {
    	read(fd, &s, (sizeof(char)));
    	if(s == '\0') {
        		p++;
    		printf("\n");
    		continue;
    	}
    	printf("%c", s);
    }
    close(fd);
    return 0;
}
