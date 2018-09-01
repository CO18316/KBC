#include <stdio.h>
void question1();
void main()
{

 printf("\n\n\n\n\n\t\t\tWELCOME TO KAUN BANEGA CROREPATI\n\n\n");
 question1();
}
char a,b,c,d,A,B,C,D,ans;
void question2();
void question1()
{
 getchar();
 printf("\nQ1.Jakarta is the capital of ?");
 printf("\n A.Malaysia \n B. Indonesia");
 printf("\n C. Japan\
 \nD. Europe \n");
 scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'C':
  case 'c':
  case 'D':
  case 'd':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'B':
  case 'b':
   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.1,000!!\n\n");
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }

 if(ans == 'B' || ans == 'b')
 {
  getchar();
  question2();
 }
}
void question3();
void question2()
{
 printf("\nQ2. Sometimes computers and cash registers in a foodmart are connected to a UPS system. What does UPS mean?");
 printf("\nA. United Parcel Service \t B. Uniform Product Support");
 printf("\nC. Under Paneling Storage\t D.Uninterruptable Power Supply\n");
 scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'C':
  case 'c':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'D':
  case 'd':
  {
   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.2,000!!\n\n\n");
  }
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }

 if(ans == 'D' || ans == 'd')
 {
  question3();
 }

}
void question4();
void question3()
{

 getchar();

 printf("Q3.Who is the author of Hamlet?");
 printf("\nA. Christopher Marlowe\t B. William Shakespeare");
 printf("\nC. Geoffrey Chaucer\t D. Edith Wharton\n");
 scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'C':
  case 'c':
  case 'D':
  case 'd':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'B':
  case 'b':
  {
   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.3,000!!\n\n\n");
  }
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }
 if(ans == 'B' || ans == 'b')
 {
  question4();
 }

}
void question5();
void question4()
{
 getchar();

 printf("Q4.What frequency range is the High Frequency band?");
 printf("\nA. 100 kHz\tB. 1GHz");
 printf("\nC. 30 to 300 MHz\t D. 3 to 30 MHz\n");
 scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'C':
  case 'c':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'D':
  case 'd':

   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.5,000!!\n\n\n");

  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }
 if(ans == 'D' || ans == 'd')
 {
  question5();
 }

}
void question6();
void question5()
{
 getchar();
 printf("Q5.What does EPROM stand for?");
 printf("\nA. Electric Programmable Read Only Memory\
 \n    B. Erasable Programmable Read Only Memory");

 printf("\n| C. Evaluable Philotic Random Optic Memory \
 \n   D. Every Person Requires One Mind\n");
 scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'C':
  case 'c':
  case 'D':
  case 'd':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'B':
  case 'b':

   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.10,000!!\n\n\n");

  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }
 if(ans == 'B' || ans == 'b')
 {
  question6();
 }

}
void question7();
void question6()
{
 getchar();
 printf("Q6.Which motor is NOT suitable for use as a DC machine?");
 printf("\nA. Permanent magnet motor \t B. Series motor");
 printf("\nC. Squirrel cage motor \t D. Synchronous motor\n");
 scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'D':
  case 'd':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'C':
  case 'c':

   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.25,000!!\n\n\n");

  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }
 if(ans == 'C' || ans == 'c')
 {
  question7();
 }

}
void question8();
void question7()
{
 getchar();
 printf("Q7.Compact discs, (according to the original CD specifications)hold how many minutes of music?");
 printf("\nA. 74 mins\t B. 56 mins");
 printf("\nC. 60 mins\t D. 90 mins\n");
 scanf("%c",&ans);

 switch(ans)
 {
  case 'B':
  case 'b':
  case 'C':
  case 'c':
  case 'D':
  case 'd':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'A':
  case 'a':
  
   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.50,000!!\n\n\n");
  
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }
 if(ans == 'A' || ans == 'a')
 {
  question8();
 }

}
void question9();
void question8()
{
 getchar();
 printf("Q8.Who was played by Kenneth Branagh in 'Hamlet' (1996)?");
 printf("\n| A. Horatio\t\t     \t B. Laertes\t\t\t");
 printf("\n| C. Polonius\t\t     \t D. Hamlet\t\t\t\n");
 scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'C':
  case 'c':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'D':
  case 'd':
  
   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.1,00,000!!\n\n\n");
  
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }
 if(ans == 'D' || ans == 'd')
 {
  question9();
 }

}
void question10();
void question9()
{

 getchar();
 printf("Q9.Which famous national leader of India has written books on the ancient Greek philosopher Socrates and the ancient Roman king Marcus Aurelius?");
 printf("\nA. Mahatma Gandhi\t B. Jawaharlal Nehru");
 printf("\nC. Bal Gangadhar Tilak\t D. C.Rajagopalachari\n");
 scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'C':
  case 'c':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'D':
  case 'd':
  
   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.10,00,000!!\n\n\n");
  
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }
 if(ans == 'D' || ans == 'd')
 {
  question10();
 }

}
void question11();
void question10()
{
  getchar();
  printf("\n\nQ10.Sishu is the literary work of which Indian author?");
  printf("\nA. Jawaharlal Nehru");
  printf("\nB. Arundhati Roy");
  printf("\nC. Rabindranath Tagore");
  printf("\nD. Vikram Seth \n");
  scanf("%c",&ans);

  switch(ans)
  {
   case 'A':
   case 'a':
   case 'B':
   case 'b':
   case 'D':
   case 'd':
    printf("\n\nWRONG ANSWER!!");
   break;
   case 'C':
   case 'c':
  
    printf("\n\nCORRECT ANSWER!!");
    printf("\n\nYOU WON Rs.50,00,000!!\n\n\n");
   
   break;
   default:
    printf("\n\nIMPROPER CHOICE!!");
  }

  if(ans == 'C' || ans == 'c')
  {
   question11();
  }
}
void question12();
void question11()
{
  getchar();
  printf("\n\nQ11.What was the active medium used in the first working laser ever constructed?");
  printf("\nA. Helium-neon gas");
  printf("\nB. A ruby rod");
  printf("\nC. A diamond block ");
  printf("\nD. Carbon dioxide gas\n");
  scanf("%c",&ans);

  switch(ans)
  {
   case 'A':
   case 'a':
   case 'C':
   case 'c':
   case 'D':
   case 'd':
    printf("\n\nWRONG ANSWER!!");
   break;
   case 'B':
   case 'b':
   {
    printf("\n\nCORRECT ANSWER!!");
    printf("\n\nYOU WON Rs.1,00,00,000!!\n\n\n");
   }
   break;
   default:
    printf("\n\nIMPROPER CHOICE!!");
  }

  if(ans == 'B' || ans == 'b')
  {
   printf("CONGRATULATIONS!!You are now a CROREPATI\n ");
  }
}
void question13();
void question12()
{
  getchar();
  printf("\n\nQ12.Who Has the highest batting average in international cricket?");
  printf("\nA. Virat Kohli");
  printf("\nB. Don Bradman");
  printf("\nC. Sachin Tendulkar ");
  printf("\nD. MS Dhoni\n");
  scanf("%c",&ans);

  switch(ans)
  {
   case 'A':
   case 'a':
   case 'C':
   case 'c':
   case 'D':
   case 'd':
    printf("\n\nWRONG ANSWER!!");
   break;
   case 'B':
   case 'b':
   {
    printf("\n\nCORRECT ANSWER!!");
    printf("\n\nYOU WON Rs.3,00,00,000!!\n\n\n");
   }
   break;
   default:
    printf("\n\nIMPROPER CHOICE!!");
  }

  if(ans == 'B' || ans == 'b')
  {
   question13();
  }
}
void question14();
void question13()
{
  getchar();
  printf("\n\nQ12.Grand Central Terminal, Park Avenue, New York is the world's");
  printf("\nA. Highest railway station");
  printf("\nB. largest railway station");
  printf("\nC. Longest railway station ");
  printf("\nD. None of the above\n");
  scanf("%c",&ans);

  switch(ans)
  {
   case 'A':
   case 'a':
   case 'C':
   case 'c':
   case 'D':
   case 'd':
    printf("\n\nWRONG ANSWER!!");
   break;
   case 'B':
   case 'b':
   {
    printf("\n\nCORRECT ANSWER!!");
    printf("\n\nYOU WON Rs.5,00,00,000!!\n\n\n");
   }
   break;
   default:
    printf("\n\nIMPROPER CHOICE!!");
  }

  if(ans == 'B' || ans == 'b')
  {
   question14();
  }
}
void question15();
void question14()
{
  getchar();
  printf("\n\nQ14.Sishu is the literary work of which Indian author?");
  printf("\nA. Jawaharlal Nehru");
  printf("\nB. Arundhati Roy");
  printf("\nC. Rabindranath Tagore");
  printf("\nD. Vikram Seth \n");
  scanf("%c",&ans);

  switch(ans)
  {
   case 'A':
   case 'a':
   case 'B':
   case 'b':
   case 'D':
   case 'd':
    printf("\n\nWRONG ANSWER!!");
   break;
   case 'C':
   case 'c':
  
    printf("\n\nCORRECT ANSWER!!");
    printf("\n\nYOU WON Rs.7,00,00,000!!\n\n\n");
   
   break;
   default:
    printf("\n\nIMPROPER CHOICE!!");
  }

  if(ans == 'C' || ans == 'c')
  {
   question15();
  }
}
void question15()
{

 getchar();
 printf("Q9.Which famous national leader of India has written books on the ancient Greek philosopher Socrates and the ancient Roman king Marcus Aurelius?");
 printf("\nA. Mahatma Gandhi\t B. Jawaharlal Nehru");
 printf("\nC. Bal Gangadhar Tilak\t D. C.Rajagopalachari\n");
 scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'C':
  case 'c':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'D':
  case 'd':
  
   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.1,00,00,000!!\n\n\n");
  
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }
 if(ans == 'D' || ans == 'd')
 {
  printf("Congragulations!!! You are now a true CROREPATI!!!\n\n\t Thank You\n\n");
 }

}
