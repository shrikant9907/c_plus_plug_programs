#include <stdlib.h>
#include <stdio.h>
int setenv(const char *envname, const char *envval, int overwrite);
int main() {
	
    setenv("DIR", "hello", 50); // Create environment variable
    
    printf(" %s",getenv("DIR")); 
	    
    return 0;
}
