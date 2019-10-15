#include <unistd.h>
int main(){
	char filename[] = "/bin/sh\x00";
	char *argv[1];
	char *envp[1];

	argv[0] = "/bin/sh";
	argv[1] = 0;
	envp[0] = 0;

	execve(filename, argv, envp);
}
