  
#include <stdio.h>

int main() {
	unsigned int x = 829496729; // should be the limit
    double dub = 1356.1988958; // more precision I guess
    float ducky = 8493.32;
	char a = 'a'; // a!
	long boi = 123123123;
    char b [] = "big boi with whitespace";
    short k = 343222; // we'll find out what happens when you break the limit
    unsigned short weird = -3; // I wonder what this will do
    
    // Let's find out what these are
    printf("%d\n", x);
    printf("%lf\n", dub);
    printf("%f\n", ducky);
    printf("%c\n", a);
    printf("%d\n", boi);
    printf("%s\n", b);
    printf("%d\n", k);
    printf("%d\n", weird);
	
	return 0;
}