#include<stdio.h>
#include<math.h>
#include<stdbool.h>
/*int main()
{
    int num;

    printf("enter a number less then 10");
    scanf("%d",&num);

    if(num<10)
        printf("what an obedient servent you are !\n");

    return 0;

}

int main()
{
    int qty,dis=0,a;
    float rate,tot;
    printf("enter quantity and rate");
    scanf("%d%f",&qty,&rate);

    if(qty>1000)
         dis=10;

    tot=(qty*rate)-(qty*rate*dis/100);
    printf("total expenses = Rs. %f\n",tot);

    if(3+2%5)
      printf("this works\n");
    
    if (a=10)
       printf("even this works/n");

    if(-5)
      printf("surprisingly even this works/n");   

    return 0;

}

int main()
{
    int bonus,cy,yoj,yos;

    printf("enter current year and year of joining");
    scanf("%d%d",&cy,&yoj);

    yos=cy-yoj ;

    if(yos>3)
    {
        bonus=2500;
        printf("bonus=Rs. %d\n",bonus);

    }
    return 0;
}

int main()
{
    float bs,gs,da,hra;

    printf("enter basic salary");
    scanf("%f",&bs);

    if(bs<1500)
    { 
        hra=bs*10/100;
        da=bs*90/100;
    }
    else
    {
        hra=500;
        da=bs*98/100;
    }

    gs=bs+hra+da;
    printf("gross salary = Rs. %f\n",gs);
    return 0;
}


int main()
{
    int i;

    printf("enter either 1 or 2");
    scanf("%d",&i);

    if(i==1)
       printf("you would go to heven !\n");
    else
    {
        if(i==2)
            printf("hell was created with you in mind\n");
        else
            printf("how about mother earth !\n");

    }
}

int main()
{
    int m1,m2,m3,m4,m5,per;

    printf("enter marks in five subject");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)*100/500;

    if(per>=60)
      printf("first division");
    else
    {
        if(per>=50)
          printf("second division");
        else
        {
            if(per>=40)
               printf("third division\n");
            else
               printf("Fail\n");   
        }
    }
    return 0;
    }
    

    int main()
{
    int m1,m2,m3,m4,m5,per;

    printf("enter marks in five subject");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)*100/500;

    if(per>=60)
      printf("first division");
    
    if((per>=50)&&(per<60))
         printf("second division\n");

    if((per>=40)&&(per<50))
       printf("third division\n");
       
    if(per<40)
      printf("Fail\n");
    
    return 0;
    }

     int main()
{
    int m1,m2,m3,m4,m5,per;

    printf("enter marks in five subject");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)*100/500;

    if(per>=60)
      printf("first division");
    
    else if(per>=50)
      printf("second division\n");

    else if(per>=40)
       printf("third division\n");

    else
      printf("Fail\n");
      
    
    return 0;
    }

    int main()
    {
        char sex,ms;
        int age;

        printf("enter the age,sex and ms");
        scanf("%d%c%c",&age,&sex,&ms);

        if(ms=='M')
            printf("driver is insured\n");

        else
        {
            if(sex=='M')
            {
                if(age>30)
                    printf("driver is insured\n");
                else
                    printf("deiver is not insured\n");
            }
            else
            {
                if(age>25)
                    printf("dirver is insured\n");
                else
                    printf("driver is not inusured\n");
            }
        }    
        return 0;
    }

int main()
{
    char sex,ms;
    int age;

    printf("enter age,sex and ms");
    scanf("%d %c %c", &age, &sex, &ms);

    if((ms=='M') || (ms=='U' && sex=='M' && age>30) || (ms=='U' && sex=='F' && age>25))
       printf("driver is insured\n");
    else
       printf("driver is not insured\n");

    return 0;   
}
int main()
{
    char g;
    int yos,qual,sal=0;
    
    printf("enter gender ,years of service and qualification (0=G,1=PG)");
    scanf("%c%d%d", &g, &yos, &qual);

    if(g=='m' && yos>=10 &&qual==1)
      sal=15000;
    else if(g=='m' && yos>=10 && qual==0)
      sal=10000;
    else if(g=='m' && yos<10 && qual==1)
      sal=10000;
    else if(g=='m' && yos<10 && qual==0)
      sal=7000;
    else if(g=='f' && yos>=10 && qual==1)
      sal=12000;
    if(g=='f' && yos>=10 && qual==0)
      sal=9000;
    else if(g=='f' && yos<10 && qual==1)
      sal=10000;
    else if(g=='f' && yos<10 && qual==0)
      sal=6000;

    printf("\nsalary of Employee = %d\n",sal);
    return 0;
    
}

int main()
{
  int i;
  printf("enter value of i ");
  scanf("%d", &i);

  if(i==5);
    printf("you entered  5\n");
  
  return 0;  
  
}

int main()
{
  int x,y;
  scanf("%d",&x);
  y=(x>5?3:4);
  printf("%d",y);
}

int main()
{
  char a;
  int y;
  scanf("%c",&a);
  y =( (a>=65 && a<= 90 ? 1:0);
  printf("%d",y);
}

int main()
{
  int i;
  scanf("%d",&i);
  (i==1 ? printf("Amit"):printf("All and sundry"));
}

int main()
{
  char a='z';
  printf("%c",(a>='a'?a:'!'));
}

int main()
{
  int big,a,b,c;
  big= (a>b?(a>c?3:4):(b>c?6:8));

}

int main()
{
  int a=300,b,c;
  if(a>=400)
     b=300;
  c=200;
  printf("%d%d\n",b,c);
  return 0;

}

int main()
{
  int a=500,b,c;
  if(a>=400)
     b=300;
  c=200;
  printf("%d%d\n",b,c);
  return 0;
}
  

int main()
{
  int x=10,y=20;
  if(x==y);
    printf("%d%d\n",x,y);
  

}
 int main()
 {
  int x=3;
  float y=3.0;
  if(x==y)
    printf("x and y are equal\n");
  else
    printf("x and y are not equal\n");
  return 0;
 }
  
  int main()
  {
    int x=3,y,z;
    y=x=10;
    z=x<10;
    printf("x=%dy=%dz=%d\n",x,y,z);
    return 0;

  }
    


  int main()
 {
  int i=65;
  char j='A';
  if(i==j)
       printf("c is wow\n");
  else
    printf("C i a headache\n");
  return 0;

 } 
  

 int main()
 {
  if('X'<'x')
      printf("ascii value of X is grater then x\n");
}

int main()
{
  int x=10,y=15;
  if( x%2 == y%3 )
     printf("Carpthians\n");
  
}

int main()
{
  int x=30,y=40;
  if(x == y)
     printf("x is equal to y\n");
  else if(x>y)
    printf("x is grater than y\n");
  else if(x<y)
    printf("x is less than y\n");
  return 0;
  }

int main()
{
  int cp,sp;
  
  printf("enter the cost price and selling price");
  scanf("%d %d",&cp,&sp);
  
  if(sp>cp)
    printf("profit: %d",sp-cp);
  else
    printf("loss: %d",cp-sp);
  return 0;

}

int main(

  printf("enter a integer number");
  scanf("%d",&number);

  if(number%2==0)
    printf("even number");
  else
    printf("number is odd");
  return 0;

}

int main()
{
  int year;

  printf("enter the current year");
  scanf("%d",&year);

  if(year%4==0)
    printf("l"eap year");
  else
    printf("not a leap year");
  return 0;


}

//gregoroan calender 
int main()
{
  int yr, ref_yr=1,diff,lpyr = 0 ,td,day,nmyr,i;

  printf("enter the year which you want to know the i day of year");
  scanf("%d",&yr);

  diff=yr-ref_yr;

  if(yr< 1)
    printf("please enter the year of 1 ad or latter.\n");
  
  
  for (i=1;i<yr;i++)
   {
    if((yr % 4 == 0 && yr % 100 != 0) || (yr%400 == 0)){
      lpyr++;
    }

    nmyr=diff-lpyr ;

    td=nmyr*365+lpyr*366;

    day = td%7;

    if(day==0)
     printf("\n the day on january 1st of year was mondey,\n :%d",yr);
    else if(day == 1)
     printf("the day on january 1st of year was tuesday\n : %d",yr);
     else if(day == 2)
      printf("the day on january 1st of year was wedneday\n : %d",yr);
    else if(day == 3)
      printf("the day on january 1st of year was thurday\n : %d",yr);
    else if(day == 4)
      printf("the day on january 1st of year was friday\n : %d",yr);
    else if(day == 5) 
      printf("the day on january 1st of year was staurday\n : %d",yr);
    else
     printf("the day on january 1st of year was sundey\n : %d",yr);
  
     return 0;

    } 
    

 int main()
 {
  int num,revnum,remainder,n;

  printf("enter the five digit number");
  scanf("%d",&num);

  n=num;

  while(num != 0){
    remainder= num % 10;
    revnum=revnum*10+remainder;
    num/=10;
  }

  if(n==revnum)
    printf("reverse number and original number is same:\n %d",revnum);
  else
    printf("reverse number is \n%d",revnum);
 }


int main()
{
  int ram_age,shyam_age,ajay_age;

  printf("enter the age of ram ,shyam and ajay\n");
  scanf("%d %d %d",&ram_age,&shyam_age,&ajay_age);


   // if(ram_age<shyam_age){
    //if(ram_age<ajay_age)
      //printf("ram is an younger\n");
    //else if(ajay_age<shyam_age)
      //printf("ajay is younger");
  //}
  //if(shyam_age<ram_age)
  //{ 
    //if(shyam_age<ajay_age)
    //  printf("shyam is younger");
    //else if(ajay_age<shyam_age)
      //printf("ajay is younger");
    
  //}


  if(ram_age<shyam_age && ram_age<ajay_age)
   printf("ram i younger");
  else if(shyam_age<ram_age && shyam_age<ajay_age)
  printf("shyam is younger");
  else 
   printf("ajay is younger");


}

int main()
{
  int t1,t2,t3;

  printf("enter the three side angle in degree\n");
  scanf("%d %d %d",&t1,&t2,&t3);

  if(t1+t2+t3==180)
   printf("this is valed triangle\n");
  else
   printf("invalid triangle");
  return 0;
  }




int main()
{
  int num,absnum;

  printf("enter the number \n");
  scanf("%d",&num);

  //if(num<0){
    //num=-num;
    //printf("%d",num);
  //}
  //else
   //printf("%d",num);

  //absnum=abs(num);

  //printf("absolute value of number is %d",absnum);

}
  

  
int main()
{
  int length,breadth,area_of_rec,parameter_of_rec;

  printf("enter the length and breadth of rectangle\n");
  scanf("%d %d",&length,&breadth);

  area_of_rec=length*breadth;
  parameter_of_rec=length+breadth;

  if (area_of_rec>parameter_of_rec)
    printf("its area is grater then parameter\n");
  }



int main()
{
  int x1,x2,x3,y1,y2,y3;

  printf("enter the points (x,y)\n");
  scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);

  if(x1==y1 && x2==y2 && x3==y3)
   printf("all points in same line or x=y graph make");
   else
    printf("all points not in same line");
}


int main()
{
  float center_x,center_y,radius,coord_x,coord_y;
  float squrt_coord,squrt_radius;

  printf("enter the  center coordinates of point (x,y) \n");
  scanf("%f %f",&center_x,&center_y);

  printf("enter the radius of circle\n");
  scanf("%f",&radius);

  printf("enter the coordinates of circle (x,y)\n");
  scanf("%f %f",&coord_x,&coord_y);

  squrt_coord=((coord_x-center_x)*(coord_x-center_x))+( (coord_y-center_y)*(coord_y-center_y));

  squrt_radius=radius * radius ;

  if(squrt_coord<squrt_radius)
   printf("coordinates in the circle\n");
  else if(squrt_coord==squrt_radius)
   printf("coordinates on the circle\n");
  else
  printf("coordinates outside the circle\n");
   

}

int main()
{
  int x,y;

  printf("enter the coordinates of circle (x,y) \n");
  scanf("%d %d",&x,&y);

 if(x==0 && y!=0)
 printf("point lies on the y-axis\n");
 else if(y==0 && x!=0)
  printf("point lies on x-axis\n");
 else if(x==0 && y==0)
  printf("point on the origin\n");
 else
  printf("neither in x-axis,y-axis nor in origin\n");

 
}

int main()
{
  int year;

  printf("enter the year to know leap or not leap year\n");
  scanf("%d",&year);

  if(year%4==0 && year%100 != 0 || year%400 == 0)
   printf("year is leap year");
  else 
  printf("not an leap year ");
}
  
  
 int main()
 {
  char char_enter;

  printf("enter the charater\n");
  scanf("%c",&char_enter);

  if(char_enter >= 65  && char_enter<=90)
  printf("charater is in captial latter\n");

  else if(char_enter>=97 && char_enter<=122)
   printf("charater is in smaller case");

else if(char_enter>=48 && char_enter<=57)
 printf("charater is number\n");

 else if(char_enter>=0 && char_enter<=47 || char_enter>=58 && char_enter<=64 || char_enter>=91 && char_enter<=96 || char_enter>=123 && char_enter<=127)
  printf("charater is special symbol\n");

  return 0;
 }

 int main()
 {
  int hardness;
  float carbon,tensile;

  printf("enter the hardness,carbon,tensile strength of steel\n");
  scanf("%d %f %f",&hardness,&carbon,&tensile);

  if(hardness>50 && carbon<0.7 && tensile>5600)
   printf("Grade 10 steel\n");
  else if(hardness>50 && carbon<0.7)
   printf("Grade 9 steel\n");
  else if(carbon<0.7 && tensile>5600)
   printf("Grade 8 steel\n");
  else if(hardness>50 && tensile>5600)
   printf("Grade 7 steel\n");
  else if(hardness>50 || carbon<0.7 || tensile>5600)
   printf("Grade 6 steel\n");
  else
   printf("Grade is 5\n");
 }
   

   int main()
   {
    int days;

    printf("entered the number of days you can keep the book\n");
    scanf("%d",&days);

    if(days<=5)
     printf("fine of book is 50 paise");
    else if(days>=6 && days<=10)
     printf("fine is one rupee");
    else if(days>10 && days<=30)
     printf("fine is 5 rupee");
    else
    printf("your membership is cancelled");
  
    return 0;
   }
  
 int main()
 {
  int side1,side2,side3;

  printf("enter the side1,side2,side3 of triangle\n");
  scanf("%d %d %d",&side1,&side2,&side3);

  if(side1+side2>side3 && side1+side3>side2 && side2+side3>side1)
  printf("triangle is valid\n");
  else
  printf("triangle is not valid\n");

  return 0;
 }

 int main()
 {
  int side1,side2,side3;

  printf("enter the side1,side2,side3 of triangle");
  scanf("%d %d %d",&side1,&side2,&side3);

  if(side1==side2!= side3 || side2==side3!=side1|| side1==side3!= side2)
  printf("triangle is isoceles\n");
  else if(side1==side2==side3)
  printf("triangle is equilaterl trianglre");
  else if(side1!=side2!=side3)
  printf("triangle is scalene triangle");
  else 
  printf("triangle is right angle triangle");

  return 0;

 }
  
 int main()
 {
  int time;

  printf("enter the time taken by worker to complete the work\n");
  scanf("%d",&time);

  if(time>=2 && time<3)
  printf("wotrker is highly efficient\n");
  else if(time>=3 && time<4)
  printf("worker is ordered to improve");
  else if(time>=4 && time<5)
  printf("workers given traning to improve his speed");
  else if(time>5)
  printf("worker is terminate");
  return 0;
  
 }
  
 
  int main()
  {
   int weight;

   printf("enter the weight of boxer\n");
   scanf("%d",&weight);

   if(weight<115)
   printf("flyweight\n");
   else if(weight>=115 && weight<=121)
   printf("bantamweight");
   else if(weight>=122&& weight<=153)
   printf("Featherweight");
   else if(weight>=154 && weight<=189)
   printf("Middleweight");
   else if(weight>=190)
   printf("Heavyweight");
   

  }

  int main()
  {
    int stock =500,order;
    char credit;

    printf("give product order to company\n");
    scanf("%d",&order);

    printf("how was credit score (g/b): \n");
    scanf(" %c",&credit);

    if(credit== 'b' || credit=='B')
    printf("supply credit is not good");
    else if(credit== 'g' || credit=='G')
        if(order<=stock){
      printf("supply his requirement\n");
      stock -= order;
      }
        else
     {printf("order partial : supply %d items (in stock). \n",stock);
     printf("intimate : remaining shippment later. \n");
     stock=0;
     }
    else 
    printf("invalid credit status entered .\n");

    printf("remaining atoock: %d\n", stock);
    return 0;
  }
 
int main()
{
  double int r;
  double  int g;
  double int b;
  float C,M,Y,K,W;

  printf("enter the value r,g,b \n");
  scanf("%d %d %d",&r,&g,&b);

  W= double max(r/255,g/255,b/255);
  C=(W-r/255)/W;
  M=(W-g/255)/W;
  Y=(W-b/255)/W;
  K=1-W;

  if(r=0,g=0,b=0,C=0,M=0,Y=0)
  {
    K=1;
  }
  
  printf("%f %f %f %f %f",W,C,M,Y,K);
  return 0;


}
  

int main()
{
  int date,month;

  printf("enter the month january to december in numbers (1 to 12) and date of birth \n");
  scanf(" %d %d",&month,&date);

  if((month == 12 && date>=22) || (month == 1 && date<=19) )
   printf("your zodiac sign is capricorn\n");
  else if((month == 1 && date>=20 ) || (month ==2 && date<=17 ))
    printf("your zodiac sign is aquarious\n ");
  else if((month == 2 && date>=18 || month == 3 && date<=19))
   printf("your zodiac sign is pisces\n");
  else if((month == 3 && date>=20 || month== 4 && date<=19))
   printf("your zodiac sign is Aries ");
  else if((month == 4 && date>=20) || (month == 5 && date<=20))
   printf("your zodiac sign is Taurus\n");
  else if((month == 5 && date>=21 || month==6 && date<=20))
   printf("your zodiac sign is Gemini\n");
  else if((month == 6 && date>=21 ) || (month == 7 && date<=22))
   printf("your zodiac sign is Cancer\n");
  else if((month == 7 && date>=23 )|| (month == 8 && date<=22))
   printf("your zodiac sign is Leo\n");
  else if(( month == 8 && date>=23) || (month == 9 && date<=22))
   printf("your zodiac sign is Vigro\n");
  else if((month == 9 && date>=23) || (month == 10 && date<=22))
   printf("your zodiac sign is Libra \n");
  else if((month == 10 && date>=23) || (month == 11 && date<=21))
   printf("your zodiac sign is Scorpio\n");
  else if((month == 11 && date>=22) || (month == 12 && date<=21))
   printf("your zodiac sign is Saittarrius\n");
  else 
   printf("your input idate and month is not valid \n");

   return 0;

}
   
  int main()
  {
    int weight;
    float bmi,height;
    
    printf("enter the weight (in kg) and height (in meters) \n");
    scanf("%d %f",&weight,&height);

    bmi=weight/(height*height);

    if(bmi<15)
     printf("starvation\n");
    else if(bmi>=15.1 && bmi<=17.5 )
     printf("Anorexic\n");
    else if(bmi>=17.6 && bmi<=18.5)
     printf("underweight\n");
    else if(bmi>=18.6 && bmi<=24.9)
    printf("ideal\n");
    else if(bmi>=25 && bmi<=25.9)
     printf("overweight\n");
    else if(bmi>=30 && bmi<=30.9)
     printf("obese\n");
    else
     ("morbidly obese\n");
    
    return 0;

  }
 
  //errors

int main()
{
  int tag =0,code=1;
  if(tag==0)
   (code>1 ? printf("hello\n")? printf("hi\n"));
  else 
   printf("hello hi\n");
  return 0;
}


int main()
{
  int j=65;
  printf("j>=65 ? %d : %c\n",j);
  return 0;
}
 
int main()
{
  int i=10,j;
  i>=5?(j=10):(j=15);
  printf("%d%d\n",i,j);
  return 0;
 }
  //conditional operator
int main()
{
  int x=10,y=20;
  x==20 && y!=10?printf("True\n"):printf("False\n");
  return 0;

}
  
 int main()
 {
  int x,min,max;
  scanf("%d%d",&max,&x);
  x>max?(max=x):(min=x);
  return 0;
 }
int main()
{
  int code;
  printf("enter the code");
  scanf("%d",&code);

  code>1?printf("jerusale\n"):(code<1?printf("Eddie\n"):printf("c Brain\n"));
  return 0;

}
int main()
{
  float sal;
  printf("entr the salary");
  scanf("%f",&sal);
  sal>=25000 && sal<=40000?printf("manager\n"):(sal>=15000 && sal<25000?printf("accoutant\n"):printf("clerk\n"));
  return 0;
} 

int main()
{
  char alpha;

  printf("enter the alphabet\n");
  scanf(" %c",&alpha);

  alpha>=97 && alpha<=122?printf("alphabet is in lowercase\n"):printf("not a lower case alphabet\n");


}

int main()
{
  char special;

  printf("enter the symbol\n");
  scanf(" %c",&special);

  ((special>=0 && special<=47) || (special>=58 && special<=64) || (special>=91 && special<=96) || (special>=123 && special<=127))?printf("special symbol\n"):printf("not a special symbol\n");
  return 0;
}

  int main()
  {
    int year;

    printf("enter the year\n");
    scanf("%d",&year);

    (year%4==0 && year%100!=0 ) || year%400==0 ? printf("leap year\n"):printf("not a leaap year\n");
    return 0;
  }*/
 int main(){
  int a,b,c;

  printf("enter the value of a,b,c\n");
  scanf("%d%d%d",&a,&b,&c);

  a>b?(a>c?printf("a is gratest "):printf("c is gratest")):(b>c?printf("b is gratest"):printf("c is gratest\n"));
  return 0 ;
 }