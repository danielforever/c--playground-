#include <stdlib.h>
#include <stdio.h> 
#include <math.h>


int main(void){
	float a, b, c, d, e, h, i, j, k, l; 
	printf("Solving roots of equation a*X**2+b*X+c = 0.\nPlease enter three coefficients a, b and c: ");
	scanf("%f %f %f", &a, &b, &c);
	if (a==0){
		printf("  ");
	}
	else{
	//if ( a == 0 && b == 0 && c != 0) printf  ("The equation is not exsit.");
	if ( c == 0 && b == 0 && a != 0) printf  ("The multiple real root of equation %6.4fX**2=0.0000 is 0.0000.",a);
	//if ( a == 0 && c == 0 && b != 0) printf  ("The real root of equation %6.4fx=0.0000 is 0.0000.",b);
	double g, result;
	g = abs(b*b-4*a*c);
	l = sqrt(g);
	d = ((-b-l)/(2*a));
	e = ((-b+l)/(2*a));
	h = (-b/(2*a));
	i = (-b/(2*a));
	j = l/(2*a);
	k = -l/(2*a);
    
    	if( (a!=0 && b!=0) || (a!=0 && c!=0) ||(c!=0 && b!=0) || (a!=0 && b!=0 && c!=0) ){
    	  if (b*b-4*a*c >= 0  ){
    	   	printf ("The real root of the equation ");
			}
		else { 
		    printf("The complex roots of equation ");
		}   		   
    	   if( a == 1 ){
				printf("X**2");}
    	   else {
				printf("%6.4f*X**2",a);
    	   	    }
    	   if( b == 1 ){
    	   	    printf("+X");
    	   	    }
    	   else if ( b > 0){
    	   	    printf("+%6.4fX",b);
    	   	    }
    	   else if ( b < 0){
				printf("%6.4fX",b);
			    }
		   else {
		   	    printf(" ");
		        }	    
		   if( c > 0){
		   	    printf("+%6.4f",c);
		    }
		   else if (c == 0){
		   	    printf(" ");
		    }
		   else {
		   	    printf("%6.4f",c);
		   }			    
		printf(" = 0.000 are");		   
    	   		

    	  if (b*b-4*a*c >= 0  ){
    	   	printf ("%6.4f and %6.4f.",d ,e);
			}
		else { 
		    printf("%6.4f+%6.4fi and %6.4f%6.4fi.",h ,j ,i, k);
		}     	   	


    }
}
	
	return 0;
}        
