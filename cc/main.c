
#include <time.h>
#include <stdio.h>
#include <string.h>


int main()
{
    
    
    int iix=0,iii=0,ii=0,i=0,geth=0;
    int syy=-1,smm=-1,sdd=-1;
    int dd,mm,yy,ddp,mmp,yyp;
//    char ch;
    
//    printf("输入开始时间:\n");
    printf("\t\t\t\t欢迎使用时间消耗统计系统！\n");
    printf("输入出生日期\n");
    printf("\t\t年:");scanf("%d",&yy);
    printf("\t\t月:");scanf("%d",&mm);
    printf("\t\t日:");scanf("%d",&dd);
   
    
//    printf("指定结束日期\t请输入 A \n到今日结束 \t输入任意字符\n\n");
//    scanf("%s",&ch);
    
    
//    printf("每天__");for(i=0;i<80;i++)scanf("%s",&ch2[i]);
    
    printf("\n每天花费了__小时在睡觉上  ");scanf("%d",&geth);
    
    
    
//    
//    if(ch=='a'||ch=='A'){
//
//        printf("\n输入结束时间:\n");
//        printf("年:");scanf("%d",&yyp);
//        printf("月:");scanf("%d",&mmp);
//        printf("日:");scanf("%d",&ddp);
//
//    }
//  else {
//  
      ///////////////////////////////////////////
          time_t timep;
          struct tm *p;
          time(&timep);
          p =localtime(&timep);
          yyp=1900+p->tm_year;
          mmp=1+p->tm_mon;
          ddp=p->tm_mday;
      
//          printf("\n当前系统时间%d年%d月%d日\n\n",yyp,mmp,ddp);
    
      ///////////////////////////////////////////
      

  
  
//  }
   
    
    ///////////////////////////////////////////
    
    for (i=yy ; i <= yyp; ++i) //年循环，初值为输入年份yy，直到小于等于结束年份，结束循环
    {
        
        
        for (ii=(syy==-1?mm:1); ii <= ((i+1)>yyp?mmp:12); ++ii)
            //月循环，初值当年第一次循环时，值为输入月份否则从1开始，
            //直到当最后一次循环时小于结束月份，其余小雨12
        {
            
            switch(ii){
                case 1:case 3:case 5:case 7:case 8:case 10:case 12:iix= 31 ; break;
                case 4:case 6:case 9:case 11:iix=30 ;break;
                case 2: iix=((i%4==0&&i%100!=0)||i%400==0)?29:28;break;
            }
            for (iii =(smm==-1?dd:1); iii <=((ii+1)>((i+1)>yyp?mmp:12)?ddp:iix) ; ++iii)sdd++;//于月循环算法一样
            smm++;
        }
        syy++;
    }
    
    ///////////////////////////////////////////
    

//   printf("共过了 %d天 相当于%d个月 相当于%d年\n",sdd,smm,syy);
    printf("\n\n\n至今");
    printf("共花费了%d小时，",sdd*geth);
    printf("相当于花费了%d天，",(sdd*geth)/24);
    printf("相当于花费了%d年",(sdd*geth)/24/365);
    printf("的时间\n\n\t\t\t    在!   睡!   觉!    上！\n\n\n\n\n\n");
    return 0;
}