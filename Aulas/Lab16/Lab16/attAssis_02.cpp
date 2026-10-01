//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	int j;
//	int ind[26];
//	char letras[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t',
//	'u','v','w','x','y','z' };
//	char mletras[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T',
//	'U','V','W','X','Y','Z' };
//	char codle[26];
//	char codml[26];
//	int chave=0;
//	int shift = 0;
//	char palavra[20];
//	char resposta[20];
//
//
//	
//	printf("Digite uma palavra:\n");
//	int retorno=scanf("%s",palavra);//tirar aviso
//
//	printf("Digite uma chave:\n");
//	retorno=scanf("%d",&chave);//tirar aviso
//
//	printf("Para codificar digite 1, caso descodificar aperte N\n");
//
//	retorno = scanf("%d", &i);
//	if (!retorno)
//		chave = -chave;
//	
//	for(i=0;i<26;i++)
//	{
//		shift = i + chave;
//		if (shift > 25)
//			shift -= 26;
//		else if (shift < 0)
//			shift += 26;
//
//		codle[i] = letras[shift];
//		codml[i] = mletras[shift];
//	}
//	
//	for (i = 0;palavra[i]!='\0';i++)
//		for (j = 0;j < 26;j++)
//			if (palavra[i] == letras[j])
//				resposta[i] = codle[j];
//			else if (palavra[i] == mletras[j])
//				resposta[i] = codml[j];
//			
//		
//
//	resposta[i] = '\0';
//	printf("%s",resposta);
//}