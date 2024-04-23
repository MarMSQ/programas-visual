#include <stdio.h>
 
int main() {
    int dias,i;
    float km,pf,num=0,pt;
    const float Pre=2.60;
 
 
  printf("EL PRECIO DE LA GASOLINA ES $%.2f\n", Pre);
 
  printf("Ingrese cuantos dias a la semana ha recorrido: ");
  scanf("%d", &dias);
 
  while ((dias <= 0) || (dias > 7)) {
    printf("Ingrese dias validos a la semana: ");
    scanf("%d", &dias);
  }
 
  for (i = 1; i <= dias; i++) {
    printf("Cuantos kilometros recorrio el dia %d?: ", i);
    scanf("%f", &km);
 
    while ((km < 0) || (km > 1000)) {
      printf("Ingrese kilometros validos: ");
      scanf("%f", &km);
    }
 
    printf("%f es num",num);
    pf = Pre * km;
 
    pt+=pf;
    num=pf;
    printf("%f es pt ",pt);
    printf("Los %.2f kilometros recorridos dan un precio de $%.2f por el dia %d\n",
           km, pf, i);
  }
    printf("El precio final es: %.2f $" ,pt);
  return 0;
}