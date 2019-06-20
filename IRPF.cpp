#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#define CONSTA 1.5
#define RANGO1 1182.75
#define RANGO2 2112.75
#define RANGO3 4362.75
#define RANGO4 8950.75
#define MIN 5550
#define AND1 1245
#define AND2 2175
#define AND3 3345
#define AND4 4533
#define AND5 7345
#define AND6 9295
#define AND7 23395

 
float baseliquidable(float a);
float cuotaintegra(float a);
float integraautonomica(float a);
float cuotaliquida(float a, float b);

int main(){
	
	int hijos,min,peques,opcion,matrimonio;
	float ri, cot, rn, rnt, rntt, reduccion,c,d,cif,cia,ded,deducciones,CLG,ret,CD;
	peques=0;
printf("  1. Declaracion individual       2. Declaracion conjunta\n\n");
printf(" Introduce una opcion: ");
scanf("%d",&opcion);
printf("\n");
if(opcion==1){

	//BASE IMPONIBLE
	printf(" Introduce los rendimientos integros del trabajo: ");
	scanf("%f", &ri);
	printf("\n");
	
	printf(" Introduce las cotizaciones a la Seguridad Social: ");
	scanf("%f",&cot);
	printf("\n\n");
	rn= ri-cot;
    printf(" El rendimiento neto previo del trabajo es %.2f\n",rn);
    Sleep(1000);
    printf(" El rendimiento neto del trabajo es %.2f\n",rn-2000);
	
	if(rn<=16825){
	
	if(rn<=13115){
		rnt=rn-(5565/2);
		rntt=rnt-2000;
	}else if(rn>13115 && rn<=16825){
		reduccion= (5565-(rn-13115)*CONSTA)/2;
		rnt=rn-reduccion;
		rntt=rnt-2000;
		}
		
		Sleep(1000);
		printf(" El rendimiento neto reducido del trabajo es el siguiente: %.2f\n\n",rntt);

}else{
	rntt= rn -2000;
	printf(" El rendimiento neto reducido del trabajo es el siguiente: %.2f\n\n",rntt);
}

	
	//BASE LIQUIDABLE

Sleep(1000);	
	c=baseliquidable(rntt);
	printf("\n");
Sleep(1000);	
	printf(" BASE LIQUIDABLE: %.2f\n\n",c);
	
   //CUOTA INTEGRA ESTATAL
Sleep(1000);   
   printf(" CUOTA ESTATAL: %.2f\n",cuotaintegra(c));

   //CUOTA INTEGRA AUTONOMICA
Sleep(1000);   
   printf(" CUOTA AUTONOMICA: %.2f\n\n",integraautonomica(c));


Sleep(1000);
   printf(" ¿Cuantos hijos menores de 25 tienes?\n");
   scanf("%i",&hijos);
   if(hijos>0){
   printf("Cuantos de ellos son menores de 3?\n");
   scanf("%i",&peques);}
   printf("\n");

//MINIMO PERSONAL Y POR DESCENDIENTES

switch(hijos){
	
	case 0:min= MIN; break;
	case 1:min= MIN + 1200;break;
	case 2:min= MIN + 2550; break;
	case 3:min= MIN + 4550;break;
	default: min= MIN + 4550+ 2250*(hijos-3);
}
if(peques>0){
	min=min+1400*peques;
}

Sleep(1000);
   printf(" MINIMO PERSONAL Y POR DESCENDIENTES: %i\n", min);
   cif=cuotaintegra(c)-cuotaintegra(min);
   cia=integraautonomica(c)-integraautonomica(min);
   printf("\n\n");

Sleep(1000);
if(cif<0){
	cif= 0;
}
printf(" CUOTA INTEGRA ESTATAL FINAL: %.2f \n",cif);

Sleep(1000);
if(cia<0){
	cia= 0;
}
Sleep(500);
printf(" CUOTA INTEGRA AUTONOMICA FINAL: %.2f \n\n",cia);

//CUOTA LÍQUIDA ESTATAL
Sleep(1000);	
	printf(" Introduce las deducciones estatales a la cuota integra: ");
	scanf("%i",&deducciones);
	
//CUOTA LÍQUIDA AUTONÓMICA

	printf(" Introduce las deducciones autonomicas a la cuota integra: ");
	scanf("%f",&ded);
	printf("\n\n");
	
	printf(" CUOTA LIQUIDA ESTATAL: %.2f\n",cuotaliquida(cif,deducciones));
Sleep(1000);
	printf(" CUOTA LIQUIDA AUTONOMICA: %.2f\n\n",cuotaliquida(cia,ded));
	
//CUOTA LÍQUIDA GENERAL

CLG= cuotaliquida(cif,deducciones)+ cuotaliquida(cia,ded);
Sleep(1000);
printf(" CUOTA LIQUIDA GENERAL: %.2f\n\n",CLG);

//CUOTA DIFERENCIAL
	printf(" Introduzca las retenciones, pagos a cuenta o pagos fraccionados: ");
	scanf("%f",&ret);
	CD= CLG-ret;
	printf("\n");
	printf(" CUOTA DIFERENCIAL: %.2f\n\n",CD);
Sleep(1000);	
	printf("\t\t");
	if(CD<0)
	
	printf(" HACIENDA TENDRA QUE DEVOLVERLE LA CANTIDAD DE %.2f euros\n\n",fabs(CD));
	else printf(" TENDRA QUE INGRESAR LA CANTIDAD DE %.2f euros\n\n",fabs(CD));
}
if(opcion==2){

//BASE IMPONIBLE

printf(" Introduce los rendimientos integros del trabajo: ");
	scanf("%f", &ri);
	printf("\n");
	
	printf(" Introduce las cotizaciones a la Seguridad Social: ");
	scanf("%f",&cot);
	printf("\n\n");
	rn= ri-cot;
    printf(" El rendimiento neto previo del trabajo es %.2f\n",rn);
    Sleep(1000);
    printf(" El rendimiento neto del trabajo es %.2f\n",rn-2000);
	
	if(rn<=16825){
	
	if(rn<=13115){
		rnt=rn-(5565/2);
		rntt=rnt-2000;
	}else if(rn>13115 && rn<=16825){
		reduccion= (5565-(rn-13115)*CONSTA)/2;
		rnt=rn-reduccion;
		rntt=rnt-2000;
		}
		
		Sleep(1000);
		printf(" El rendimiento neto reducido del trabajo es el siguiente: %.2f\n\n",rntt);

}else{
	rntt= rn -2000;
	printf(" El rendimiento neto reducido del trabajo es el siguiente: %.2f\n\n",rntt);
}
	
	//BASE LIQUIDABLE

Sleep(1000);	
	c=baseliquidable(rntt);
	printf("\n");
Sleep(1000);	
	printf(" BASE LIQUIDABLE: %.2f\n\n",c);

//REDUCCION DE BASE POR MATRIMONIO LEGALMENTE NO SEPARADO

printf("Aplicacion de reduccion por matrimonio (0:No,1:Si): ");
scanf("%d",&matrimonio);
if(matrimonio==1){
	c=c-3400;
}
 //CUOTA INTEGRA ESTATAL
Sleep(1000);   
   printf(" CUOTA ESTATAL: %.2f\n",cuotaintegra(c));

   //CUOTA INTEGRA AUTONOMICA
Sleep(1000);   
   printf(" CUOTA AUTONOMICA: %.2f\n\n",integraautonomica(c));


Sleep(1000);
   printf(" ¿Cuantos hijos menores de 25 tienes?\n");
   scanf("%i",&hijos);
   if(hijos>0){
   printf("Cuantos de ellos son menores de 3?\n");
   scanf("%i",&peques);}
   printf("\n");

switch(hijos){
	
	case 0:min= MIN; break;
	case 1:min= MIN + 2400;break;
	case 2:min= MIN + 5100; break;
	case 3:min= MIN + 9100;break;
	default: min= MIN + 9100+ 4500*(hijos-3);
}
if(peques>0){
	min=min+2800*peques;
}

Sleep(1000);
   printf(" MINIMO PERSONAL Y POR DESCENDIENTES: %i\n", min);
   cif=cuotaintegra(c)-cuotaintegra(min);
   cia=integraautonomica(c)-integraautonomica(min);
   printf("\n\n");

Sleep(1000);
if(cif<0){
	cif= 0;
}
printf(" CUOTA INTEGRA ESTATAL FINAL: %.2f \n",cif);

Sleep(1000);
if(cia<0){
	cia= 0;
}
Sleep(500);
printf(" CUOTA INTEGRA AUTONOMICA FINAL: %.2f \n\n",cia);

//CUOTA LÍQUIDA ESTATAL
Sleep(1000);	
	printf(" Introduce las deducciones estatales a la cuota integra: ");
	scanf("%i",&deducciones);
	
//CUOTA LÍQUIDA AUTONÓMICA

	printf(" Introduce las deducciones autonomicas a la cuota integra: ");
	scanf("%f",&ded);
	printf("\n\n");
	
	printf(" CUOTA LIQUIDA ESTATAL: %.2f\n",cuotaliquida(cif,deducciones));
Sleep(1000);
	printf(" CUOTA LIQUIDA AUTONOMICA: %.2f\n\n",cuotaliquida(cia,ded));
	
//CUOTA LÍQUIDA GENERAL

CLG= cuotaliquida(cif,deducciones)+ cuotaliquida(cia,ded);
Sleep(1000);
printf(" CUOTA LIQUIDA GENERAL: %.2f\n\n",CLG);

//CUOTA DIFERENCIAL
	printf(" Introduzca las retenciones, pagos a cuenta o pagos fraccionados: ");
	scanf("%f",&ret);
	CD= CLG-ret;
	printf("\n");
	printf(" CUOTA DIFERENCIAL: %.2f\n\n",CD);
Sleep(1000);	
	printf("\t\t");
	if(CD<0)
	
	printf(" HACIENDA TENDRA QUE DEVOLVERLE LA CANTIDAD DE %.2f euros\n\n",fabs(CD));
	else printf(" TENDRA QUE INGRESAR LA CANTIDAD DE %.2f euros\n\n",fabs(CD));

} else if(opcion!=1 && opcion!=2){
	printf("Opcion no contemplada\n\n");
	main();
}
	system("pause");
	return 0;
}

//FUNCION 0 
float baseliquidable(float a){
	float bl,red;
	printf(" Introduce, si las hubiera, las reducciones previstas por la Ley: ");
	scanf("%f",&red);
	bl= a-red;
	return bl;
}

//FUNCION 1
float cuotaintegra(float a){
	float ci;
	if(a<=12450 && a>=0){
		ci= (a) * 0.095;} 
		else if(a<=20200){
			ci= RANGO1+(a-12450)*0.12; 
		}
	else if(a<=35200){
		ci=RANGO2+(a-20200)*0.15;
	}
	else if(a<=60000){
		ci= RANGO3+(a-35200)*0.185;
	}else{
		ci=RANGO4+(a-60000)*0.225;
	}
	return ci;
	}
	
//FUNCION 2
	
float cuotaliquida(float a, float b){
		float cl;
		cl=a-b;
		if(cl<0)
		cl=0;
		return cl;
	}
	
//FUNCION 3
	
float integraautonomica(float a){
	
	float ci;
	if(a<=12450 && a>=0){
		ci= (a) * 0.1; }
		else if(a<=20200){
			ci= AND1+(a-12450)*0.12; 
		}
	else if(a<=28000){
		ci=AND2+(a-20200)*0.15;
	}
	else if(a<=35200){
		ci= AND3+(a-28000)*0.165;
	}else if(a<=50000){
		ci=AND4+(a-35200)*0.19;
	}else if(a<=60000){
		ci=AND5+(a-50000)*0.195;
	}else if(a<=120000){
		ci=AND6+(a-60000)*0.235;
	}else
	{
		ci= AND7+(a-120000)*0.255;
	}
	return ci;
	}
	

	

