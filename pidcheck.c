// C Program to print process ID and parent Process ID using Linux API system calls
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid;

    
    pid = fork();

    if (pid < 0) {
        
        perror("fork");
        exit(1);
    } else if (pid == 0) {
      
        printf("Child Process:\n");
        printf("My PID is %d\n", getpid());
        printf("My Parent PID is %d\n", getppid());
        printf("Child process is exiting.\n");
        exit(0);  
    } else {
       
        printf("Parent Process:\n");
        printf("My PID is %d\n", getpid());
        printf("My Child PID is %d\n", pid);
        printf("Parent process is going to sleep for 10 seconds.\n");
        sleep(10); 
        printf("Parent process is exiting.\n");
        exit(0);  
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int pid;
    pid = fork();
    if (pid == 0) {
        printf("Iam Child my pid is %d\n", getpid());
        printf("My parent pid is %d\n", getppid());
        exit(0);
    } else {
        printf("Iam parent my pid is %d\n", getpid());
        sleep(100);
        exit(0);
    }
}