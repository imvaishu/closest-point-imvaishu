#include "point.h"
#include <stdio.h>
#include <math.h>


double get_short_distance(Point a,Point b)
{
  return sqrt(pow(b.x - a.x , 2) + pow(b.y - a.y,2));
}

void get_closest_food(Point food_points[], int points_length,Point current_location, Point *closest_food_location)
{
    double distance = get_short_distance(food_points[0],current_location);
    *closest_food_location = food_points[0];

    for(int index = 0 ; index < points_length ; index++)
    {
      double current_food_distance = get_short_distance(food_points[index],current_location);
      if(current_food_distance < distance)
      {
        *closest_food_location = food_points[index];
        distance = current_food_distance;
      }
    }
}
