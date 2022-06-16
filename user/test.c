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
    int fd = open("copyin1.txt", O_WRONLY | O_CREATE);
    if(fd < 0){
      printf("open(copyin1) failed\n");
      exit(1);
    }
    char c = 'a';
    write(fd, &c, 1);
    close(fd);
    exit(0);
}