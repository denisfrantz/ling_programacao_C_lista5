#include<stdlib.h>
#include<stdio.h>
int main ()
{   
    int arv1, arv2, balas, tent;
    
    tent = 4;
    
    printf("Um marciano chegou a uma floresta e se escondeu atras de uma das 100 arvores quando viu um cacador.\n");
    printf("O cacador so tinha cinco balas em sua espingarda.\n");
    printf("\nJOGADOR 1, voce sera o marciano. Em que arvore vai se esconder? ");
    scanf("%d", &arv1);
    printf("\nJOGADOR 2, voce sera o cacador e precisa adivinhar em que arvore o marciano se escondeu. Boa sorte!");
    
    while (balas <= 4)
    {
    	printf("\n\nQual o numero da arvore onde o marciano esta? ");
    	scanf ("%d", &arv2);
    	
    	if (arv1 == arv2)
    	{
    		printf ("Marciano: Droga!! Voce me encontrou :(");
    		return 0;
		}
		else if (arv1 != arv2)
		{
			printf ("Errou, estou mais a ");
			
			if (arv1 < arv2)
				printf ("esquerda. Voce so tem mais %d chance(s)!", tent);
				
			else
				printf ("direita. Voce so tem mais %d chance(s)!", tent);
		}
		balas++;
		tent--;
	}
	
	printf ("\n\nVoce nao encontrou o marciano. Tente novamente!");
    
    return 0;
}
    

