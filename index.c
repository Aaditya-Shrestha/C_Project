#include<stdio.h>
#include<unistd.h>  // to use sleep();

#define RED_DUR 3
#define YELLOW_DUR 1
#define GREEN_DUR 3

//void system();
void displayLight(char* light, int dur);

int main()  {
    while(1)
    {
        displayLight("Red",RED_DUR);
        displayLight("Yellow",YELLOW_DUR);
        displayLight("Green",GREEN_DUR);
    }
    return 0;
}

void displayLight(char* light, int dur)
{   //system("cls");
    printf("%s light is ON\n",light);
    sleep(dur);
    printf("%s light id OFF\n",light);
}