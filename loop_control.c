#include<stdio.h>
#include<math.h>
/*int main()
{
    int p,n,count;
    float r,si;

    count=1;
    while (count<=3)
    {
        printf("\nenter values of p,n and r");
        scanf("%d %d %f",&p,&n,&r);
        si = p*n*r/100;
        printf("simple interest=Rs %f\n",si);
        
        count+=1;

    }
    return 0;
}

int main()
{
    int i=1;
    while(i<=10)
    i=i+1;
}
    
   int main()
   {
     int i=1;
     while(i<=10)
     {
        i=i+1;

     }
   }


int main()
{
    int i=1;
    while(i<=10)
      { printf("%d\n",i);

     i=i+1;}
    return 0;

}
    

    int main()
    {
        int i=5;
        while(i>=1)
        {
            printf("make the computer literate\n");
            i=i-1;
        }
    }
        
int main()
{
    float a=10.0;
    while(a<=10.5)
    {
        printf("Raindrops on rose...");
        printf("..and whiskers on kittens\n");
        a = a+0.1;
    }
    return 0;
}
    
int main()
{
    int i=1;
    while(i<=3277)
    {
        printf("%d\n",i);
        i = i+1;

    }
    return 0;
}
    
   int main()
   {
    int i=1;
    while(i<=10);
    {
        printf("%d\n",i);
        i = i+1;

    }
    return 0;
   }
    
   int main()
   {
    int i=1;
    while(i<=10)
    {
        printf("%d\n",i);
        i=i+1;

    }
    return 0;

   }
    
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n",i);
        i++;

    }
    return 0;
}
    
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n",i);
        i+=1;

    }
    return 0;

}
    
int main()
{
    int i=0;
    while(i++<10)
       printf("%d\n",i);
    return 0;
}
    
int main()
{
    int i=0;
    while(++i<=10)
       printf("%d\n",i);
    return 0;
}
    
//for loop

int main()
{
    int p,n,count;
    float r,si;

    for(count=1;count<=3;count= count+1)
    {
        printf("enter the values of p,n and r");
        scanf("%d %d %f",&p,&n,&r);

        si = p*n*r/100;
        printf("simple intrest =Rs %f\n",si);
        return 0;

        }
}
        

int main()
{
    int p,n,count=1;
    float r,si;

    while(count<=3)
    {
        printf("enter the values of p,n and r");
        scanf("%d %d %f",&p,&n,&r);

        si = p*n*r/100;
        printf("simple intrest =Rs %f\n",si);
        count += count;

        return 0;

        }
}
        
int main()
{
    int i=1;
    for(i=10;i;i--)
      printf("%d\n",i);
}
int main()
{
    int i=1,j;
    for(i<4;j=5;j=0)
     printf("%d",i);
}
     
int main()
{
    int i=1;
    for(i=1;i<=10;printf("%d",i++));
}
    
int main()
{
    int i=1;
    for(scanf("%d",&i);i<=10;i++)
        printf("%d",i);
}
        
int main()
{
    int i;
    for(i=1;i<=10;i=i+1)
        printf("%d\n",i);
    return 0;

}
int main()
{
    int i;
    for(i=1;i<=10;)
    {
        printf("%d\n",i);
        i=i+1;

    }
    return 0;
}
    
int main()
{
    int i=1;
    for(;i<=10;i=i+1)
      printf("%d\n",i);
    return 0;
}
    
int main()
{
    int i=1;
    for(;i<=10;)
    {
        printf("%d\n",i);
        i=i+1;

    }
    return 0;
}
    
int main()
{
    int i;
    for(i=0;i++<10;)
     printf("%d\n",i);
    return 0;
}
    
int main()
{
    int i;
    for(i=0;++i<=10;)
      printf("%d\n",i);
    return 0;

}
int main()
{
    int r,c,sum;
    for(r=1;r<=3;r++)
    {
        for(c=1;c<=2;c++)
        {
            //sum=r+c;
            //printf("r=%d c=%d sum=%d\n",r,c,sum);
            printf("r=%d c=%d sum=%d\n",r,c,r+c);

        }
    }
    return 0;
}
 //break
int main()
{
    int num,i;
    printf("enter the num\n");
    scanf("%d",&num);

    i=2;
    while(i<=num-1)
    {
        if(num%i==0)
        {
            printf("number is not prime number\n");
            break;

        }
        i++;
    }
    if(i==num)
      printf("prime number\n");
}
      

int main()
{
    int i=1,j=1;

    while(i++<=100)
    {
        while(j++<=200)
        {
            if(j==150)
               break;
            else
              printf("%d%d\n",i,j);
        }
    }
    return 0;
}
    

    //continue

    int main()
        {
            int i,j;
            for(i=1;j<=2;i++)
            {
               for(j=1;j<=2;j++)
               {
                  if(i==j)
                      continue;

                  printf("%d %d\n",i,j);
               }
            
            }
             return 0;
        }   
        
    
//do while

int main()
{
    do
    {
        printf("hello there\n");

    }while(4<1);

    return 0;
    
}

//odd loop
int main()
{
    char another;
    int num;
    do
    {
       printf("enter the num\n");
       scanf("%d",&num);
       printf("square of %d is %d\n",num,num*num);
       printf("want to enter another number y/n");
       scanf(" %c",&another);

    } while (another=='y');

    return 0;
    

}
//for odd loop
int main()
{
    char another='y';
    int num;
    for(;another=='y';)
    {
        printf("enter the num\n");
       scanf("%d",&num);
       printf("square of %d is %d\n",num,num*num);
       printf("want to enter another number y/n");
       scanf(" %c",&another);
    }
    return 0;
}

int main()
{
    char another='y';
    int num;

    while(another=='y')
    {
        printf("enter the num\n");
       scanf("%d",&num);
       printf("square of %d is %d\n",num,num*num);
       printf("want to enter another number y/n");
       scanf(" %c",&another);
    }
    return 0;
}

int main()
{
    int x=4,y,z;
    y=--x;
    z=x--;
    printf("%d%d%d\n",x,y,z);
    return 0;
}

int main()
{
    int x=4,y=3,z;
    z=x-- -y;
    printf("%d%d%d\n",x,y,z);
    return 0;

}
int main()
{
    int i;
    while(i=10)
    {
        printf("%d\n",i);
        i=i+1;
    }
    return 0;
}
int main()
{
    int x=4,y=0,z;
    while(x>=0)
    {
        x--;
        y++;
        if(x==y)
           continue;
        else
          printf("\n%d%d",x,y);

    }
    return 0;
}
    

    int main()
    {
        int num_employee=10,worked_time=40,working_time,count_employee;
        int paid_rate;
        
        printf("enter the working time of employee\n");
        scanf("%d",&working_time);

        if(working_time>worked_time)
        {
        for(count_employee=1;count_employee<=num_employee;count_employee++)
        {
            paid_rate=(working_time-worked_time)*12;
            printf("overtime paid to employee is %d\n",paid_rate);


        }
       }
        else
         printf("no overtime work\n");


    }

int main()
{
    int num,fact,factorial=1;

    printf("enter the non negative number number\n ");
    scanf("%d",&num);
    
    if(num>0)
    {
    for(fact=1;fact<=num;fact++)
       factorial *= fact;
    printf("factorial of  number is %d\n",factorial);
    } 
   else
   printf("invalid input\n");
}

int main()
{
    int num1,num2,power1,power2;

    printf("enter the two number num1,num2\n");
    scanf("%d%d",&num1,&num2);

    power1= pow(num1,num2);
    power2= pow(num2,num1);

    printf("num2 is power of num1 %d\n",power1);
    printf("num1 is power of num2 %d\n",power2);

    return 0;
    
}
    

int main()
{
    int num=0;
    char alpha;

    while(num<=255)
    {
      alpha=num;
      printf("ascii value of %d is %c\n",num,alpha);

      num ++;
    }
    return 0;
}
int main()
{
    int num,remainder;

    for(num=1;num<=500;num++)
    {
        remainder=pow(num/100,3)+pow(num%100/10,3)+pow(num%10,3);
        if(num==remainder)
        printf(" %d number is armstrong number\n ",num);
        else
        printf(" %d not an armstrong number result is %d\n",num,remainder);

    }

    

    
    return 0;
}
   
int main()
{
    int matchstick=21,user_chooice,computer;

    printf("welcome to the user-computer matchstick game\n");
    printf("Rules: pick up the drumstick 1,2,3 or 4 and who pick last matchstick they can loose\n");

    while(matchstick>1)
    {
        printf("current matchstick: %d\n",matchstick);
        printf("your turn pick 1-4: ");
        scanf("%d", &user_chooice);

        if(user_chooice<1 || user_chooice>4 ){
            printf("invalid input : please follow the rules\n");
            continue;
        }
      
        matchstick -= user_chooice;

        computer = 5-user_chooice;
        printf("computer picks : %d\n",computer);

        matchstick -= computer;
        printf("remain matchstick : %d\n",matchstick);

    }

    printf("remaining matchstick: 1\n");
    printf("you are forced to pick the last matchstick : ou loose\n");

    return 0;

}

int main()
{
    int num,i,user_num,negative;

    printf("number of times user want enter the number\n");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        printf("enter the number\n");
        scanf("%d",&user_num);

        if(user_num<0){
        negative=user_num;
      printf("%d number is negative \n",negative);
    }
    else if(user_num==0)
    printf("entered number is zero\n");
    else
      printf("%d is positive number\n",user_num);
    }
    

    return 0;
    
    
}

int main()
{
    int num,remainder,octal=0,i=1;
 
    printf("enter the number\n");
      scanf("%d",&num);
    while(num!=0)
    {
      remainder=num%8;
      octal += remainder*i;
      num /= 8;
      i*=10;

    }
    printf("octal value of num is %d\n",octal);
    return 0;

}
int main()
{
    int arr_size,difference,i,max,min;

    printf("enter the size of arry\n");
    scanf("%d",&arr_size);
    int arr[arr_size];

    printf("enter the elements of array\n");
    for(i = 0;i<arr_size;i++)
        {scanf("%d",&arr[i]);
        }

    max = arr[0];
    min = arr[0];

    for(i=1;i<arr_size;i++)
     {if(arr[i]>max)
       max = arr[i];
      if(arr[i]<min)
       min = arr[i];
}

difference = max-min;

printf("the smallest number is %d\n", min);
printf("the lasgest number is %d\n",max);
printf("the difference between the %d and %d is %d \n",max,min,difference);

return 0;

}

int main()
{
    int i;
    for(i=1;i<=5;printf("%d\n",i))
      i++;
    return 0;
}

int main()
{
    int i=1,j=1;
    for(;;)
    {
        if(i>5)
          break;
        else
          j +=i;
        printf("%d\n",j);
        i+=j;
    return 0;
    }
}
    
int main(){
    int i=1;
    while(1)
    {
        i++;

    }
}
    
int main()
{
    for(;;); 
}
    
int main()
{
    int True=0,false;
    while(True)
    {
        False=1;
    }
}
    
int main()
{
    int y,x=0;
    do
    {
        y=x;
        
        
    } while (x==0);
    
}

int main()
{
    int x=10,y=100%90;
    for(i=1;i<=10;i++);
    if(x!=y);
      printf("x=%dy=%d\n",x,y);
    return 0;


}

int main()
{
    int num;

    for(num=0;num<=300;num++)
    {
        if(num%2==0)
          continue;
        if(num%3==0)
          continue;
        if(num%5==0)
          continue;
        else
          printf("%d is a prime number\n",num);
    }
    return 0;
}

int main()
{
    int i,flag,num,max=300;

    for(num=1;num<=max;num++)
    {
        flag = 0;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
             {flag=1;
            break;
             }
            
        }
        if(flag==0 && num!=1)
          printf("%d\n",num);

    }


}

int main()
{
    char x,y;

    for(y=1;y<=25;y++)
     {
        for(x=1;x<80;x++)
        {
            printf("%c",1);

        }
     printf("\n");
     }
  return 0;
}
int main()
{
    int num=7;
    long long factorial=1,i;
    double series;
    double sum=0.0;
    
    
    for(i=1;i<=num;i++)
    {
        factorial *= i;
        series = (double)i/factorial;
        sum += series;
        

    }
    printf("sum of series is %f\n",sum);
    return 0;


}
int main()
{
    int num=7;
    int factorial=1,i;
    float series;
    float sum=0.0;
    
    
    for(i=1;i<=num;i++)
    {
        factorial *= i;
        series = (double)i/factorial;
        sum += series;
        printf("%f + ", series);
        

    }
    printf("sum of series is %f\n",sum);
    return 0;


}

int main()
{
    int i,j,k;

    for(i=1;i<=3;i++)
    {
      for(j=1;j<=3;j++)
      {
        for(k=1;k<=3;k++)
        {
            if(i!=j && j!=k && i!=k)
              printf("(%d,%d,%d)\n",i,j,k);
        }
      }
    }
    return 0;
}

int main()
{
    int i,j,k;
    int num=7;
    for(i=num;i>=1;i--)
    {
        for(j=1;j<=i;j++){
            printf("%c ", 64+j);
        }

        for(k=1;k<(num-i)*2;k++){
            printf("  ");
        }
        for(j=i;j>=1;j--){
            if(j==7 && i==7) continue;
         printf("%c ", 64+j);
        }
       printf("\n");
    }
    return 0;
}
int main()
{
    int i,num=1,j,k,n=4,space;

    for(i=1;i<=n;i++)
    {
        for(space=1;space<=n-i;space++)
        {
            printf("  ");
        }

        for(j=1;j<=i;j++)
        {
            printf("%d   ",num);
            num++;
        }
        printf("\n");
    }
}
int main()
{ int i,j,n=5,coff=1,space;

    for(i=0;i<n;i++)
    {
        for(space=1;space<=n-i;space++)
        {
            printf("  ");
        }
         coff=1;
        for(j=0;j<=i;j++)
        {
            printf("%4d",coff);
            coff=coff*(i-j)/(j+1);
        }
        printf("\n");
    }

}
int main()
{
    int num,n,i;
    
    printf("enter the number user want to know table\n");
    scanf("%d",&num);

    for(i=1;i<=10;i++)
    {
        n=num*i;
        printf("table of %d is ",num);
        printf("%d * %d = %d\n",num,i,n);
    }
    return 0;

}
int main()
{
    int y,n;
    float i,x;
    printf("human inteligence level\n");

    for(y=1;y<=6;y++)
    {
        for(x=5.5;x<=12.5;x+=0.5)
        {
            i=2+(y+0.5*x);
            printf("level %d  ",n);
            printf("%f\n",i); 
            n++;
        }
    }
}

int main()
{
    int cost=6000,slavage=2000,earning=1000;
    int i;
    float pw,rate=0.12;
    int n=1;
   
    while(1){
        pw=0;
        for(i=1;i<=n;i++){
        
            pw += earning/pow(1+rate,i);
    }

    pw += slavage/pow(1+rate,n);

    if(pw>=cost){
        printf("minimum life of machine = %d\n",n);
        break;
    }
    n++;
     }
     return 0;
}
int main()
{
    int r,n,p,i;
    float a,q;

    for(i=1;i<=10;i++)
    {
        printf("enter the intrest compound q ,anual rate r ,years and  principle p\n");
        scanf("%f %d %d %d",&q,&r,&p,&n);
        a=p*pow((1+r/100*q),n*q);
        printf("amount of %d year is %f\n",i,a);
    }
    return 0;
}
int main()
{
    int i;
    float log,x;


    printf("enter the value of x\n");
    scanf("%f",&x);
    log += (x-1)/x;
    for(i=1;i<=7;i++)
    {
       
        log += 1/2*pow(((x-1)/x),i+1);

    }
    printf(" sum of first seven term in series is %f\n",log);
    return 0;
}
int main()
{
    int i,hyp,j,a,b,c,hb;

    for(a=0;a<=30;a++)
    {
      for(b=0;b<=30;b++)
      {
        for(c=0;c<=30;c++){
        hyp = c*c;
        hb =(a*a)+(b*b);
        if(hyp==hb)
        printf("(%d , %d, %d)\n",a,b,c);
      }
    }
    
}
return 0;
 }
int main()
{
    int i,present=100000;
    for(i=2026;i>=2016;i--)
    {
        printf("population in %d year is %d\n",i,present);
        present -= 100000*0.1;

    }
    return 0;
}
int main()
{
    int sum1,sum2;
    int a,b,c,d;

    for(a=1;a<=50;a++)
    {
      for(b=a;b<=50;b++)
      {
        sum1=a*a*a + b*b*b;
        for(c=1;c<=50;c++)
        {
            for(d=c;d<=50;d++)
            {
                sum2=c*c*c + d*d*d;
                if(sum1==sum2 && (a!=c || b!=d))
                printf("%d = %d^3 + %d^3 = %d^3 + %d^3 \n",sum1,a,b,c,d);
            }
        }
      }
    }
    return 0;
}
int main()
{
    int i;
    for(i=00;i<=23;i++)
    {
        if(i==00)
        printf("midnight\n");
        if(i>00 && i<12)
        printf("%d AM\n",i);
        if(i==12)
        printf("noon\n");
        if(i>12)
        printf("%d PM\n", i-12);
    }
    return 0;
}
int main()
{
    float la, total=0,emi,remain,mon_intrest,intrest,pay;
    int i,number_m;
    
    printf("enter the loan amount\n");
    scanf("%f",&la);
    printf("enter the number_m\n");
    scanf("%d",&number_m);
    printf("rate of intrest per month i persentage \n");
    scanf("%f",&intrest);

    emi = la/number_m;
    remain = ((intrest/100)*la*number_m)+la;

    for(i=1;i<=number_m;i++)
    {
        printf("month %d\n",i);
        mon_intrest=(intrest/100.0)*la;
        pay= emi+mon_intrest;
        total += mon_intrest+emi;
        remain -= pay;
        printf("paying amount %f\n",pay);
        printf("tatal amount paid %f\n",total);
        printf("princple amount %f\n",la);
        printf("intrest is %f\n",mon_intrest);
        printf("remain amount %f\n",remain);

    }
   return 0;

}*/