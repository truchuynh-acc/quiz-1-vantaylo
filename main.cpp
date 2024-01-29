#include <iostream>
#include <string>

class Car
{
public:
  void setCar(std::string color, std::string model, int year)
  {
    this->color = color;
    this->model = model;
    this->year = year;

    return;
  };

  std::string getColor()
  {
    return color;
  }
  std::string getModel()
  {
    return model;
  }
  int getYear()
  {
    return year;
  };

  void displayDetails()
  {
    std::cout << "Year: " << year << ",  Color: " << color << ", Model: " << model << std::endl;
  }

private:
  std::string model;
  int year;
  std::string color;
};

int main()
{
  Car myCar;
  myCar.setCar("Blue", "M235i", 2016);
  std::cout << "The color of the car is " << myCar.getColor() << std::endl;
  std::cout << "The model of the car is " << myCar.getModel() << std::endl;
  std::cout << "The year of the car is " << myCar.getYear() << std::endl;
  myCar.displayDetails();

  return 0;
};
