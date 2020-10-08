#include <stdio.h>
int main(){
    char alphabet[78] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char encoded;
    int shift;
    scanf("%c %d", &encoded, &shift);
	printf("%c\n", alphabet[encoded-65+26-shift]); 
    return 0;
}
