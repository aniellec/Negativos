
int main () {

int negativos, numero, contador;
negativos = 0;
contador = 1;

do{

    scanf("%d",&numero);

    if (numero < 0) {
    negativos++;
    }

    contador++;

} while (contador<6);

printf("%d", negativos);

}
