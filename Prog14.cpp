/* Autor: Xavier Romero Hernández, Realizado: 17/02/2022 
	
	*/
	
#include <stdio.h>

int main(){
	int ejemplares;
	float total1, total2,total3,precio, regalias1, regalias2, a;
	total1=25000;
	printf("Introduce el precio neto de cada ejemplar: ");
	scanf("%f",&precio);
	printf("Introduce la cantidad de ejemplares que se estiman vender: ");
	scanf("%d",&ejemplares);
	
	printf("\nOpcion 1:\nPago total: $25,000.00");
	
	printf("\n\nOpcion 2:\n");
	printf("Ejemplares estimados\tPrecio c/u\tRegalias del 12.5 de c/u\tPago total");
	regalias1=precio*0.125;
	total2=regalias1*ejemplares;
	printf("\n%d\t\t\t$%.2f\t\t$%.2f\t\t\t\t$%.2f",ejemplares,precio,regalias1,total2);
	
	printf("\n\nOpcion 3:\n");
	printf("Ejemplares estimados\tPrecio c/u\tRegalias del 10 de c/u\tRegalias del 14 de c/u\tPago total");
	regalias1=precio*0.1;
	regalias2=precio*0.14;
	if(ejemplares>4000){
		total3=(4000*regalias1)+(ejemplares-4000)*regalias2;
	}
	else{
		total3=(ejemplares*regalias1);
	}
	printf("\n%d\t\t\t$%.2f\t\t$%.2f\t\t\t$%.2f\t\t\t$%.2f\n",ejemplares,precio,regalias1,regalias2,total3);
	
	if(total1>total2){
        if(total1>total3)
            a=total1;
        else
            a=total3;
        }
    else{
        if(total2>total3)
            a=total2;
        else
            a=total3;
        }
            
	if(total1==a)printf("\nLa opcion 1 es la mejor\n");
	if(total2==a)printf("\nLa opcion 2 es la mejor\n");
	if(total3==a)printf("\nLa opcion 3 es la mejor\n");
	
	return 0;
}
