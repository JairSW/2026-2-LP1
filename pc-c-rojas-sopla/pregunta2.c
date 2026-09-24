#include <stdio.h>
#include <math.h>
int main(){
	
int ti
int lado_a,lado_b,lado_c;
scanf("%d %d %d",&lado_a,&lado_b,&lado_c);
if(lado_a>0&&lado_b>0&&lado_c>0){ //1
        double s;
        if(lado_a+lado_b>c&&lado_a+lado_c>lado_b&&lado_b+lado_c>lado_a){ //2
                 if(lado_a==lado_b&&lado_b==lado_c){ //3 equilatero
                        printf("Lados: %d, %d, %d\n",lados_a,lados_b,lados_c);
                        printf("Tipo: Equilatero\n");
                        printf("Rectangulo: No\n");
				 }
				 
                 else{ //3 no equilatero
                       if(lado_a==lado_b||lado_a==lado_c||lado_b==lado_c){//isosceles 
                            printf("Lados: %d, %d, %d\n",lados_a,lados_b,lados_c);
					         printf("Tipo: Isosceles\n");
					         if(a==b){
					         	long long c,c2,hip;
					            hip=a*a+b*b;
					            c2=c*c;
					            if(c2==hip){
					            	printf("RECTANGULO:Si\n");
								}
								
							 }
							 if(a==c){
							 	long long b,b2,hip;
							 	hip=a*a+c*c;
								 b2=b*b; 
							 	if(b2==hip){
							 		printf("RECTANGULO:Si\n");
								 }
								 
							 }
							 if(b==c){
							 	long long a,a2,hip;
							 	hip=b*b+c*c;
							 	a2=a*a;
							 	if(a2==hip){
							 		printf("RECTANGULO:Si\n");
								 }
								 
							 }
							 else {
							 	printf("RECTANGULO: No\n");
							 }
							 
					}
                       else{  // escaleno
                       	printf("Lados: %d, %d, %d\n",lados_a,lados_b,lados_c);
                        printf("Tipo: Escaleno\n");
                       	double s = (a + b + c) / 2.0;// calcular area
                       	area = sqrt(s * (s-a) * (s-b) * (s-c));
                        if(a>b){
                        	if(b>c){// a mayor
                        	int a2=a*a;
                        		if(a2==b*b+c*c){
                        			printf("Rectangulo: Si");
								}
								else {
									printf("Rectangulo: No");
								}
							}
							else {
								
							}
						}
                        
                        
                        
						  }
						//VERIFICAR SI ES RECTANGULO
					    
                     }
         } 
        else { //2
             printf("no triangulo\n");
         }
}
else{ //1 
    printf("invalido\n");
}
return 0;
}
