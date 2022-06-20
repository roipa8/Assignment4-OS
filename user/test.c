#include "kernel/param.h"
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fs.h"
#include "kernel/fcntl.h"
#include "kernel/syscall.h"
#include "kernel/memlayout.h"
#include "kernel/riscv.h"

int main(){
    // int fd = open("test.txt", O_RDWR | O_CREATE);
    // if(fd < 0){
    //   printf("open failed\n");
    //   exit(1);
    // }
    // char buf1[1024];
    // memset(buf1, 'h', sizeof(buf1));
    // for (int i = 0; i < 12; i++)
    //   write(fd, buf1, sizeof(buf1));
    // printf("Finished writing 12KB (direct)\n");
    // for (int i = 0; i < 256; i++)
    //   write(fd, buf1, sizeof(buf1));
    // printf("Finished writing 268KB (single indirect)\n");
    // for (int i = 0; i < 12; i++)
    //   printf("%d\n",read(fd, buf1, sizeof(buf1)));
    // printf("Finished writing 12KB (direct)\n");
    // for (int i = 0; i < 256; i++)
    //   printf("%d\n",read(fd, buf1, sizeof(buf1)));
    // printf("Finished writing 268KB (single indirect)\n");
    // char* buf = malloc(9972*1024);
    // memset(buf1, 'h', 9972*1024);
    // write(fd, buf, 9972*1024);
    // printf("Finished writing 10MB\n");
    
    // close(fd);
    if(symlink("/cat1234","/new_cat") < 0)
      exit(1);
    char data[128];
    if(readlink("/new_cat", data, 128) < 0)
      exit(1);
    printf("%s\n", data);
    exit(0);
}