#include <stdio.h>
#include <stdlib.h> //random import
#include <time.h> //ido import

int maximum(int x, int y){
    if(x>y){
        return x;
    }
    return y;
}

int maximum2(int x, int y){
    return x > y ? x : y;
}

int foo(int x){
    x++;
    return x;
}

int osszegzes(int db){
    int ossz = 0;
    int temp;
    for(int i = 0; i < db; i++){
        scanf("%d", &temp);
        ossz += temp;
    }
    return ossz;
}

int paratlan(){
    int x=0;
    while(x % 2 == 0){
        scanf("%d", &x);
    }
    return x;
}

int paratlan2(){
    int x;
    scanf("%d", &x);
    return x%2 != 0 ? x : paratlan2();
}

float maximum_f(float x, float y){
    if(x>y){
        return x;
    }
    return y;
}

void jatek1(int param1, int param2){
    int x = rand()%param2+param1;
    int temp;
    while (temp != x){
        scanf("%d", &temp);
        if(temp > x) printf("Kisebb a szam!\n");
        else if(temp < x) printf("Nagyobb a szam!\n");
        else printf("Kitalaltad!\n");
    }
}

void jatek2(int param1, int param2){
    int x = 0;
    int BOOL = 1;

    //első generálás, a többi már cikluson belül lesz
    x = rand()%param2+param1;
    printf("\n%d: ", x);

    while(BOOL == 1){
        char c = getchar();
        if(c == '>'){
            x = rand()%(x-1)+param1;
            printf("\n%d: ", x);
        } 
        else if(c == '<'){
            x = rand()%param2+x;
            printf("\n%d: ", x);
        } 
        else if(c == '='){
            printf("A szam: %d\n", x);
            BOOL = 0; //hamisra allitjuk, hogy ne fusson tovabb a ciklus
        }
    }
}

void kockadobalas(){
    int T[1000];
    int x;
    int y;
    int osszes[10] = {0,0,0,0,0,0,0,0,0,0};
    for (int i = 0; i < 1000; i++){
        x = rand()%6+1; //dobokocka1
        y = rand()%6+1; //dobokocka2
        T[i] = x+y;
        switch(x+y){
            case 2:
            osszes[0]++;
            break;
            case 3:
            osszes[1]++;
            break;
            case 4:
            osszes[2]++;
            break;
            case 5:
            osszes[3]++;
            break;
            case 6:
            osszes[4]++;
            break;
            case 7:
            osszes[5]++;
            break;
            case 8:
            osszes[6]++;
            break;
            case 9:
            osszes[7]++;
            break;
            case 10:
            osszes[8]++;
            break;
            case 11:
            osszes[9]++;
            break;
            case 12:
            osszes[10]++;
            break;
        }
    }
    for(int i = 0; i < 12; i++){
        printf("%d szam: %d\n", i+1, osszes[i]);
    }
}

int main(){
    /*int x=7;

    printf("%d\n", foo(x));
    printf("%d\n", x);
    printf("%d\n", osszegzes(2));*/

    //srand(100); //seedeles
    srand(time(NULL)); //nagy NULL kell
    //int x = rand(); //random generalas
    //int x = rand()%6+1; //1-6 kozotti range
    int x = rand()%11+10; 
    //intervallum szelessegevel modulozunk és a minimumot kell hozzaadni
    //rand() % x + y;
    //legalabb y-t
    //legfeljebb x+y-1-et
    printf("%d\n", x);

    //jatek1(1, 1000);
    //jatek2(1, 10);

    //int T[1000]; //1000 elemu, inteket tartalmazo tomb, nincsenek benne elemek, viszont a helyet lefoglalja az 1000 int-nek
    int T[1000] = {2, 25, 53, 12, 6}; //feltoltes, hely meg fog maradni mivel ez csak 5 szam volt

    kockadobalas();
}