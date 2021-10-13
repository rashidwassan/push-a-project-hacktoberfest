// takes the date and prints day
// input: 13 10 2021
// out: wednesday

#include<math.h>
#include<stdio.h>

typedef struct Date_ {
    int day;
    int month;
    int year;
}Date;


int calc_years(Date base_date,Date date){
    int x=abs(base_date.year-date.year);

    if(date.year<base_date.year)
    return x*365+(x/4-x/100+x/400);
    else if(date.year>base_date.year)
    return  x*365+((x-1)/4-(x-1)/100+(x-1)/400)+1;
    else return 0;

}


int calc_days(Date base_date,Date date){
        return date.day-base_date.day;
}

int calc_months(Date base_date,Date date){

    int c=1;
    int days1=0;

    for(int i=base_date.month;i<date.month;++i){
        if(i==2) {
                if(((date.year%4==0)&&(date.year%100!=0))||(date.year%400==0))
                    days1+=29;
                else
                    days1+=28;

                c=!c;
                continue;
                }

    if(c==1)days1+=31;
    else days1+=30;
    if(i!=7) c=!c;
    }
return days1;
}

int main (){

Date base_date={1,1,2000};
Date date;

while(1){

printf("enter -> (date month year): ");
scanf("%d%d%d",&date.day,&date.month,&date.year);

int days=0;

if(date.year<base_date.year) days=calc_years(base_date,date)-calc_days(base_date,date)-calc_months(base_date,date);
else days=calc_years(base_date,date)+calc_days(base_date,date)+calc_months(base_date,date);

printf("Days: %d\n",days);


if(date.year>=base_date.year){
switch(days%7){
case 0:{printf("saturday"); break;}
case 1:{printf("sunday"); break;}
case 2:{printf("monday"); break;}
case 3:{printf("tuesday"); break;}
case 4:{printf("wednesday"); break;}
case 5:{printf("thursday"); break;}
case 6:{printf("friday"); break;}
}
    }
else
{
    switch(days%7){
case 0:{printf("saturday"); break;}
case 1:{printf("friday"); break;}
case 2:{printf("thursday"); break;}
case 3:{printf("wednesday"); break;}
case 4:{printf("tuesday"); break;}
case 5:{printf("monday"); break;}
case 6:{printf("sunday"); break;}
}
    }


    printf("\n");
    //while loop end
}
return 0 ;
}
