//#define _crt_secure_no_warnings
//#include <stdlib.h>
//#include <stdio.h>
//#include <windows.h>
//
//
//int main()
//{
//	int saque = 0, saldo = 1000, notas=0; 
//	
//	printf("seu saldo é de: %d\n\ndigite o valor de saque: ",saldo);
//	int resul =scanf("%d", &saque);
//
//	
//
//	if (resul != 1||saque%5!=0||saque>saldo)
//	{
//		printf("\nentrada inválida!\n");
//	}
//	else
//	{
//		printf("\no valor de saque: %d\n\n", saque);
//		printf("\naguarde...");
//		sleep(2500);
//		printf("\nnotas entregues: ");
//		while (saque != 0)
//		{
//
//			if (saque >= 100)
//			{
//				sleep(800);
//				notas = saque / 100;
//				saque = saque % 100;
//				printf("\n%d nota(s) de 100", notas);
//			}
//			else if (saque >= 50)
//			{
//				sleep(800);
//				notas = saque / 50;
//				saque = saque % 50;
//				printf("\n%d nota(s) de 50", notas);
//			}
//			else if (saque >= 20)
//			{
//				sleep(800);
//				notas = saque / 20;
//				saque = saque % 20;
//				printf("\n%d nota(s) de 20", notas);
//			}
//			else if (saque >= 10)
//			{
//				sleep(800);
//				notas = saque / 10;
//				saque = saque % 10;
//				printf("\n%d nota(s) de 10", notas);
//			}
//			else if (saque >= 5)
//			{
//				sleep(800);
//				notas = saque / 5;
//				saque = saque % 5;
//				printf("\n%d nota(s) de 5", notas);
//			}
//
//
//		}
//		
//	}
//	sleep(800);
//	printf("\n\natendimento finalizado! muito obrigado!");
//	sleep(1000);
//}