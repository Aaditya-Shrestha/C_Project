#include<stdio.h>
#include<unistd.h>  // to use sleep();

#define RED_DUR 3
#define YELLOW_DUR 1
#define GREEN_DUR 3

void displayLight(char* light, int dur);

int main() {
    while(1)
    {
        displayLight("Red", RED_DUR);
        displayLight("Yellow", YELLOW_DUR);
        displayLight("Green", GREEN_DUR);
    }
    return 0;
}

void displayLight(char* light, int dur)
{
    printf("%s light is ON\n", light);
    
  
    for(int i = dur; i > 0; i--)
    {
        printf("%d\n", i);
        sleep(1);  
    }
    
    printf("%s light is OFF\n", light);
}
