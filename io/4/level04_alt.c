//written by bla
#include <stdlib.h>
int main(){
	setresuid(geteuid(), geteuid(), geteuid());
	system("/usr/bin/id");
}
