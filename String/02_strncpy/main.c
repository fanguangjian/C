#include <stdio.h>
#include <string.h>
#include<stdlib.h> // ato
void test2();

int main( int argc, char *argv[])
{
//    printf("Hello World!\n");
//    2. 使用 strcpy
    //使用strcpy函数时，必须保证第一个参数的内存足够大
    char s1[35] = "12345";
    char s2[32] = "abcdefg";

    strcpy(s1, s2);

    printf("s1 = %s\n", s1); //s1 = abcdefg

//    3. strcat 字符串追加函数
    char s11[32] = "hello world";
    char s12[32] = "abcdef";
    //strcat是从s1的\0的位置开始追加，直到s2的第一个\0复制完毕后结束
     strcat(s11, s12);
     printf("s11 = %s\n", s11); //s1 = hello worldabcdef

//     4.功能:strcmp是比较两个字符串的内容，strncmp是比较两个字符串的前n个字节是否一样 5 参数:
//     s1、s2:要比较的两个字符串
//     n:strncmp中的参数n表示要比较的字节数
     //使用strcmp比较两个字符串的内容是否一致
     //strcmp函数一个字符一个字符比较，只要出现不一样的，就会立即返回
     char s21[] = "hello";
     char s22[] = "a";

     int req = strcmp(s21, s22);
     if(req == 0){
         printf("s21 = s22\n");
     }else if(req > 0) {
         printf("s21 > s22\n");
     } else {
         printf("s21 < s22\n");
     }


     //5, 使用strchr函数在一个字符串中查找字符
     char s[] = "hel6lo wor6ld";
     //找第一个匹配的字符
     char *ret = strchr(s, '6');
     //找最后一个匹配的字符
     //char *ret = strrchr(s, '6');

     if(ret == NULL){
         printf("没有找到");
     }else {
         printf("找到了，在数组的第%d个位置\n", ret - s);
//         printf("找到了，在数组的第%d个位置\n", ret);
//         printf("找到了，在数组的第%d个位置\n", s);
     }

     //6 使用strstr函数在一个字符串中查找另一个字符串
     char s6[] = "1234:4567:666:789:666:7777";

     //strstr查找的时候，查找的是第二个参数的第一个\0之前的内容
     char *ret6 = strstr(s6, "666");


     if(ret6 == NULL){
         printf("没有找到");
     }else {
         printf("找到了，在数组的第%d个位置\n", ret6 - s6);
//         printf("找到了，在数组的第%d个位置\n", ret6);
//         printf("找到了，在数组的第%d个位置\n", s);
     }

     //7 string 转数值
     //使用atoi将数字型字符串转化为整形数据
   /*   char s7[] = "7856";
      int ret7 = atoi(s7);
      printf("ret7 = %d\n", ret7)*/;

      //使用atof将浮点型的字符串转化为浮点型数据
      char s7[] = "3.1415926";
      double ret71 = atof(s7);
      printf("ret71 = %lf\n", ret71);


      //8 使用strtok函数切割字符串
//      char s8[] = "111:22222:33:4444444444:5555555555555";
//      char *ret8;

      //第一次切割
//       ret8 = strtok(s8, ":");
//       printf("ret = %s\n", ret8);

//       char str[80] = "This is - www.runoob.com - website";
//          const char ss[2] = "-";
//          char *token;

//          /* 获取第一个子字符串 */
//          token = strtok(str, ss);

//          /* 继续获取其他的子字符串 */
//          while( token != NULL ) {
//             printf( "%s\n", token );
//             token = strtok(NULL, ss);
//          }
//          printf("\n%s\n",str);

      //9 格式化 sprintf()   sscanf()
       test2();







    return 0;
}



//sscanf高级用法
 void test2()
{
 //1、跳过数据:%*s或%*d
 char buf1[20];
 sscanf("1234 5678","%*d %s",buf1);
 printf("%s\n",buf1);//5678

 //2、读指定宽度的数据:%[width]s
 char buf2[20];
 sscanf("12345678","%4s ",buf2);
 printf("%s\n",buf2); //1234

 //3、支持集合操作:只支持获取字符串
 // %[a‐z] 表示匹配a到z中任意字符(尽可能多的匹配)
 // %[aBc] 匹配a、B、c中一员，贪婪性
 // %[^aFc] 匹配非a、F、c的任意字符，贪婪性
 // %[^a‐z] 表示读取除a‐z以外的所有字符
 char buf3[20];
 sscanf("agcd32DajfDdFF","%[a‐z]",buf3);
 printf("%s\n",buf3); //a
 }
