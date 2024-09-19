# Linux-Process-API-fork-wait-exec-
Ex02-Linux Process API-fork(), wait(), exec()
# Ex02-OS-Linux-Process API - fork(), wait(), exec()
Operating systems Lab exercise


# AIM:
To write C Program that uses Linux Process API - fork(), wait(), exec()

# DESIGN STEPS:

### Step 1:

Navigate to any Linux environment installed on the system or installed inside a virtual environment like virtual box/vmware or online linux JSLinux (https://bellard.org/jslinux/vm.html?url=alpine-x86.cfg&mem=192) or docker.

### Step 2:

Write the C Program using Linux Process API - fork(), wait(), exec()

### Step 3:

Test the C Program for the desired output. 

# PROGRAM:

## C Program to print process ID and parent Process ID using Linux API system calls

```
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

```
## OUTPUT

![image](https://github.com/user-attachments/assets/1026e3ba-ea9e-4f10-ab5e-dcae64d4b9d7)

## C Program to create new process using Linux API system calls fork() and exit()


```
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

```



## OUTPUT
![image](https://github.com/user-attachments/assets/2a31537d-4269-4901-919f-09db590381d2)


## C Program to execute Linux system commands using Linux API system calls exec() family

```
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
int main(){
	printf("Runing ps with execlp\n");
	execlp("ps","ps","ax",NULL);
	printf("Done\n");
	exit(0);
}
 
```



## OUTPUT
![image](https://github.com/user-attachments/assets/c4850731-51c2-4097-897f-73b77a565349)




# RESULT:
The programs are executed successfully.
