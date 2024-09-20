#include <stdio.h>
#define MAXEXP 5
int main(){
    int n,sum,temp,term,factor,next,div,zp;
    sum=0;//continuous sum of mobious 
    zp=0; //zero points of the Mertens function
int stop=1; // var that's used for 10^MAXEXP
int start=1;//holds number of repetition

    for (int j=1;j<=MAXEXP;j++){
        stop*=10;
        for (int n=start;n<=stop+9;n++){
        div=0; //number of divisors
        start++;
                if (n%4==0 ||n%9==0){
                    
             if (sum==0){
        zp++;}
          if (n+9>=stop && n-9<=stop){
        printf ("Ξ(%d)= %d\n",n,sum);
        }
            continue;
        }
        temp=n;
        if (temp%2==0){
            temp/=2;
            div++;
        }
        if (temp%3==0){
            temp/=3;
            div++;
        }
        factor=5;
        next=0;
        while (factor*factor<=temp){
            if (temp%factor==0){
                temp/=factor;
                div++;
                if (temp%factor==0){
                    next=1;
                                   break;
                }
            }
            if (factor%6==5){
                factor+=2;
            }else{
                factor+=4;
            }
        }
      if (temp!=1){
        div++;
      }
            
if (next==0){
    
    if (div%2==0){
        sum++; //case of SF number with even number of divisors
    } else{
        sum-=1;//odd number of divisors
        
    }
     }
     if (sum==0){
        zp++;//found zero point
    }
    if (n+9>=stop && n-9<=stop){
        printf ("Ξ(%d)= %d\n",n,sum);
        }
if (n-9==stop && j<MAXEXP){
printf (".........\n");}
    }}
   // printf("\n");}
printf("\n");
    printf("Found %d zero points of the Mertens function\n", zp);
        printf("\n");
    printf("Checking numbers in the range [2,%d]",1000*zp );
     printf("\n");

   int abun, def,sum2;
      abun=0;
    def=0;
for (int n=2;n<=1000*zp;n++){
sum2=1; //1 divides all numbers
 temp=n;
factor=2;
        while (factor*factor<=temp){
         term=1;
   while(temp%factor==0){
                term=factor*term+1;
temp/=factor;
                
            }
sum2*=term;
if (factor==2){
factor=3;}else if (factor==3){
factor=5;}
           else if (factor%6==5){
                factor+=2;
            }else{
                factor+=4;
            }
        }
      if (temp!=1){
        sum2*=(temp+1);
      }
if (sum2-n>n){
abun++;}
else if (sum2-n<n){
def++; }
else{
printf("Found perfect number: %d\n", n);}
}
  

   
    printf("\n");
    printf("Found %d deficient numbers\n", def);
    printf("Found %d abundant numbers\n", abun);
    }

