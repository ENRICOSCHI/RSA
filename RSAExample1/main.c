#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Euclide();
void inputAB();
int MCD();
int a,b,r,A,B,n,i;
int main(int argc, char *argv[]) {
	//InputAB();
	Euclide();
	return 0;/* you can also make Euclide return an int and put it at the place of 0*/
}
void Euclide(){
	int somma = 0;
	printf("Inserire n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int MCDE = MCD(n,i);
		if(MCDE == 1){
			somma++;
			printf("%d ",i);// stavo ogni passo per arrivare al risultato
		}
		//return somma;	 /*uncomment this for return somma in retrun main, MAKE SURE TO MAKE Euclide AN INT*/
	}
	printf("\n Funzione di Eulero di %d = %d",n,somma);
}
void InputAB(){ //usato per fare RSA con soli 2 input
	do{
		printf("inserisci b\n");
		scanf("%d",&b);
		B = b;//per la stampa finale
	}while(b<=0);//controllo
	
	do{
		printf("inserisci a\n");
		scanf("%d",&a);
		A = a;//per la stampa finale
	}while(b>a);//controllo
}
int MCD(b,a){
	do{
	r=a%b;//calcolo resto
	a=b;
	b=r;
	}while(b!=0);
	return a;
	//printf("mcd di %d e %d = %d",A,B,a);
}
