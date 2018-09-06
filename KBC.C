#include<stdio.h>
void main()
{
int a,b,c,d,e,f,g,h,i,j,k,t=0;
   printf("the instructions are:\n");
   printf("You have to make the order of the fastest finger first in order as asked by the question in numbers i.e 1234 say");
   printf("you have to put the numbers as answer to the question asked to you");
	printf("The questions for fastest fingers first is:\n");
	printf("\tArrange the body parts from top to bottom\n");
	printf("\t\t1.Thigh \n ");
	printf("\t\t2.Shoulder \n");
	printf("\t\t3.Chin \n");
	printf("\t\t4.Abdomen \n");
	scanf("%d",&a);
		switch(a)
		{
			case 3241:
				printf("\tYou are selected for to play the next level\n");
				printf("\tGet ready to play kaun banega crorepati\n");
                                 t=1;
			break;
			default:
				printf("\tBetter luck next time\n");
		}

if(t==1)
{
        printf("Question for Rs 1000 is on your screen\n");
	printf("\t'Sensex'  is related to:\n \t\tand you option are\n ");
	printf("\t\t1. BSE\n");
        printf("\t\t2. NSE\n");
        printf("\t\t3. RBI\n");
        printf("\t\t4. SEBI\n");
        scanf("%d",&b);
                  switch(b)
                  {
                        case 1:
                                printf("Congratulations!!! you won 1000 Rs");
                                t=2;
                         break;
                         default:
                         printf("\tSorry!!! You won Nothing\n");
                }
}
if(t==2)
{ 
       printf("Question for Rs 5000 is on your screen\n");
       printf("\tWho among following was the longest serving Arab Leader?\n");
       printf("\t\t1. King Abdullah\n");
       printf("\t\t2. Muammar Gaddafi\n");
       printf("\t\t3. Hosni Mubarak\n");
       printf("\t\t4. Bashar-al-Assad\n");
       scanf("%d",&c);
		switch(c)
                {
                      case 2:
                               printf("Congratulations!!! You won 5000 Rs");
                               t=3;
                       break;
		       default:
                       printf("\tSorry!!! You won Nothing\n");
                }
}
if(t==3)
{
       printf("Question for Rs 25000 is on your screen\n");                      
       printf("\tMS Dhoni is_________ Captain of Indian Cricket Team\n");
       printf("\t\t1. 21st\n");
       printf("\t\t2. 30th\n");
       printf("\t\t3.45th \n");
       printf("\t\t4. 34th\n");
       scanf("%d",&d);
                switch(d)
                {
                      case 4:
                               printf("Congratulations!!! You won 25000 Rs");
                               t=4;
                       break;
                       default:
                       printf("\tSorry!!! You won Nothing\n");
                }       
}
if(t==4)
{
       printf("Question for Rs 50000 is on your screen\n");                      
       printf("\tWal-Mart in India is associated with\n");
       printf("\t\t1. Big Bazaar\n");
       printf("\t\t2. Spencer's Retail\n");
       printf("\t\t3. Easy Day Stores\n");
       printf("\t\t4. Spur Retail\n");
       scanf("%d",&e);
                switch(e)
                {
                      case 3:
                               printf("Congratulations!!! You won 50000 Rs\n");
                               printf(" You have Cleared the 1st level of the game");
                               t=5;
                       break;
                       default:
                       printf("\tSorry!!! You won Nothing\n");
                }       
}
if(t==5)
{
       printf("Question for Rs 100000 is on your screen\n");                      
       printf("\tName of the Nokia's Mobile phone Operating System\n");
       printf("\t\t1. Android\n");
       printf("\t\t2. Windows \n");
       printf("\t\t3. Symbian\n");
       printf("\t\t4. JAVA\n");
       scanf("%d",&f);
                switch(f)
                {
                      case 3:
                               printf("Congratulations!!! You won 100000 Rs");
                               t=6;
                       break;
                       default:
                       printf("\tSorry!!! your answer was wrong you won only 500000 Rs try next time\n");
                }       
}
if(t==6)
{
       printf("Question for Rs1000000 is on your screen\n");                      
       printf("\tWhich was the India's first scheduled Airline?\n");
       printf("\t\t1. Air India\n");
       printf("\t\t2. Tata Airlines\n");
       printf("\t\t3. Indian Airlines\n");
       printf("\t\t4. Air Birla\n");
       scanf("%d",&g);
                switch(g)
                {
                      case 2:
                               printf("Congratulations!!! You won 1000000 Rs");
                               t=7;                      
		       break;
                       default:
                       printf("\tSorry!!! your answer was wrong you won only 500000 Rs try next time\n");
                }       
}
if(t==7)
{
       printf("Question for Rs5000000 is on your screen\n");
       printf("\tWhich Political Party does Sri Ajit Singh represents?\n");
       printf("\t\t1. Rashtriya Lok Dal\n");
       printf("\t\t2. Samta Party\n");
       printf("\t\t3. Samajwadi Party\n");
       printf("\t\t4. Jan Lok Dal\n");
       scanf("%d",&h);
                switch(h)
                {
                      case 1:
                               printf("Congratulations!!! You won 5000000 Rs");
                               t=8;
                       break;
                       default:
                       printf("\tSorry!!! your answer was wrong you won only 500000 Rs try next time\n");
                }       
}
if(t==8)
{
       printf("Question for Rs10000000 is on your screen\n");
       printf("\t'Mahatma Gandhi Rural Employment Guarentee Act' provides employment guarantee for how many days per year?\n");
       printf("\t\t1. 120\n");
       printf("\t\t2. 100\n");
       printf("\t\t3. 180\n");
       printf("\t\t4. 150\n");
       scanf("%d",&i);
                switch(i)
                {
                      case 2:
                               printf("Congratulations!!! You won 10000000 Rs\n");
                               printf("You have cleared the 2nd level of the game ");
                               t=9;
                       break;
                       default:
                       printf("\tSorry!!! your answer was wrong you won only 500000 Rs try next time\n");
                }       
}
if(t==9)
{
       printf("Question for Rs 50000000 is on your screen\n");
       printf("\tWhat is the current FDI upper cap in telecom in India?\n");
       printf("\t\t1. 51%\n");
       printf("\t\t2. 74%\n");
       printf("\t\t3. 67%\n");
       printf("\t\t4. No cap\n");
       scanf("%d",&j);
                switch(j)
                {
                      case 2:
                               printf("Congratulations!!! You won 50000000 Rs");
                               t=10;
                       break;
                       default:
                       printf("\tSorry!!! your answer was wrong you won only 10000000 Rs try next time\n");
                }       
}
if(t==10)
{
       printf("Question for Rs 70000000 is on your screen\n");
       printf("\tWho among following ordered 'Jallian Wala Bagh Massacre'?\n");
       printf("\t\t1. Lord Mountbatten\n");
       printf("\t\t2. John Simon\n");
       printf("\t\t3. Reginald Dyer\n");
       printf("\t\t4. N.D.K MacEven\n");
       scanf("%d",&k);
                switch(k)
                {
                      case 3:
                               printf("Congratulations!!! You won 70000000 Rs");
                               printf("Congratulations!!! YOU won the game\n");
                               printf("You become the owner of  7 crore ");
                       break;
                       default:
                       printf("\tSorry!!! your answer was wrong you won only 10000000 Rs try next time\n");
                }       
}

}

