#include <stdio.h>

int v1,v2,s1,s2,t1,t2;
float kecepatan, jarak, waktu;

int main(){
scanf("%d %d", &s1, &t1);
scanf("%d %d", &v1, &t2);
scanf("%d %d", &s2, &v2);

kecepatan = (float) s1/t1;
jarak = (float) v1*t2;
waktu = (float) s2/v2;

printf("%.2f\n", kecepatan);
printf("%.2f\n", jarak);
printf("%.2f\n", waktu);

return 0;
}
