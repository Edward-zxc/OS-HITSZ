# include "kernel/types.h"
# include "user.h"

int main(int argc,char *argv[]){
    //检查命令行参数数量
    if (argc != 2){
        printf("Sleep needs one argument!\n");
        exit(-1);
    }
    int ticks = atoi(argv[1]);  //将字符串参数转化为整数
    sleep(ticks);  
    //这行代码调用了 sleep 系统调用，使得程序暂停执行指定的时间（以 "ticks" 为单位）。             
    //使用系统调用sleep
    printf("(nothing happens for a little while)\n");
    exit(0);//确保进程退出
}