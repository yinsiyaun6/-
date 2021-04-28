# include <stdio.h>
# include <string.h>

int a[1000];
int b[1000];

int main()
{
	int i, j, n;
	scanf("%d", &n);
	a[0] = b[0] = 1;
	for (i=2; i<=n; ++i) {
		for (j=0; j<100; ++j) 
			b[j] *= i;
			
		for (j=0; j<100; ++j) {
			if (b[j]>9) {
				b[j+1] += b[j]/10;
				b[j] %= 10;
			}
		}	
		
		for (j=0; j<100; ++j) 
			a[j] +=b[j];
		for (j=0; j<100; ++j) {
			if (a[j]>9) {
				a[j+1] += a[j]/10;
				a[j] %= 10;
			}
		}				  	
	} 
	for (i=100; 0==a[i]; --i);
	for (j=i; j>=0; --j)
	    printf("%d", a[j]); 
	
	return 0;
}

