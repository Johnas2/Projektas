#include <iostream>
using namespace std;

int main()
{
	int i;
	for (i = -1; i > 1; i--)
	{
		cout << "Hello world!" << endl;
	}
	char *obtain_data()

		; {
		
		       char *buf = malloc(100);
		        FILE *f;
		        size_t length = 0;
		
			       if (!buf) return NULL;
		       f = fopen("football.dat", "r");
		       if (!f) return NULL;
		 * buf = '\0';
		       while (fgets(buf + length, 100, f))
			           {
			           length = strlen(buf);
			           realloc(buf, length + 100);
			           }
	       (void)fclose(f);
		       return buf;
	   }
	
}
