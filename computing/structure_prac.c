#include <stdio.h>

struct Point{
    float x;
    float y;
};

struct Rectangle{
    struct Point a;
    struct Point b;
};

typedef struct Point Point;
typedef struct Rectangle Rectangle;

float width(Rectangle);
float height(Rectangle);
float area(Rectangle);
void midpoint(Rectangle);

int main(void){

    Point point1 = {1, 5};
    Point point2 = {6, 1};

    Rectangle rect = {point1, point2};

    float w = width(rect);

    float h = height(rect);

    float a = area(rect);

    printf("width : %f\nheight: %f\narea: %f\n", w, h, a);

    midpoint(rect);

    return 0;
}

float width(Rectangle rect){
    if (rect.a.x > rect.b.x)
    {
        return rect.a.x - rect.b.x;
    }else{
        return rect.b.x - rect.a.x;
    }
}

float height(Rectangle rect){
    if (rect.a.y > rect.b.y)
    {
        return rect.a.y - rect.b.y;
    }else{
        return rect.b.y - rect.a.y;
    }
}


float area(Rectangle rect){
    return width(rect) * height(rect);
}

void midpoint(Rectangle rect){
    printf("The midpoint of this rectangle is x = %f, y = %f", (rect.a.x + rect.b.x) / 2, (rect.a.y + rect.b.y) / 2);
}