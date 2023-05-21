#include <stdio.h>

int main() {
  float side, length, breadth, base, height, radius, area, surface_area;
  int choice;

  printf("1. To find area of square\n");
  printf("2. To find area of rectangle\n");
  printf("3. To find area of triangle\n");
  printf("4. To find surface area of square\n");
  printf("5. To find surface area of rectangle\n");
  printf("6. To find surface area of triangle\n");

  printf("Enter your choice: ");
  scanf("%d", &choice);

  switch (choice) {
    case 1:
      printf("Enter the side of the square: ");
      scanf("%f", &side);
      area = side * side;
      printf("The area of the square is %f\n", area);
      break;
    case 2:
      printf("Enter the length of the rectangle: ");
      scanf("%f", &length);
      printf("Enter the breadth of the rectangle: ");
      scanf("%f", &breadth);
      area = length * breadth;
      printf("The area of the rectangle is %f\n", area);
      break;
    case 3:
      printf("Enter the base of the triangle: ");
      scanf("%f", &base);
      printf("Enter the height of the triangle: ");
      scanf("%f", &height);
      area = (base * height) / 2;
      printf("The area of the triangle is %f\n", area);
      break;
    case 4:
      printf("Enter the side of the square: ");
      scanf("%f", &side);
      surface_area = 4 * side * side;
      printf("The surface area of the square is %f\n", surface_area);
      break;
    case 5:
      printf("Enter the length of the rectangle: ");
      scanf("%f", &length);
      printf("Enter the breadth of the rectangle: ");
      scanf("%f", &breadth);
      surface_area = (2 * length * breadth + 2 * breadth * height);
      printf("The surface area of the rectangle is %f\n", surface_area);
      break;
    case 6:
      printf("Enter the base of the triangle: ");
      scanf("%f", &base);
      printf("Enter the height of the triangle: ");
      scanf("%f", &height);
      surface_area = base * height + 2 * base * height / 2;
      printf("The surface area of the triangle is %f\n", surface_area);
      break;
    default:
      printf("Invalid choice\n");
      break;
  }
  return 0;
}
