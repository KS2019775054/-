#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];
	scanf("%s",a);
	for(int i = 1 ; i <=strlen(a);i++)
		printf("*%-*.*s*\n",strlen(a),i,a);
		

}


#include <stdio.h>
#include <string.h>

int main() {
	
	char a[100];
	int i = 0;
	scanf("%s",a);
	while ( ++i <= strlen(a))
		printf("*%-*.*s*\n",strlen(a),i,a);	
		
	return 0;
}

/*int main() {
   char a[100];
   scanf("%s",a);
   for ( int i = 1 ; i <= strlen(a) ; i++ ) {
      printf("*");
      for ( int j = 0 ; j < i ; j++) {
         printf("%c",a[j]);
      }
      for ( int k = strlen(a)-i; k > 0 ; k--) {
         printf(" ");
      }
      printf("*\n");
   }
}
*/
