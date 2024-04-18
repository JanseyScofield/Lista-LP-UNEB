#include <stdio.h>

main(){
	int hEnt,hSai, difH;
	int valorP, iCont;
	
	scanf("%d %d", &hEnt, &hSai);
	
	difH =  hSai - hEnt;
	valorP = 0;
	for(iCont = 1; iCont <= difH; iCont++){
		if(iCont==1 || iCont==2)
			valorP+=5;
		else if(iCont==3 || iCont==4)
			valorP+=2;
		else
			valorP++;
	}
	printf("O valor pago: R$ %d", valorP);
}
