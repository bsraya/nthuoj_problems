#include <stdio.h>
#include <ctype.h>

int main(){
	char alphabet[78] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encoded;
	int shift;
	scanf("%c %d", &encoded, &shift);
	if(islower(encoded)==0){ // 65 is the ascii code for 'A'
		printf("%c\n", tolower(alphabet[encoded-65+26-shift])); 
	} else if(islower(encoded)>0) { // 97 is the ascii code for 'a'
		printf("%c\n", toupper(alphabet[encoded-97+26-shift])); 
	}
	return 0;
}
