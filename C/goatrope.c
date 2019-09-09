#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int goat_x;
    int goat_y;
    int house_x1;
    int house_y1;
    int house_x2;
    int house_y2;
    
    scanf("%d %d %d %d %d %d",&goat_x,&goat_y,&house_x1,&house_y1,&house_x2,&house_y2);
    
    
    double distance_x1 = abs((double) goat_x - (double) house_x1);
    double distance_x2 = abs((double) goat_x - (double) house_x2);
    
    if(distance_x1 < distance_x2){
        distance_x1 = distance_x2; 
    }
    double distance_y1 = abs((double) goat_y - (double) house_y1);
    double distance_y2 = abs((double) goat_y - (double) house_y2);
        
    if(distance_y1 < distance_y2){
        distance_y1 = distance_y2; 
    }
    
    double shorter = distance_x1;
    
    if (shorter > distance_y1){
        shorter = distance_y1;
    }
    printf("%lf\n",shorter);
    
    
    return 0;
}
