#include <stdio.h>

// Do you want to print your photos anywhere and not have it cropped? 
// This program helps you find the required resolution of a photo for a specific ratio to avoid cropping
// If your photo is W x H = 2000x3000 (2x3 ratio), and you want 8x10 ratio, the new resolution is 2400x3000

int main(){

	float W1,W2,WR,H1,H2,HR;
	char repeat;
	
	printf(" RESIZE PHOTO TO RATIO\n");
	
	while (1) {
		printf(" What is your photo's width & height? W x H (Type 3 2 for 3x2)\n ");
		scanf("%f %f", &W1, &H1);
		if (W1>H1) 
			printf(" ****\n ****\n");
		else if (H1>W1)
			printf(" ***\n ***\n ***\n");
		else
			printf(" **\n **");
		
		printf(" Desired ratio? W x H\n Common Ratios:\n");
		
		if (W1>H1) 
			printf(" 6x4 | 7x5 | 10x8 | 14x11 | 18x12 | 20x16\n ");
		else if (H1>W1)
			printf(" 4x6 | 5x7 | 8x10 | 11x14 | 12x18 | 16x20\n ");
		
		scanf("%f %f", &WR, &HR);
		
		if ((W1/H1) == (WR/HR))
			printf(" You are at the correct ratio already.\n");
		
		if (W1 > H1) {	// horizontal photo
			W2 = W1;	// same width
			H2 = W1*HR/WR;
		}
		else {			// vertical or square photo
			H2 = H1;	// same height
			W2 = H1*WR/HR;
		}
		printf(" New W x H:\n %4.f x %4.f\n", W2, H2);
		
		printf(" Do you want to resize another photo? y or n\n ");
		scanf("%s", &repeat);
		if (repeat=='n'){	
			break;		// exit loop
		}

}	//end of while loop 

	system("pause");
	return 0;
}