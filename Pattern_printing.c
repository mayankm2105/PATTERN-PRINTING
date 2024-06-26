#include<stdio.h>

int main() {
 //STAR RECTANGLE//
  /*int l, s;
  printf("enter no. of lines:");
  scanf("%d", &l);
  printf("enter no. of stars per lines:");
  scanf("%d", &s);
  for(int i =1; i<=l;i++) {
    for(int j=1; j<=s;j++) {
        printf("*\t");
    }
    printf("\n");
  }*/
 //NUMBER SQUARE//
 /*for(int i=1;i<=4;i++) {
    for(int j=1; j<=5;j++){
        printf("%d", j);
    }
    printf("\n");
 }*/
 //STAR TRIANGLE//
 /*for(int i=5; i>=1; i--) {
    for(int j=1; j<=i; j++){
        printf("*");
    }
    printf("\n");
 }*/
 //NUMBER TRIANGLE//
 /*for(int i=1;i<=7;i+=2) {
    for(int j=1; j<=i;j+=2){
        printf("%d", j);
    }
    printf("\n");
 }*/
 //ALPHABET SQUARE//
 /*for(int i=1;i<=5;i++) {
    for(char a=65; a<=68;a++){
        printf("%c", a);
    }
    printf("\n");
 }*/
 //special case of alphabet and number triangle//
 /*for(int i=1;i<=5;i++) {
    if(i%2!=0){
        for(int j=1; j<=i;j++){
            printf("%d", j);
        }
    } else {
        for(char a=65;a<=64+i;a++) {
            printf("%c", a);
        }
    }
    printf("\n");
 }*/
 //HOLLOW RECTANGLE//
 /*int l, b;
 printf("enter length of rectangle:");
 scanf("%d", &l);
 printf("enter breadth of rectangle:");
 scanf("%d", &b);
 for(int i=1;i<=b;i++){
    if(i==1 || i==b) {
        for(int j=1;j<=l;j++){
            printf("*\t");
        }
    } else {
        for(int j=1;j<=l;j++){
            if(j==1 || j==l) {
                printf("*\t");
            } else {
                printf("\t");
            }
        }
    }
    printf("\n");
 }*/
 //STAR PLUS//
 /*int n;
 printf("enter star plus length(vertical column):");
 scanf("%d", &n);
 if(n%2!=0){
    int h = (n+1)/2;
    for(int i=1; i<=n; i++) {
        for(int j=1;j<=n;j++){
            if(i==h || j==h) {
                printf("*\t");
            } else {
              printf("\t");
            }
        } 
     printf("\n");
    }
 } else {
    printf("invalid length!!");
 }*/
 //FLOYD'S TRIANGLE//
 /*int a = 1;
 for(int i=1;i<=3;i++) {
    for(int j=1;j<=i;j++){
        printf("%d", a);
        a++;
    }
    printf("\n");
 }*/
 //STAR CROSS//
 /*int n;
 printf("enter length of cross:");
 scanf("%d", &n);
 for(int i=1;i<=n;i++) {
    for(int j=1;j<=n;j++) {
        if(j==i || j==n+1-i) {
            printf("*");
        } else {
            printf(" ");
        }
    }
    printf("\n");
 }*/
 //0 AND 1 TRIANGLE//
 /*for(int i=1;i<=3;i++) {
    for(int j=1;j<=i;j++){
        if(i%2!=0 && j%2!=0) {
            printf("1");
        } else if(i%2==0 && j%2==0) {
            printf("1");
        } else {
            printf("0");
        }
    }
     printf("\n");
 }*/
 //STAR TRIANGLE(OTHER CASE)//
 /*for(int i=1;i<=5;i++) {
    for(int j=1;j<=5-i;j++){
        printf("\t");
        
    }
    for(int k=1;k<=i;k++){
        printf("*\t");
    }
    printf("\n");
 }*/
 //STAR PYRAMID//
 /*int n;
 printf("enter no. of lines:");
 scanf("%d", &n);
 int x = 1;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        printf("\t"); 
    }
    for(int k=1;k<=x;k++){
        printf("*\t");
    }
    x += 2;
    printf("\n");
 }*/
 //NUMBER PYRAMID//
 /*int n;
 printf("enter no. of lines:");
 scanf("%d", &n);
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        printf("\t"); 
    }
    for(int k=1;k<=i;k++){
        printf("%d\t", k);
    }
    for(int x=i-1;x>=1;x--){
        printf("%d\t", x);

    }
    printf("\n");
 }*/
 //STAR DIAMOND//
 /*int n;
 printf("enter no. of lines:");
 scanf("%d", &n);
 int x = 1;
 int h = (n+1)/2;
 for(int i=1;i<=h;i++){
    for(int j=1;j<=h-i;j++){
        printf("\t"); 
    }
    for(int k=1;k<=x;k++){
        printf("*\t");
    }
    x += 2;
    printf("\n");
 }
 int y = h;
 for(int i=1;i<=h-1;i++) {
    for(int j=h;j<=h-1+i;j++) {
        printf("\t");
    }
    for(int k=1;k<=y;k++) {
        printf("*\t");
    }
    y-=2;
    printf("\n");
 }*/
    return 0;
}