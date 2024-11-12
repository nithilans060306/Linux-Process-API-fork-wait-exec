//C Program to execute Linux system commands using Linux API system calls exec() family
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
int main(){
	printf("Runing ps with execlp\n");
	execlp("ps","ps","ax",NULL);
	printf("Done\n");
	exit(0);
}