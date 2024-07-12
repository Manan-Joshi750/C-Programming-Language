#include <stdio.h>
// Function to determine and print "hot" or "mild cold" or "cold" based on temperature user enters.
void checkTemperature(int temperature);
    
int main() {
    int temperature;
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &temperature);
    
    checkTemperature(temperature);
    return 0;
}

void checkTemperature(int temperature){
    if (temperature >= 30) {
        printf("It's hot!\n");
    } else if (temperature >= 20 && temperature < 30) {
        printf("It's mild cold!\n");
    }  else if (temperature >= 0 && temperature < 20) {
        printf("It's cold!\n");
    } else {
        printf("Invalid temperature input.\n");
    }
}

