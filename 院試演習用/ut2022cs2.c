#include<stdio.h>
#include<stdlib.h>
// q2
int w,x,y,z;
int multfrac(int k,int l, int m){
    return (k*l+(m-1))/m;
}

void compare_swap(int *p,int *q){
    if(*p>*q){
        int tmp=*p;
        *p=*q;
        *q=tmp;
    }
}

void mysort (int a[],int i, int j){
    int k=j-i;
    if(k<4){
         if(k==3){
            compare_swap(&a[i],&a[i+1]);
            compare_swap(&a[i],&a[i+2]);
            compare_swap(&a[i+1],&a[i+2]);
         }
         if(k==2)compare_swap(&a[i],&a[i+1]);
         }
         else{
            mysort(a,i,i+multfrac(k,x,w));
            mysort(a,j-multfrac(k,y,w),j);
            mysort(a,i,i+multfrac(k,z,w));
         }
}

int main(void){
    w=4;x=3;y=3;z=3;
    int n;
    int a[10];
    int p,q;
    scanf("%d%d%d",&n,&p,&q);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);

    mysort(a,p,q);
    // swap(&a[1],&a[3]);
    for(int i=0;i<n;i++)printf("%d",a[i]);
}
