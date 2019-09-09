#include <stdio.h>

int main(){
    
    float cost;
    int nr_fields;
    
    scanf("%f",&cost);
    scanf("%d",&nr_fields);
    
    float total_area = 0;
    int i;
    for(i = 0;i < nr_fields; i++){
        float width;
        float length;
        scanf("%f %f",&width,&length);
        total_area += width * length;
    }
    printf("%f",total_area * cost);
    return 0;
}
