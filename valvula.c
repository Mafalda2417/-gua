#include <stdio.h>

int main(void){

float A;
float B;
float valvula;
float entrada;
float saida;
float totalA;
float totalB;
float valvula_maxima;



printf("Água no Reservatório A?\n");
scanf("%f",&A);
printf("Água no Reservatório B?\n");
scanf("%f",&B);
printf("Água que está a entrar?\n");
scanf("%f",&entrada);
printf("Água que está a sair?\n");
scanf("%f",&saida);
printf("Capacidade maxima da Válvula?\n");
scanf("%f",&valvula_maxima);

totalA = A - (A* 0.25);
totalB = B - (B* 0.9);



if (saida < entrada && A >= B)
{
    valvula =valvula_maxima;

    printf("A válvula está aberta no seu máximo.\n");
}else if (saida > entrada && A >= B)
{
    valvula = valvula_maxima *0.50;

    printf("A válvula está aberta a 50 por cento.\n");
}else if (saida = entrada && A > B)
{
    valvula = valvula_maxima;

    printf("A válvula está aberta no seu máximo.\n");
}else if (saida >= entrada && totalA < B)
{
    valvula = valvula_maxima*0.5;

    printf("A válvula está aberta a 50 por cento.\n");
}else if (A < B && saida < entrada)
{
    valvula = saida;

    printf("A válvula está aberta no mesmo valor da saida.\n");
}else if (A > totalB && entrada >saida )
{
    valvula =valvula_maxima*0.1;

    printf("A válvula está aberta a 10 por cento da sua capacidade máxima.\n");
}

    return 0;
} 