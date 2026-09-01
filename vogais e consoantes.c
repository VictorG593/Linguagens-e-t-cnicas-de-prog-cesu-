#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
char letra;
printf ("escreva uma letra\n");
scanf ("%c", &letra);

if (letra == 'a'|| letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ){
if (letra == 'a'|| letra == 'o'){
 printf ("aoba");
}
if (letra == 'i'|| letra == 'u'){
	printf ("la ele");
}
}else { printf ("67");
}
printf("\n");
switch (letra){
case 'a': 
printf ("a de amor");
break;
case 'b':
printf("b de baixinho");
break;
	case 'c':
printf("c de coracao");
break;
	case 'd':
printf("d de docinho");
break;
case 'e':
printf("e de escola ");
break;
case 'f':
printf("f de feijao ");
break;
case 'g':
printf("g de gente ");
break;
case 'h':
printf("h de humano");
break;
case 'i':
printf("i de igualdade");
break;
case 'j':
printf("j de juventude");
break;
case 'l':
printf("l de liberdade");
break;
case 'm':
printf("m de molecagem");
break;
case 'n':
printf("n de natureza");
break;
case 'o':
printf("o de obrigado");
break;
case 'p':
printf("p de protecao");
break;
case 'q':
printf("q de quero-quero");
break;
case 'r':
printf("r de riacho");
break;
case 's':
printf("s de saudade");
break;
case 't':
printf("t de terra");
break;
case 'u':
printf("u de universo");
break;
case 'v':
printf("v de vitoria");
break;
case 'x':
printf("x de xuxa");
break;
case 'z':
printf("z de zum zum zum zum");
break;

}
	return 0;
}

